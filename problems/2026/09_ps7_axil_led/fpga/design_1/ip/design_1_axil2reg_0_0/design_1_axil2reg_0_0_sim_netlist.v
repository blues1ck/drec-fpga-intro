// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2025 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2025.1 (lin64) Build 6140274 Wed May 21 22:58:25 MDT 2025
// Date        : Fri May 15 15:33:10 2026
// Host        : ilya-B550-GAMING-X-V2 running 64-bit Ubuntu 22.04.5 LTS
// Command     : write_verilog -force -mode funcsim
//               /home/ilya/drec-fpga-intro/problems/2026/09_ps7_axil_led/fpga/design_1/ip/design_1_axil2reg_0_0/design_1_axil2reg_0_0_sim_netlist.v
// Design      : design_1_axil2reg_0_0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7z020clg400-2
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "design_1_axil2reg_0_0,axil2reg,{}" *) (* DowngradeIPIdentifiedWarnings = "yes" *) (* IP_DEFINITION_SOURCE = "module_ref" *) 
(* X_CORE_INFO = "axil2reg,Vivado 2025.1" *) 
(* NotValidForBitStream *)
module design_1_axil2reg_0_0
   (clk,
    rst_n,
    s_axil_araddr,
    s_axil_arprot,
    s_axil_arvalid,
    s_axil_arready,
    s_axil_rdata,
    s_axil_rresp,
    s_axil_rvalid,
    s_axil_rready,
    s_axil_awaddr,
    s_axil_awprot,
    s_axil_awvalid,
    s_axil_awready,
    s_axil_wdata,
    s_axil_wstrb,
    s_axil_wvalid,
    s_axil_wready,
    s_axil_bresp,
    s_axil_bvalid,
    s_axil_bready,
    reg_rd_addr,
    reg_rd_en,
    reg_rd_data,
    reg_rd_okay,
    reg_wr_addr,
    reg_wr_data,
    reg_wr_strb,
    reg_wr_en,
    reg_wr_okay);
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 clk CLK" *) (* X_INTERFACE_MODE = "slave" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME clk, ASSOCIATED_BUSIF s_axil, FREQ_HZ 50000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN design_1_processing_system7_0_0_FCLK_CLK0, INSERT_VIP 0" *) input clk;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 rst_n RST" *) (* X_INTERFACE_MODE = "slave" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME rst_n, POLARITY ACTIVE_LOW, INSERT_VIP 0" *) input rst_n;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axil ARADDR" *) (* X_INTERFACE_MODE = "slave" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME s_axil, DATA_WIDTH 32, PROTOCOL AXI4LITE, FREQ_HZ 50000000, ID_WIDTH 0, ADDR_WIDTH 32, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 1, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.0, CLK_DOMAIN design_1_processing_system7_0_0_FCLK_CLK0, NUM_READ_THREADS 4, NUM_WRITE_THREADS 4, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *) input [31:0]s_axil_araddr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axil ARPROT" *) input [2:0]s_axil_arprot;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axil ARVALID" *) input s_axil_arvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axil ARREADY" *) output s_axil_arready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axil RDATA" *) output [31:0]s_axil_rdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axil RRESP" *) output [1:0]s_axil_rresp;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axil RVALID" *) output s_axil_rvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axil RREADY" *) input s_axil_rready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axil AWADDR" *) input [31:0]s_axil_awaddr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axil AWPROT" *) input [2:0]s_axil_awprot;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axil AWVALID" *) input s_axil_awvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axil AWREADY" *) output s_axil_awready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axil WDATA" *) input [31:0]s_axil_wdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axil WSTRB" *) input [3:0]s_axil_wstrb;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axil WVALID" *) input s_axil_wvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axil WREADY" *) output s_axil_wready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axil BRESP" *) output [1:0]s_axil_bresp;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axil BVALID" *) output s_axil_bvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axil BREADY" *) input s_axil_bready;
  output [31:0]reg_rd_addr;
  output reg_rd_en;
  input [31:0]reg_rd_data;
  input reg_rd_okay;
  output [31:0]reg_wr_addr;
  output [31:0]reg_wr_data;
  output [3:0]reg_wr_strb;
  output reg_wr_en;
  input reg_wr_okay;

  wire \<const0> ;
  wire clk;
  wire [31:0]reg_rd_data;
  wire reg_rd_en;
  wire reg_rd_okay;
  wire reg_wr_en;
  wire reg_wr_okay;
  wire rst_n;
  wire [31:0]s_axil_araddr;
  wire s_axil_arready;
  wire s_axil_arvalid;
  wire [31:0]s_axil_awaddr;
  wire s_axil_awready;
  wire s_axil_awvalid;
  wire s_axil_bready;
  wire [1:1]\^s_axil_bresp ;
  wire s_axil_bvalid;
  wire [31:0]s_axil_rdata;
  wire s_axil_rready;
  wire [1:1]\^s_axil_rresp ;
  wire s_axil_rvalid;
  wire [31:0]s_axil_wdata;
  wire s_axil_wready;
  wire [3:0]s_axil_wstrb;
  wire s_axil_wvalid;

  assign reg_rd_addr[31:0] = s_axil_araddr;
  assign reg_wr_addr[31:0] = s_axil_awaddr;
  assign reg_wr_data[31:0] = s_axil_wdata;
  assign reg_wr_strb[3:0] = s_axil_wstrb;
  assign s_axil_bresp[1] = \^s_axil_bresp [1];
  assign s_axil_bresp[0] = \<const0> ;
  assign s_axil_rresp[1] = \^s_axil_rresp [1];
  assign s_axil_rresp[0] = \<const0> ;
  GND GND
       (.G(\<const0> ));
  design_1_axil2reg_0_0_axil2reg inst
       (.clk(clk),
        .reg_rd_data(reg_rd_data),
        .reg_rd_en(reg_rd_en),
        .reg_rd_okay(reg_rd_okay),
        .reg_wr_en(reg_wr_en),
        .reg_wr_okay(reg_wr_okay),
        .rst_n(rst_n),
        .s_axil_arready(s_axil_arready),
        .s_axil_arvalid(s_axil_arvalid),
        .s_axil_awready(s_axil_awready),
        .s_axil_awvalid(s_axil_awvalid),
        .s_axil_bready(s_axil_bready),
        .s_axil_bresp(\^s_axil_bresp ),
        .s_axil_bvalid(s_axil_bvalid),
        .s_axil_rdata(s_axil_rdata),
        .s_axil_rready(s_axil_rready),
        .s_axil_rresp(\^s_axil_rresp ),
        .s_axil_rvalid(s_axil_rvalid),
        .s_axil_wready(s_axil_wready),
        .s_axil_wvalid(s_axil_wvalid));
