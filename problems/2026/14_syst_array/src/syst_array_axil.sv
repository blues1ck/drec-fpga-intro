module syst_array_axil #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter N = 4
) (
    input  logic clk,
    input  logic rst_n,
    input  logic [ADDR_WIDTH-1:0] s_axil_awaddr,
    input  logic [2:0]            s_axil_awprot,
    input  logic                  s_axil_awvalid,
    output logic                  s_axil_awready,
    input  logic [DATA_WIDTH-1:0] s_axil_wdata,
    input  logic [DATA_WIDTH/8-1:0] s_axil_wstrb,
    input  logic                  s_axil_wvalid,
    output logic                  s_axil_wready,
    output logic [1:0]            s_axil_bresp,
    output logic                  s_axil_bvalid,
    input  logic                  s_axil_bready,
    input  logic [ADDR_WIDTH-1:0] s_axil_araddr,
    input  logic [2:0]            s_axil_arprot,
    input  logic                  s_axil_arvalid,
    output logic                  s_axil_arready,
    output logic [DATA_WIDTH-1:0] s_axil_rdata,
    output logic                  s_axil_rvalid,
    input  logic                  s_axil_rready
);

localparam NUM = N * N;

logic [ADDR_WIDTH-1:0] reg_wr_addr;
logic [DATA_WIDTH-1:0] reg_wr_data;
logic [DATA_WIDTH/8-1:0] reg_wr_strb;
logic reg_wr_en;
logic reg_wr_okay;

logic [DATA_WIDTH-1:0] a_reg [0:NUM-1];
logic [DATA_WIDTH-1:0] b_reg [0:NUM-1];
logic [DATA_WIDTH-1:0] c_reg [0:NUM-1];
logic done;

assign s_axil_arready = 1'b1;
assign s_axil_rvalid = s_axil_arvalid;

always_comb begin
    int idx;
    logic [7:0] ar_off;
    s_axil_rdata = '0;
    ar_off = s_axil_araddr[7:0];
    if (ar_off == 8'h00) begin
        s_axil_rdata = {30'b0, done, 1'b0};
    end else if (ar_off >= 8'h10 && ar_off <= 8'h4C) begin
        idx = (ar_off - 8'h10) >> 2;
        if (idx < NUM) s_axil_rdata = a_reg[idx];
    end else if (ar_off >= 8'h50 && ar_off <= 8'h8C) begin
        idx = (ar_off - 8'h50) >> 2;
        if (idx < NUM) s_axil_rdata = b_reg[idx];
    end else if (ar_off >= 8'h90 && ar_off <= 8'hCC) begin
        idx = (ar_off - 8'h90) >> 2;
        if (idx < NUM) s_axil_rdata = c_reg[idx];
    end
end

axil2reg_wr #(
    .ADDR_WIDTH(ADDR_WIDTH),
    .DATA_WIDTH(DATA_WIDTH)
) u_axil_wr (
    .clk(clk),
    .rst_n(rst_n),
    .s_axil_awaddr(s_axil_awaddr),
    .s_axil_awprot(s_axil_awprot),
    .s_axil_awvalid(s_axil_awvalid),
    .s_axil_awready(s_axil_awready),
    .s_axil_wdata(s_axil_wdata),
    .s_axil_wstrb(s_axil_wstrb),
    .s_axil_wvalid(s_axil_wvalid),
    .s_axil_wready(s_axil_wready),
    .s_axil_bresp(s_axil_bresp),
    .s_axil_bvalid(s_axil_bvalid),
    .s_axil_bready(s_axil_bready),
    .reg_wr_addr(reg_wr_addr),
    .reg_wr_data(reg_wr_data),
    .reg_wr_strb(reg_wr_strb),
    .reg_wr_en(reg_wr_en),
    .reg_wr_okay(reg_wr_okay)
);

integer i, j, k;
integer sum;
integer a_idx;
integer b_idx;
integer c_idx;

always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        done <= 1'b0;
        reg_wr_okay <= 1'b0;
        for (i = 0; i < NUM; i = i + 1) begin
            a_reg[i] <= '0;
            b_reg[i] <= '0;
            c_reg[i] <= '0;
        end
    end else begin
        reg_wr_okay <= 1'b0;
        if (reg_wr_en) begin
            int wr_idx;
            logic [7:0] wr_off;
            reg_wr_okay <= 1'b1;
            wr_off = reg_wr_addr[7:0];
            if (wr_off >= 8'h10 && wr_off <= 8'h4C) begin
                wr_idx = (wr_off - 8'h10) >> 2;
                if (wr_idx < NUM)
                    a_reg[wr_idx] <= reg_wr_data;
            end else if (wr_off >= 8'h50 && wr_off <= 8'h8C) begin
                wr_idx = (wr_off - 8'h50) >> 2;
                if (wr_idx < NUM)
                    b_reg[wr_idx] <= reg_wr_data;
            end else if (wr_off == 8'h00 && reg_wr_data[0]) begin
                done <= 1'b0;
                for (i = 0; i < N; i = i + 1) begin
                    for (j = 0; j < N; j = j + 1) begin
                        sum = 0;
                        for (k = 0; k < N; k = k + 1) begin
                            a_idx = i * N + k;
                            b_idx = k * N + j;
                            sum = sum + $signed(a_reg[a_idx]) * $signed(b_reg[b_idx]);
                        end
                        c_idx = i * N + j;
                        c_reg[c_idx] <= sum[DATA_WIDTH-1:0];
                    end
                end
                done <= 1'b1;
            end
        end
    end
end

endmodule
