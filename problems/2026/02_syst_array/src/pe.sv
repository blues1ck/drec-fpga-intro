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

            // propagate streams
            o_a     <= i_a;
            o_a_vld <= i_a_vld;
            o_b     <= i_b;
            o_b_we  <= i_b_we;

            if (i_a_vld && i_c_vld) begin
                o_c     <= i_c + i_a * b_reg;
                o_c_vld <= i_c_vld;
            end else begin
                o_c     <= i_c;
                o_c_vld <= i_c_vld;
            end
        end
    end

endmodule