endmodule

(* ORIG_REF_NAME = "axil2reg" *) 
module design_1_axil2reg_0_0_axil2reg
   (s_axil_arready,
    reg_rd_en,
    reg_wr_en,
    s_axil_rvalid,
    s_axil_rdata,
    s_axil_rresp,
    s_axil_awready,
    s_axil_wready,
    s_axil_bvalid,
    s_axil_bresp,
    clk,
    reg_rd_data,
    s_axil_arvalid,
    s_axil_rready,
    reg_rd_okay,
    s_axil_awvalid,
    s_axil_wvalid,
    s_axil_bready,
    reg_wr_okay,
    rst_n);
  output s_axil_arready;
  output reg_rd_en;
  output reg_wr_en;
  output s_axil_rvalid;
  output [31:0]s_axil_rdata;
  output [0:0]s_axil_rresp;
  output s_axil_awready;
  output s_axil_wready;
  output s_axil_bvalid;
  output [0:0]s_axil_bresp;
  input clk;
  input [31:0]reg_rd_data;
  input s_axil_arvalid;
  input s_axil_rready;
  input reg_rd_okay;
  input s_axil_awvalid;
  input s_axil_wvalid;
  input s_axil_bready;
  input reg_wr_okay;
  input rst_n;

  wire clk;
  wire [31:0]reg_rd_data;
  wire reg_rd_en;
  wire reg_rd_okay;
  wire reg_wr_en;
  wire reg_wr_okay;
  wire rst_n;
  wire s_axil_arready;
  wire s_axil_arvalid;
  wire s_axil_awready;
  wire s_axil_awvalid;
  wire s_axil_bready;
  wire [0:0]s_axil_bresp;
  wire s_axil_bvalid;
  wire [31:0]s_axil_rdata;
  wire s_axil_rready;
  wire [0:0]s_axil_rresp;
  wire s_axil_rvalid;
  wire s_axil_wready;
  wire s_axil_wvalid;
  wire wr_n_0;

  design_1_axil2reg_0_0_axil2reg_rd rd
       (.clk(clk),
        .idle_reg_0(wr_n_0),
        .reg_rd_data(reg_rd_data),
        .reg_rd_en(reg_rd_en),
        .reg_rd_okay(reg_rd_okay),
        .s_axil_arready(s_axil_arready),
        .s_axil_arvalid(s_axil_arvalid),
        .s_axil_rdata(s_axil_rdata),
        .s_axil_rready(s_axil_rready),
        .s_axil_rresp(s_axil_rresp),
        .s_axil_rvalid(s_axil_rvalid));
  design_1_axil2reg_0_0_axil2reg_wr wr
       (.clk(clk),
        .reg_wr_en(reg_wr_en),
        .reg_wr_okay(reg_wr_okay),
        .rst_n(rst_n),
        .rst_n_0(wr_n_0),
        .s_axil_awready(s_axil_awready),
        .s_axil_awvalid(s_axil_awvalid),
        .s_axil_bready(s_axil_bready),
        .s_axil_bresp(s_axil_bresp),
        .s_axil_bvalid(s_axil_bvalid),
        .s_axil_wready(s_axil_wready),
        .s_axil_wvalid(s_axil_wvalid));
