module system_top(
    input clk,
    input rst_n,
    output [6:0] seg,
    output dp
);
    wire [31:0] imem_addr, imem_data, dmem_addr, dmem_wdata, dmem_rdata;
    wire dmem_we;
    wire [31:0] mmio_data;
    wire mmio_we;

    imem #(.ADDR_WIDTH(10), .INIT_FILE("prog.hex")) imem_inst(
        .i_addr(imem_addr[11:2]),
        .o_data(imem_data)
    );

    dmem_mmio #(.ADDR_WIDTH(10)) dmem_inst(
        .clk(clk),
        .we(dmem_we),
        .addr(dmem_addr[11:2]),
        .wdata(dmem_wdata),
        .rdata(dmem_rdata),
        .mmio_data(mmio_data),
        .mmio_we(mmio_we)
    );

    riscv_single_cycle cpu(
        .clk(clk), 
        .rst_n(rst_n),
        .imem_addr(imem_addr), 
        .imem_data(imem_data),
        .dmem_addr(dmem_addr), 
        .dmem_rdata(dmem_rdata),
        .dmem_wdata(dmem_wdata), 
        .dmem_we(dmem_we)
    );

    seg7_display seg7(
        .clk(clk),
        .data(mmio_data),
        .seg(seg),
        .dp(dp)
    );
endmodule

