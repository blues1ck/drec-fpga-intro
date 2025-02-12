`timescale 1ns/1ps

module sign_extention_a_TB;

localparam N = 12;
localparam M = 32;

wire [M - 1: 0] y;
reg [N - 1: 0] x = {N{1'b0}};

always begin

    #1 if (x == y[N - 1 :0]) begin
        if (y[M - 1 :N] == {M - N{x[N - 1]}})
            $display("[%t] x=%b y=%b OK", $realtime, x, y);
        else
            $display("[%t] x=%b y=%b FAIL", $realtime, x, y);
    end
    else 
        $display("[%t] x=%b y=%b FAIL", $realtime, x, y);
    #1 x = x + 1;
    if (x == {N{1'b1}}) begin
        $display("[%t] Done", $realtime);
        $finish;
    end
end

sign_extention_a #(.N(N)) sign_extention_a_inst(.i_x(x), .o_y(y));

initial begin
    $dumpvars;
    $display("[%t] Start", $realtime);
end

endmodule