endmodule

(* ORIG_REF_NAME = "axil2reg_rd" *) 
module design_1_axil2reg_0_0_axil2reg_rd
   (s_axil_arready,
    reg_rd_en,
    s_axil_rvalid,
    s_axil_rdata,
    s_axil_rresp,
    clk,
    idle_reg_0,
    reg_rd_okay,
    reg_rd_data,
    s_axil_arvalid,
    s_axil_rready);
  output s_axil_arready;
  output reg_rd_en;
  output s_axil_rvalid;
  output [31:0]s_axil_rdata;
  output [0:0]s_axil_rresp;
  input clk;
  input idle_reg_0;
  input reg_rd_okay;
  input [31:0]reg_rd_data;
  input s_axil_arvalid;
  input s_axil_rready;

  wire clk;
  wire [31:0]data;
  wire en_d;
  wire idle_i_1_n_0;
  wire idle_reg_0;
  wire okay_reg_n_0;
  wire [31:0]reg_rd_data;
  wire reg_rd_en;
  wire reg_rd_okay;
  wire s_axil_arready;
  wire s_axil_arvalid;
  wire [31:0]s_axil_rdata;
  wire s_axil_rready;
  wire [0:0]s_axil_rresp;
  wire s_axil_rvalid;

  FDRE \data_reg[0] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[0]),
        .Q(data[0]),
        .R(1'b0));
  FDRE \data_reg[10] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[10]),
        .Q(data[10]),
        .R(1'b0));
  FDRE \data_reg[11] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[11]),
        .Q(data[11]),
        .R(1'b0));
  FDRE \data_reg[12] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[12]),
        .Q(data[12]),
        .R(1'b0));
  FDRE \data_reg[13] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[13]),
        .Q(data[13]),
        .R(1'b0));
  FDRE \data_reg[14] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[14]),
        .Q(data[14]),
        .R(1'b0));
  FDRE \data_reg[15] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[15]),
        .Q(data[15]),
        .R(1'b0));
  FDRE \data_reg[16] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[16]),
        .Q(data[16]),
        .R(1'b0));
  FDRE \data_reg[17] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[17]),
        .Q(data[17]),
        .R(1'b0));
  FDRE \data_reg[18] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[18]),
        .Q(data[18]),
        .R(1'b0));
  FDRE \data_reg[19] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[19]),
        .Q(data[19]),
        .R(1'b0));
  FDRE \data_reg[1] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[1]),
        .Q(data[1]),
        .R(1'b0));
  FDRE \data_reg[20] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[20]),
        .Q(data[20]),
        .R(1'b0));
  FDRE \data_reg[21] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[21]),
        .Q(data[21]),
        .R(1'b0));
  FDRE \data_reg[22] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[22]),
        .Q(data[22]),
        .R(1'b0));
  FDRE \data_reg[23] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[23]),
        .Q(data[23]),
        .R(1'b0));
  FDRE \data_reg[24] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[24]),
        .Q(data[24]),
        .R(1'b0));
  FDRE \data_reg[25] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[25]),
        .Q(data[25]),
        .R(1'b0));
  FDRE \data_reg[26] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[26]),
        .Q(data[26]),
        .R(1'b0));
  FDRE \data_reg[27] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[27]),
        .Q(data[27]),
        .R(1'b0));
  FDRE \data_reg[28] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[28]),
        .Q(data[28]),
        .R(1'b0));
  FDRE \data_reg[29] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[29]),
        .Q(data[29]),
        .R(1'b0));
  FDRE \data_reg[2] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[2]),
        .Q(data[2]),
        .R(1'b0));
  FDRE \data_reg[30] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[30]),
        .Q(data[30]),
        .R(1'b0));
  FDRE \data_reg[31] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[31]),
        .Q(data[31]),
        .R(1'b0));
  FDRE \data_reg[3] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[3]),
        .Q(data[3]),
        .R(1'b0));
  FDRE \data_reg[4] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[4]),
        .Q(data[4]),
        .R(1'b0));
  FDRE \data_reg[5] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[5]),
        .Q(data[5]),
        .R(1'b0));
  FDRE \data_reg[6] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[6]),
        .Q(data[6]),
        .R(1'b0));
  FDRE \data_reg[7] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[7]),
        .Q(data[7]),
        .R(1'b0));
  FDRE \data_reg[8] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[8]),
        .Q(data[8]),
        .R(1'b0));
  FDRE \data_reg[9] 
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_data[9]),
        .Q(data[9]),
        .R(1'b0));
  FDCE en_d_reg
       (.C(clk),
        .CE(1'b1),
        .CLR(idle_reg_0),
        .D(reg_rd_en),
        .Q(en_d));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT3 #(
    .INIT(8'h74)) 
    idle_i_1
       (.I0(s_axil_arvalid),
        .I1(s_axil_arready),
        .I2(s_axil_rready),
        .O(idle_i_1_n_0));
  FDPE idle_reg
       (.C(clk),
        .CE(1'b1),
        .D(idle_i_1_n_0),
        .PRE(idle_reg_0),
        .Q(s_axil_arready));
  FDRE okay_reg
       (.C(clk),
        .CE(en_d),
        .D(reg_rd_okay),
        .Q(okay_reg_n_0),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT2 #(
    .INIT(4'h8)) 
    reg_rd_en_INST_0
       (.I0(s_axil_arready),
        .I1(s_axil_arvalid),
        .O(reg_rd_en));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[0]_INST_0 
       (.I0(reg_rd_data[0]),
        .I1(data[0]),
        .I2(en_d),
        .O(s_axil_rdata[0]));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[10]_INST_0 
       (.I0(reg_rd_data[10]),
        .I1(data[10]),
        .I2(en_d),
        .O(s_axil_rdata[10]));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[11]_INST_0 
       (.I0(reg_rd_data[11]),
        .I1(data[11]),
        .I2(en_d),
        .O(s_axil_rdata[11]));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[12]_INST_0 
       (.I0(reg_rd_data[12]),
        .I1(data[12]),
        .I2(en_d),
        .O(s_axil_rdata[12]));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[13]_INST_0 
       (.I0(reg_rd_data[13]),
        .I1(data[13]),
        .I2(en_d),
        .O(s_axil_rdata[13]));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[14]_INST_0 
       (.I0(reg_rd_data[14]),
        .I1(data[14]),
        .I2(en_d),
        .O(s_axil_rdata[14]));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[15]_INST_0 
       (.I0(reg_rd_data[15]),
        .I1(data[15]),
        .I2(en_d),
        .O(s_axil_rdata[15]));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[16]_INST_0 
       (.I0(reg_rd_data[16]),
        .I1(data[16]),
        .I2(en_d),
        .O(s_axil_rdata[16]));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[17]_INST_0 
       (.I0(reg_rd_data[17]),
        .I1(data[17]),
        .I2(en_d),
        .O(s_axil_rdata[17]));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[18]_INST_0 
       (.I0(reg_rd_data[18]),
        .I1(data[18]),
        .I2(en_d),
        .O(s_axil_rdata[18]));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[19]_INST_0 
       (.I0(reg_rd_data[19]),
        .I1(data[19]),
        .I2(en_d),
        .O(s_axil_rdata[19]));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[1]_INST_0 
       (.I0(reg_rd_data[1]),
        .I1(data[1]),
        .I2(en_d),
        .O(s_axil_rdata[1]));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[20]_INST_0 
       (.I0(reg_rd_data[20]),
        .I1(data[20]),
        .I2(en_d),
        .O(s_axil_rdata[20]));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[21]_INST_0 
       (.I0(reg_rd_data[21]),
        .I1(data[21]),
        .I2(en_d),
        .O(s_axil_rdata[21]));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[22]_INST_0 
       (.I0(reg_rd_data[22]),
        .I1(data[22]),
        .I2(en_d),
        .O(s_axil_rdata[22]));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[23]_INST_0 
       (.I0(reg_rd_data[23]),
        .I1(data[23]),
        .I2(en_d),
        .O(s_axil_rdata[23]));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[24]_INST_0 
       (.I0(reg_rd_data[24]),
        .I1(data[24]),
        .I2(en_d),
        .O(s_axil_rdata[24]));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[25]_INST_0 
       (.I0(reg_rd_data[25]),
        .I1(data[25]),
        .I2(en_d),
        .O(s_axil_rdata[25]));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[26]_INST_0 
       (.I0(reg_rd_data[26]),
        .I1(data[26]),
        .I2(en_d),
        .O(s_axil_rdata[26]));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[27]_INST_0 
       (.I0(reg_rd_data[27]),
        .I1(data[27]),
        .I2(en_d),
        .O(s_axil_rdata[27]));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[28]_INST_0 
       (.I0(reg_rd_data[28]),
        .I1(data[28]),
        .I2(en_d),
        .O(s_axil_rdata[28]));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[29]_INST_0 
       (.I0(reg_rd_data[29]),
        .I1(data[29]),
        .I2(en_d),
        .O(s_axil_rdata[29]));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[2]_INST_0 
       (.I0(reg_rd_data[2]),
        .I1(data[2]),
        .I2(en_d),
        .O(s_axil_rdata[2]));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[30]_INST_0 
       (.I0(reg_rd_data[30]),
        .I1(data[30]),
        .I2(en_d),
        .O(s_axil_rdata[30]));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[31]_INST_0 
       (.I0(reg_rd_data[31]),
        .I1(data[31]),
        .I2(en_d),
        .O(s_axil_rdata[31]));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[3]_INST_0 
       (.I0(reg_rd_data[3]),
        .I1(data[3]),
        .I2(en_d),
        .O(s_axil_rdata[3]));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[4]_INST_0 
       (.I0(reg_rd_data[4]),
        .I1(data[4]),
        .I2(en_d),
        .O(s_axil_rdata[4]));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[5]_INST_0 
       (.I0(reg_rd_data[5]),
        .I1(data[5]),
        .I2(en_d),
        .O(s_axil_rdata[5]));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[6]_INST_0 
       (.I0(reg_rd_data[6]),
        .I1(data[6]),
        .I2(en_d),
        .O(s_axil_rdata[6]));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[7]_INST_0 
       (.I0(reg_rd_data[7]),
        .I1(data[7]),
        .I2(en_d),
        .O(s_axil_rdata[7]));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[8]_INST_0 
       (.I0(reg_rd_data[8]),
        .I1(data[8]),
        .I2(en_d),
        .O(s_axil_rdata[8]));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \s_axil_rdata[9]_INST_0 
       (.I0(reg_rd_data[9]),
        .I1(data[9]),
        .I2(en_d),
        .O(s_axil_rdata[9]));
  LUT3 #(
    .INIT(8'h1D)) 
    \s_axil_rresp[1]_INST_0 
       (.I0(okay_reg_n_0),
        .I1(en_d),
        .I2(reg_rd_okay),
        .O(s_axil_rresp));
  LUT1 #(
    .INIT(2'h1)) 
    s_axil_rvalid_INST_0
       (.I0(s_axil_arready),
        .O(s_axil_rvalid));
endmodule

(* ORIG_REF_NAME = "axil2reg_wr" *) 
module design_1_axil2reg_0_0_axil2reg_wr
   (rst_n_0,
    reg_wr_en,
    s_axil_awready,
    s_axil_wready,
    s_axil_bvalid,
    s_axil_bresp,
    clk,
    rst_n,
    s_axil_awvalid,
    s_axil_wvalid,
    s_axil_bready,
    reg_wr_okay);
  output rst_n_0;
  output reg_wr_en;
  output s_axil_awready;
  output s_axil_wready;
  output s_axil_bvalid;
  output [0:0]s_axil_bresp;
  input clk;
  input rst_n;
  input s_axil_awvalid;
  input s_axil_wvalid;
  input s_axil_bready;
  input reg_wr_okay;

  wire clk;
  wire en_d;
  wire idle;
  wire idle_i_1__0_n_0;
  wire okay;
  wire okay_reg_n_0;
  wire reg_wr_en;
  wire reg_wr_okay;
  wire rst_n;
  wire rst_n_0;
  wire s_axil_awready;
  wire s_axil_awvalid;
  wire s_axil_bready;
  wire [0:0]s_axil_bresp;
  wire s_axil_bvalid;
  wire s_axil_wready;
  wire s_axil_wvalid;

  FDCE en_d_reg
       (.C(clk),
        .CE(1'b1),
        .CLR(rst_n_0),
        .D(reg_wr_en),
        .Q(en_d));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT4 #(
    .INIT(16'h7F70)) 
    idle_i_1__0
       (.I0(s_axil_awvalid),
        .I1(s_axil_wvalid),
        .I2(idle),
        .I3(s_axil_bready),
        .O(idle_i_1__0_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    idle_i_2
       (.I0(rst_n),
        .O(rst_n_0));
  FDPE idle_reg
       (.C(clk),
        .CE(1'b1),
        .D(idle_i_1__0_n_0),
        .PRE(rst_n_0),
        .Q(idle));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    okay_i_1
       (.I0(reg_wr_okay),
        .I1(en_d),
        .I2(okay_reg_n_0),
        .O(okay));
  FDRE okay_reg
       (.C(clk),
        .CE(1'b1),
        .D(okay),
        .Q(okay_reg_n_0),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT3 #(
    .INIT(8'h80)) 
    reg_wr_en_INST_0
       (.I0(s_axil_awvalid),
        .I1(idle),
        .I2(s_axil_wvalid),
        .O(reg_wr_en));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT2 #(
    .INIT(4'h8)) 
    s_axil_awready_INST_0
       (.I0(idle),
        .I1(s_axil_wvalid),
        .O(s_axil_awready));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT3 #(
    .INIT(8'h1D)) 
    \s_axil_bresp[1]_INST_0 
       (.I0(okay_reg_n_0),
        .I1(en_d),
        .I2(reg_wr_okay),
        .O(s_axil_bresp));
  LUT1 #(
    .INIT(2'h1)) 
    s_axil_bvalid_INST_0
       (.I0(idle),
        .O(s_axil_bvalid));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT2 #(
    .INIT(4'h8)) 
    s_axil_wready_INST_0
       (.I0(idle),
        .I1(s_axil_awvalid),
        .O(s_axil_wready));
endmodule
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;
    parameter GRES_WIDTH = 10000;
    parameter GRES_START = 10000;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    wire GRESTORE;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;
    reg GRESTORE_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;
    assign (strong1, weak0) GRESTORE = GRESTORE_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

    initial begin 
	GRESTORE_int = 1'b0;
	#(GRES_START);
	GRESTORE_int = 1'b1;
	#(GRES_WIDTH);
	GRESTORE_int = 1'b0;
    end

endmodule
`endif
