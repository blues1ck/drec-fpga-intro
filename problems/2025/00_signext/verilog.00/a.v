module sign_extention_a #(parameter N = 12, parameter M = 32)
    (
    input wire [N - 1: 0] i_x,
    output wire [M - 1: 0] o_y
    );

assign o_y[N - 1: 0] = i_x;
assign o_y[M - 1: N] = {M-N{i_x[N - 1]}};

endmodule