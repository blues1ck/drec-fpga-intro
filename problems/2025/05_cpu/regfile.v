module regfile(
    input clk,
    input we,
    input [4:0] ra1, ra2, wa,
    input [31:0] wd,
    output [31:0] rd1, rd2
);
    reg [7:0] regs[0:7];
    assign rd1 = (ra1 == 0) ? 0 : regs[ra1];
    assign rd2 = (ra2 == 0) ? 0 : regs[ra2];
    always @(posedge clk)
        if (we && wa != 0) regs[wa] <= wd;
endmodule
