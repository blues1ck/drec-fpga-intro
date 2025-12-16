// AXI-Lite Slave Interface for Systolic Array Control Registers
// Provides register access for control signals and addresses
module axi_lite_slave #(
    parameter int ADDR_WIDTH = 32,
    parameter int DATA_WIDTH = 32
) (
    input  logic                       clk,
    input  logic                       rst_n,
    // AXI-Lite Write Address Channel
    input  logic                       s_axi_awvalid,
    output logic                       s_axi_awready,
    input  logic [ADDR_WIDTH-1:0]      s_axi_awaddr,
    input  logic [2:0]                 s_axi_awprot,
    // AXI-Lite Write Data Channel
    input  logic                       s_axi_wvalid,
    output logic                       s_axi_wready,
    input  logic [DATA_WIDTH-1:0]      s_axi_wdata,
    input  logic [(DATA_WIDTH/8)-1:0]  s_axi_wstrb,
    // AXI-Lite Write Response Channel
    output logic                       s_axi_bvalid,
    input  logic                       s_axi_bready,
    output logic [1:0]                 s_axi_bresp,
    // AXI-Lite Read Address Channel
    input  logic                       s_axi_arvalid,
    output logic                       s_axi_arready,
    input  logic [ADDR_WIDTH-1:0]      s_axi_araddr,
    input  logic [2:0]                 s_axi_arprot,
    // AXI-Lite Read Data Channel
    output logic                       s_axi_rvalid,
    input  logic                       s_axi_rready,
    output logic [DATA_WIDTH-1:0]      s_axi_rdata,
    output logic [1:0]                 s_axi_rresp,
    // Register interface
    output logic                       reg_start_b,     // Start loading matrix B (pulse)
    output logic                       reg_start_ac,    // Start loading A and writing C (pulse)
    input  logic                       reg_busy,        // Busy status
    output logic [ADDR_WIDTH-1:0]      reg_addr_b,      // Base address for matrix B
    output logic [ADDR_WIDTH-1:0]      reg_addr_a,      // Base address for matrix A
    output logic [ADDR_WIDTH-1:0]      reg_addr_c       // Base address for matrix C
);

    localparam int REG_ADDR_WIDTH = 4;  // 4-bit address = 16 registers max
    localparam int BYTE_ADDR_WIDTH = $clog2(DATA_WIDTH/8);

    // Register map:
    // 0x00: Control register (RW) - bits[0]: start_b, bit[1]: start_ac, bit[2]: busy (RO)
    // 0x04: Address B register (RW)
    // 0x08: Address A register (RW)
    // 0x0C: Address C register (RW)

    logic [1:0] ctrl_reg;
    logic [ADDR_WIDTH-1:0] addr_b_reg;
    logic [ADDR_WIDTH-1:0] addr_a_reg;
    logic [ADDR_WIDTH-1:0] addr_c_reg;

    // Write address channel
    logic aw_handshake;
    logic w_handshake;
    logic [ADDR_WIDTH-1:0] awaddr_latched;

    assign aw_handshake = s_axi_awvalid && s_axi_awready;
    assign w_handshake  = s_axi_wvalid && s_axi_wready;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            s_axi_awready <= 1'b0;
            awaddr_latched <= '0;
        end else begin
            if (!s_axi_awready && s_axi_awvalid) begin
                s_axi_awready <= 1'b1;
                awaddr_latched <= s_axi_awaddr;
            end else begin
                s_axi_awready <= 1'b0;
            end
        end
    end

    // Write data channel
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            s_axi_wready <= 1'b0;
        end else begin
            if (!s_axi_wready && s_axi_wvalid && s_axi_awready) begin
                s_axi_wready <= 1'b1;
            end else begin
                s_axi_wready <= 1'b0;
            end
        end
    end

    // Write registers
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            ctrl_reg <= '0;
            addr_b_reg <= '0;
            addr_a_reg <= '0;
            addr_c_reg <= '0;
        end else begin
            if (aw_handshake && w_handshake) begin
                case (awaddr_latched[REG_ADDR_WIDTH-1:BYTE_ADDR_WIDTH])
                    2'b00: begin  // Control register (0x00)
                        if (s_axi_wstrb[0]) begin
                            ctrl_reg[1:0] <= s_axi_wdata[1:0];
                        end
                    end
                    2'b01: begin  // Address B (0x04)
                        for (int i = 0; i < DATA_WIDTH/8; i++) begin
                            if (s_axi_wstrb[i]) begin
                                addr_b_reg[i*8 +: 8] <= s_axi_wdata[i*8 +: 8];
                            end
                        end
                    end
                    2'b10: begin  // Address A (0x08)
                        for (int i = 0; i < DATA_WIDTH/8; i++) begin
                            if (s_axi_wstrb[i]) begin
                                addr_a_reg[i*8 +: 8] <= s_axi_wdata[i*8 +: 8];
                            end
                        end
                    end
                    2'b11: begin  // Address C (0x0C)
                        for (int i = 0; i < DATA_WIDTH/8; i++) begin
                            if (s_axi_wstrb[i]) begin
                                addr_c_reg[i*8 +: 8] <= s_axi_wdata[i*8 +: 8];
                            end
                        end
                    end
                    default: begin
                        // Invalid address
                    end
                endcase
            end else begin
                // Clear start bits after one cycle (self-clearing)
                if (ctrl_reg[0] || ctrl_reg[1]) begin
                    ctrl_reg[1:0] <= 2'b00;
                end
            end
        end
    end

    // Write response channel
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            s_axi_bvalid <= 1'b0;
            s_axi_bresp  <= 2'b00;
        end else begin
            if (aw_handshake && w_handshake && !s_axi_bvalid) begin
                s_axi_bvalid <= 1'b1;
                s_axi_bresp  <= 2'b00;  // OKAY
            end else if (s_axi_bvalid && s_axi_bready) begin
                s_axi_bvalid <= 1'b0;
            end
        end
    end

    // Read address channel
    logic ar_handshake;
    logic [ADDR_WIDTH-1:0] araddr_latched;

    assign ar_handshake = s_axi_arvalid && s_axi_arready;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            s_axi_arready <= 1'b0;
            araddr_latched <= '0;
        end else begin
            if (!s_axi_arready && s_axi_arvalid) begin
                s_axi_arready <= 1'b1;
                araddr_latched <= s_axi_araddr;
            end else begin
                s_axi_arready <= 1'b0;
            end
        end
    end

    // Read data channel
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            s_axi_rvalid <= 1'b0;
            s_axi_rdata  <= '0;
            s_axi_rresp  <= 2'b00;
        end else begin
            if (ar_handshake && !s_axi_rvalid) begin
                s_axi_rvalid <= 1'b1;
                case (araddr_latched[REG_ADDR_WIDTH-1:BYTE_ADDR_WIDTH])
                    2'b00: begin  // Control register
                        s_axi_rdata <= {{(DATA_WIDTH-3){1'b0}}, reg_busy, ctrl_reg[1:0]};
                    end
                    2'b01: begin  // Address B
                        s_axi_rdata <= addr_b_reg;
                    end
                    2'b10: begin  // Address A
                        s_axi_rdata <= addr_a_reg;
                    end
                    2'b11: begin  // Address C
                        s_axi_rdata <= addr_c_reg;
                    end
                    default: begin
                        s_axi_rdata <= '0;
                        s_axi_rresp <= 2'b10;  // SLVERR
                    end
                endcase
                // Set response based on case statement - valid addresses get OKAY
                case (araddr_latched[REG_ADDR_WIDTH-1:BYTE_ADDR_WIDTH])
                    2'b00, 2'b01, 2'b10, 2'b11: begin
                        s_axi_rresp <= 2'b00;  // OKAY
                    end
                    default: begin
                        s_axi_rresp <= 2'b10;  // SLVERR
                    end
                endcase
            end else if (s_axi_rvalid && s_axi_rready) begin
                s_axi_rvalid <= 1'b0;
            end
        end
    end

    // Output register assignments
    // Generate pulse signals from control register (self-clearing after one cycle)
    logic [1:0] ctrl_reg_prev;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            ctrl_reg_prev <= '0;
        end else begin
            ctrl_reg_prev <= ctrl_reg;
        end
    end

    assign reg_start_b  = ctrl_reg[0] && !ctrl_reg_prev[0];
    assign reg_start_ac = ctrl_reg[1] && !ctrl_reg_prev[1];
    assign reg_addr_b   = addr_b_reg;
    assign reg_addr_a   = addr_a_reg;
    assign reg_addr_c   = addr_c_reg;

endmodule

