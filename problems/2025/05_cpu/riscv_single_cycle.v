module riscv_single_cycle(
    input  wire        clk,
    input  wire        rst_n,
    output wire [31:0] imem_addr,
    input  wire [31:0] imem_data,
    output wire [31:0] dmem_addr,
    input  wire [31:0] dmem_rdata,
    output wire [31:0] dmem_wdata,
    output wire        dmem_we
);

    // === 1. PC ===
    reg [31:0] pc;
    always @(posedge clk or negedge rst_n)
        if (!rst_n)
            pc <= 32'h10000; // Адрес сброса
        else
            pc <= pc_next;

    assign imem_addr = pc;

    // === 2. Декодер инструкции ===
    wire [31:0] instr = imem_data;
    wire [6:0]  opcode = instr[6:0];
    wire [4:0]  rd     = instr[11:7];
    wire [2:0]  funct3 = instr[14:12];
    wire [4:0]  rs1    = instr[19:15];
    wire [4:0]  rs2    = instr[24:20];
    wire [6:0]  funct7 = instr[31:25];

    // === 3. Immediate генерация ===
    wire [31:0] imm_i = {{20{instr[31]}}, instr[31:20]};
    wire [31:0] imm_s = {{20{instr[31]}}, instr[31:25], instr[11:7]};
    wire [31:0] imm_b = {{19{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0};
    wire [31:0] imm_u = {instr[31:12], 12'b0};
    wire [31:0] imm_j = {{11{instr[31]}}, instr[31], instr[19:12], instr[20], instr[30:21], 1'b0};

    // === 4. Регистровый файл ===
    wire [31:0] reg_rdata1, reg_rdata2;
    reg [31:0]  reg_wdata;
    reg         reg_we;
    regfile rf(
        .clk(clk),
        .we(reg_we),
        .ra1(rs1),
        .ra2(rs2),
        .wa(rd),
        .wd(reg_wdata),
        .rd1(reg_rdata1),
        .rd2(reg_rdata2)
    );

    // === 5. ALU ===
    reg [31:0] alu_a, alu_b;
    reg [3:0]  alu_op;
    wire [31:0] alu_y;
    alu alu_inst(
        .a(alu_a),
        .b(alu_b),
        .op(alu_op),
        .y(alu_y)
    );

    // === 6. Управляющая логика и datapath ===
    reg [31:0] pc_next;
    reg [31:0] mem_addr, mem_wdata;
    reg        mem_we;
    reg        is_mmio;
    reg [31:0] mmio_data_r;
    reg        mmio_we_r;

    always @* begin
        // По умолчанию
        alu_a = 0; alu_b = 0; alu_op = 4'b0000;
        reg_we = 0; reg_wdata = 0;
        mem_addr = 0; mem_wdata = 0; mem_we = 0;
        pc_next = pc + 4;
        is_mmio = 0;
        mmio_data_r = 0;
        mmio_we_r = 0;

        case (opcode)
            7'b0110011: begin // R-type (ADD, SUB, AND, OR, etc)
                alu_a = reg_rdata1;
                alu_b = reg_rdata2;
                case ({funct7, funct3})
                    10'b0000000_000: alu_op = 4'b0000; // ADD
                    10'b0100000_000: alu_op = 4'b1000; // SUB
                    10'b0000000_111: alu_op = 4'b0111; // AND
                    10'b0000000_110: alu_op = 4'b0110; // OR
                    10'b0000000_100: alu_op = 4'b0100; // XOR
                    10'b0000000_001: alu_op = 4'b0001; // SLL
                    10'b0000000_101: alu_op = 4'b0101; // SRL
                    10'b0100000_101: alu_op = 4'b1101; // SRA
                    10'b0000000_010: alu_op = 4'b0010; // SLT
                    10'b0000000_011: alu_op = 4'b0011; // SLTU
                    default:         alu_op = 4'b0000;
                endcase
                reg_we = (rd != 0);
                reg_wdata = alu_y;
            end
            7'b0010011: begin // I-type (ADDI, ANDI, ORI, etc)
                alu_a = reg_rdata1;
                alu_b = imm_i;
                case (funct3)
                    3'b000: alu_op = 4'b0000; // ADDI
                    3'b111: alu_op = 4'b0111; // ANDI
                    3'b110: alu_op = 4'b0110; // ORI
                    3'b100: alu_op = 4'b0100; // XORI
                    3'b001: alu_op = 4'b0001; // SLLI
                    3'b101: begin
                        if (funct7 == 7'b0000000) alu_op = 4'b0101; // SRLI
                        else                      alu_op = 4'b1101; // SRAI
                    end
                    3'b010: alu_op = 4'b0010; // SLTI
                    3'b011: alu_op = 4'b0011; // SLTIU
                    default: alu_op = 4'b0000;
                endcase
                reg_we = (rd != 0);
                reg_wdata = alu_y;
            end
            7'b0000011: begin // LOAD
                alu_a = reg_rdata1;
                alu_b = imm_i;
                alu_op = 4'b0000; // ADD
                mem_addr = alu_y;
                reg_we = (rd != 0);
                reg_wdata = dmem_rdata;
            end
            7'b0100011: begin // STORE
                alu_a = reg_rdata1;
                alu_b = imm_s;
                alu_op = 4'b0000; // ADD
                mem_addr = alu_y;
                mem_wdata = reg_rdata2;
                mem_we = 1;
                if (alu_y == 32'h20) begin
                    is_mmio = 1;
                    mmio_data_r = reg_rdata2;
                    mmio_we_r = 1;
                end
            end
            7'b1100011: begin // BRANCH
                alu_a = reg_rdata1;
                alu_b = reg_rdata2;
                case (funct3)
                    3'b000: if (alu_a == alu_b) pc_next = pc + imm_b; // BEQ
                    3'b001: if (alu_a != alu_b) pc_next = pc + imm_b; // BNE
                    3'b100: if ($signed(alu_a) < $signed(alu_b)) pc_next = pc + imm_b; // BLT
                    3'b101: if ($signed(alu_a) >= $signed(alu_b)) pc_next = pc + imm_b; // BGE
                    3'b110: if (alu_a < alu_b) pc_next = pc + imm_b; // BLTU
                    3'b111: if (alu_a >= alu_b) pc_next = pc + imm_b; // BGEU
                    default: ;
                endcase
            end
            7'b1101111: begin // JAL
                reg_we = (rd != 0);
                reg_wdata = pc + 4;
                pc_next = pc + imm_j;
            end
            7'b1100111: begin // JALR
                reg_we = (rd != 0);
                reg_wdata = pc + 4;
                pc_next = (reg_rdata1 + imm_i) & ~32'b1;
            end
            7'b0110111: begin // LUI
                reg_we = (rd != 0);
                reg_wdata = imm_u;
            end
            7'b0010111: begin // AUIPC
                reg_we = (rd != 0);
                reg_wdata = pc + imm_u;
            end
            default: ;
        endcase
    end

    // === 7. Связь с памятью и MMIO ===
    assign dmem_addr  = mem_addr;
    assign dmem_wdata = mem_wdata;
    assign dmem_we    = mem_we & ~is_mmio;
    assign mmio_data  = mmio_data_r;
    assign mmio_we    = mmio_we_r;

endmodule
