module cnt_tb;

logic clk;
logic rst_n;
logic [7:0] cnt;

initial begin
    clk = 1'b0;
    forever #5 clk = ~clk;
end

initial begin
    rst_n = 1'b0;
    #20;
    rst_n = 1'b1;
    #200;
    $finish;
end

cnt #(
    .CNT_WIDTH(8)
) dut (
    .clk   (clk),
    .rst_n (rst_n),
    .o_cnt (cnt)
);

endmodule
