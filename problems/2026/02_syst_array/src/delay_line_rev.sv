module delay_line_rev #(
    parameter int WIDTH = 16,
    parameter int SIZE  = 4
) (
    input  logic                       clk,
    input  logic                       rst_n,
    input  logic [SIZE-1:0][WIDTH-1:0] i_data,
    output logic [SIZE-1:0][WIDTH-1:0] o_data
);

    generate
        assign o_data[SIZE-1] = i_data[SIZE-1];

        for (genvar i = 0; i < SIZE-1; i++) begin : gen_sr
            sr #(.WIDTH(WIDTH), .SIZE(SIZE - 1 - i)) sr_inst (
                .clk    (clk),
                .rst_n  (rst_n),
                .i_data (i_data[i]),
                .o_data (o_data[i])
            );
        end
    endgenerate

endmodule
