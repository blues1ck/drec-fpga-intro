module pe #(
    parameter int WIDTH = 16
) (
    input  logic             clk,
    input  logic             rst_n,
    input  logic             i_we,
    input  logic             i_a_vld,
    input  logic             i_c_vld,
    input  logic [WIDTH-1:0] i_a,
    input  logic [WIDTH-1:0] i_c,
    output logic             o_we,
    output logic             o_a_vld,
    output logic             o_c_vld,
    output logic [WIDTH-1:0] o_a,
    output logic [WIDTH-1:0] o_c
);

    logic [WIDTH-1:0] b_reg;

    // Compute output C and forward signals to next processing elements
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            b_reg <= '0;
        end else begin
            o_we    <= i_we;
            o_a_vld <= i_a_vld;
            o_c_vld <= i_a_vld & i_c_vld;
            o_a     <= i_a;
            o_c     <= i_a * b_reg + i_c;
            // Save element B when write enable is active
            if (i_we) begin
                b_reg <= i_a;
            end
        end
    end

endmodule
