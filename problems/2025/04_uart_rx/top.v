module top (
    input clk,
    input rx,
    output [6:0] seg,
    output dp
);

wire [7:0] rx_data;
wire rx_dv;

uart_rx uart_rx_inst (
    .clk(clk),
    .rst_n(1'b1),
    .rx_serial(rx),
    .rx_byte(rx_data),
    .rx_dv(rx_dv)
);

seg7_decoder decoder (
    .data(rx_data),
    .seg(seg)
);

assign dp = 1'b1;

endmodule
