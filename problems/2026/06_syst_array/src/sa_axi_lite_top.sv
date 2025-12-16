// Top-level module with AXI-Lite slave interface for control
// This module provides AXI-Lite slave interface to control systolic array registers
module sa_axi_lite_top #(
    parameter int ADDR_WIDTH = 32,
    parameter int DATA_WIDTH = 32,
    parameter int WIDTH      = 16,
    parameter int SIZE       = 4
) (
    input  logic                       clk,
    input  logic                       rst_n,
    // AXI-Lite Slave Interface
    input  logic                       s_axi_awvalid,
    output logic                       s_axi_awready,
    input  logic [ADDR_WIDTH-1:0]      s_axi_awaddr,
    input  logic [2:0]                 s_axi_awprot,
    input  logic                       s_axi_wvalid,
    output logic                       s_axi_wready,
    input  logic [DATA_WIDTH-1:0]      s_axi_wdata,
    input  logic [(DATA_WIDTH/8)-1:0]  s_axi_wstrb,
    output logic                       s_axi_bvalid,
    input  logic                       s_axi_bready,
    output logic [1:0]                 s_axi_bresp,
    input  logic                       s_axi_arvalid,
    output logic                       s_axi_arready,
    input  logic [ADDR_WIDTH-1:0]      s_axi_araddr,
    input  logic [2:0]                 s_axi_arprot,
    output logic                       s_axi_rvalid,
    input  logic                       s_axi_rready,
    output logic [DATA_WIDTH-1:0]      s_axi_rdata,
    output logic [1:0]                 s_axi_rresp,
    // Control signals to systolic array (for future use with sa_axi_top)
    output logic                       o_start_b,
    output logic                       o_start_ac,
    input  logic                       i_busy,
    output logic [ADDR_WIDTH-1:0]      o_addr_b,
    output logic [ADDR_WIDTH-1:0]      o_addr_a,
    output logic [ADDR_WIDTH-1:0]      o_addr_c
);

    // AXI-Lite slave instance
    axi_lite_slave #(
        .ADDR_WIDTH(ADDR_WIDTH),
        .DATA_WIDTH(DATA_WIDTH)
    ) axi_lite_slave_inst (
        .clk          (clk),
        .rst_n        (rst_n),
        .s_axi_awvalid(s_axi_awvalid),
        .s_axi_awready(s_axi_awready),
        .s_axi_awaddr (s_axi_awaddr),
        .s_axi_awprot (s_axi_awprot),
        .s_axi_wvalid (s_axi_wvalid),
        .s_axi_wready (s_axi_wready),
        .s_axi_wdata  (s_axi_wdata),
        .s_axi_wstrb  (s_axi_wstrb),
        .s_axi_bvalid (s_axi_bvalid),
        .s_axi_bready (s_axi_bready),
        .s_axi_bresp  (s_axi_bresp),
        .s_axi_arvalid(s_axi_arvalid),
        .s_axi_arready(s_axi_arready),
        .s_axi_araddr (s_axi_araddr),
        .s_axi_arprot (s_axi_arprot),
        .s_axi_rvalid (s_axi_rvalid),
        .s_axi_rready (s_axi_rready),
        .s_axi_rdata  (s_axi_rdata),
        .s_axi_rresp  (s_axi_rresp),
        .reg_start_b  (o_start_b),
        .reg_start_ac (o_start_ac),
        .reg_busy     (i_busy),
        .reg_addr_b   (o_addr_b),
        .reg_addr_a   (o_addr_a),
        .reg_addr_c   (o_addr_c)
    );

endmodule

