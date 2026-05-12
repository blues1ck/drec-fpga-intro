module axil_gpio #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32
) (
    input  logic clk,
    input  logic rst_n,
    input  logic [ADDR_WIDTH-1:0] s_axil_araddr,
    input  logic [2:0]            s_axil_arprot,
    input  logic                  s_axil_arvalid,
    output logic                  s_axil_arready,
    output logic [DATA_WIDTH-1:0] s_axil_rdata,
    output logic [1:0]            s_axil_rresp,
    output logic                  s_axil_rvalid,
    input  logic                  s_axil_rready,
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
    output logic [3:0]            o_led
);

logic [ADDR_WIDTH-1:0] reg_rd_addr;
logic reg_rd_en;
logic [DATA_WIDTH-1:0] reg_rd_data;
logic reg_rd_okay;
logic [ADDR_WIDTH-1:0] reg_wr_addr;
logic [DATA_WIDTH-1:0] reg_wr_data;
logic [DATA_WIDTH/8-1:0] reg_wr_strb;
logic reg_wr_en;
logic reg_wr_okay;

logic [3:0] led_reg;

assign o_led = led_reg;

axil2reg #(
    .ADDR_WIDTH(ADDR_WIDTH),
    .DATA_WIDTH(DATA_WIDTH)
) u_axil2reg (.*);

always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        led_reg <= 4'h0;
        reg_wr_okay <= 1'b0;
        reg_rd_okay <= 1'b0;
        reg_rd_data <= '0;
    end else begin
        reg_wr_okay <= 1'b0;
        reg_rd_okay <= 1'b0;

        if (reg_wr_en) begin
            if (reg_wr_addr[5:0] == 6'h00) begin
                if (reg_wr_strb[0])
                    led_reg <= reg_wr_data[3:0];
                reg_wr_okay <= 1'b1;
            end
        end

        if (reg_rd_en) begin
            if (reg_rd_addr[5:0] == 6'h00) begin
                reg_rd_data <= {{(DATA_WIDTH-4){1'b0}}, led_reg};
                reg_rd_okay <= 1'b1;
            end else begin
                reg_rd_data <= '0;
            end
        end
    end
end

endmodule
