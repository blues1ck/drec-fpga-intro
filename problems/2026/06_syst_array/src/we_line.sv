module we_line #(
    parameter int SIZE = 4
) (
    input  logic            clk,
    input  logic            rst_n,
    input  logic            i_we,
    output logic [SIZE-1:0] o_we_line
);

    // Delay line implementation with custom input generation
    // Timing diagram:
    // clk ->     |     1 |     0 |     1
    // we         |     1 |     0 |     1
    // we_gen     | 2'b10 | 2'b00 | 2'b01
    // o_we_line  | 2'b00 | 2'b10 | 2'b01
    logic [SIZE-1:0] we_shift_reg;
    logic [SIZE-1:0] we_gen;

    // Input signal for delay line
    assign we_gen = i_we ? we_shift_reg : '0;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            we_shift_reg <= 1 << (SIZE-1);
        end else if (i_we) begin
            we_shift_reg <= {we_shift_reg[0], we_shift_reg[SIZE-1:1]};
        end
    end

    delay_line #(.WIDTH(1), .SIZE(SIZE)) dl_inst (
        .clk    (clk),
        .rst_n  (rst_n),
        .i_data (we_gen),
        .o_data (o_we_line)
    );

endmodule

