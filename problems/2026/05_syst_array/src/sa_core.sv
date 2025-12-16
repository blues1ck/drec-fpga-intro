module sa_core #(
    parameter int WIDTH = 16,
    parameter int SIZE  = 4
) (
    input  logic                       clk,
    input  logic                       rst_n,
    input  logic [SIZE-1:0]            i_we_line,
    input  logic [SIZE-1:0]            i_a_vld_line,
    input  logic [SIZE-1:0]            i_c_vld_line,
    input  logic [SIZE-1:0][WIDTH-1:0] i_a_line,
    output logic [SIZE-1:0]            o_c_vld_line,
    output logic [SIZE-1:0][WIDTH-1:0] o_c_line
);

    logic               we_sig   [SIZE:0][SIZE:0];
    logic               a_vld_sig[SIZE:0][SIZE:0];
    logic               c_vld_sig[SIZE:0][SIZE:0];
    logic [WIDTH-1:0]    a_sig    [SIZE:0][SIZE:0];
    logic [WIDTH-1:0]    c_sig    [SIZE:0][SIZE:0];

    generate
        // Top boundary connections
        for (genvar j = 0; j < SIZE; j++) begin : gen_top_boundary
            assign c_sig[0][j]     = '0;
            assign c_vld_sig[0][j] = i_c_vld_line[j];
            assign we_sig[0][j]    = i_we_line[j];
        end

        // Bottom boundary connections
        for (genvar j = 0; j < SIZE; j++) begin : gen_bottom_boundary
            assign o_c_line[j]     = c_sig[SIZE][j];
            assign o_c_vld_line[j] = c_vld_sig[SIZE][j];
        end

        // Left boundary connections
        for (genvar i = 0; i < SIZE; i++) begin : gen_left_boundary
            assign a_sig[i][0]     = i_a_line[i];
            assign a_vld_sig[i][0] = i_a_vld_line[i];
        end

        // Processing element array
        for (genvar i = 0; i < SIZE; i++) begin : gen_pe_row
            for (genvar j = 0; j < SIZE; j++) begin : gen_pe_col
                pe #(.WIDTH(WIDTH)) pe_inst (
                    .clk      (clk),
                    .rst_n    (rst_n),
                    .i_we     (we_sig[i][j]),
                    .i_a_vld  (a_vld_sig[i][j]),
                    .i_c_vld  (c_vld_sig[i][j]),
                    .i_a      (a_sig[i][j]),
                    .i_c      (c_sig[i][j]),
                    .o_we     (we_sig[i+1][j]),
                    .o_a_vld  (a_vld_sig[i][j+1]),
                    .o_c_vld  (c_vld_sig[i+1][j]),
                    .o_a      (a_sig[i][j+1]),
                    .o_c      (c_sig[i+1][j])
                );
            end
        end
    endgenerate

endmodule
