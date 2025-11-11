module pe #(
    parameter int WIDTH = 16
) (
    input  logic                     clk,
    input  logic                     rst,

    input  logic [WIDTH-1:0]         i_a,
    input  logic                     i_a_vld,

    input  logic [WIDTH-1:0]         i_b,
    input  logic                     i_b_we,

    input  logic [2*WIDTH-1:0]       i_c,
    input  logic                     i_c_vld,

    output logic [WIDTH-1:0]         o_a,
    output logic                     o_a_vld,

    output logic [WIDTH-1:0]         o_b,
    output logic                     o_b_we,

    output logic [2*WIDTH-1:0]       o_c,
    output logic                     o_c_vld
);

    logic [WIDTH-1:0] b_reg;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            b_reg   <= '0;
            o_a     <= '0;
            o_a_vld <= 1'b0;
            o_b     <= '0;
            o_b_we  <= 1'b0;
            o_c     <= '0;
            o_c_vld <= 1'b0;
        end else begin
            if (i_b_we) begin
                b_reg <= i_b;
            end

            // pass B further down the column so that every PE sees the same load pulse
            o_b    <= i_b;
            o_b_we <= i_b_we;

            // propagate A horizontally
            o_a     <= i_a;
            o_a_vld <= i_a_vld;

            // output accumulation
            unique case ({i_a_vld, i_c_vld})
                2'b11: begin
                    o_c     <= i_c + i_a * b_reg;
                    o_c_vld <= 1'b1;
                end
                2'b01: begin
                    // no new A this cycle – just forward the partial sum further
                    o_c     <= i_c;
                    o_c_vld <= 1'b1;
                end
                default: begin
                    o_c_vld <= 1'b0;
                    // retain previous o_c value to avoid X-optimism
                end
            endcase
        end
    end

endmodule
