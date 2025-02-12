module sign_extention_a #(parameter N = 12, parameter M = 32)
    (
    input wire [N - 1: 0] i_x,
    output wire [M - 1: 0] o_y
    );

generate
    genvar i;
        for (i = 0; i < N; i = i + 1) begin : gen_sign_extention1s
            sign_extention_1 sign_extention_a_inst(.i_x(i_x[i]), .o_y(o_y[i]));
        end
        for (i = N; i < M; i = i + 1) begin : gen_sign_extention1ss
            sign_extention_1 sign_extention_a_inst(.i_x(i_x[N - 1]), .o_y(o_y[i])); 
        end
endgenerate

endmodule