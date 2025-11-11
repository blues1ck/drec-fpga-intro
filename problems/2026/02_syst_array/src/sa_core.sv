module sa_core #(
    parameter int WIDTH = 16,
    parameter int SIZE  = 4
) (
    input  logic                             clk,
    input  logic                             rst,

    // A stream enters the left side of each row
    input  logic [SIZE-1:0][WIDTH-1:0]       i_a,
    input  logic [SIZE-1:0]                  i_a_vld,

    // B stream enters the top of each column (with write-enable pulses)
    input  logic [SIZE-1:0][WIDTH-1:0]       i_b,
    input  logic [SIZE-1:0]                  i_b_we,

    // Initial partial sums enter from the left of each row
    input  logic [SIZE-1:0][2*WIDTH-1:0]     i_c,
    input  logic [SIZE-1:0]                  i_c_vld,

    // Outputs are taken from the right side / bottom of the mesh
    output logic [SIZE-1:0][WIDTH-1:0]       o_a,
    output logic [SIZE-1:0]                  o_a_vld,

    output logic [SIZE-1:0][WIDTH-1:0]       o_b,
    output logic [SIZE-1:0]                  o_b_we,

    output logic [SIZE-1:0][2*WIDTH-1:0]     o_c,
    output logic [SIZE-1:0]                  o_c_vld
);

    // Horizontal buses (A data and valid)
    logic [SIZE-1:0][SIZE:0][WIDTH-1:0]  a_bus;
    logic [SIZE-1:0][SIZE:0]             a_vld_bus;

    // Vertical buses (B data and load pulses)
    logic [SIZE:0][SIZE-1:0][WIDTH-1:0]  b_bus;
    logic [SIZE:0][SIZE-1:0]             b_we_bus;

    // Horizontal buses for partial sums
    logic [SIZE-1:0][SIZE:0][2*WIDTH-1:0] c_bus;
    logic [SIZE-1:0][SIZE:0]              c_vld_bus;

    // Boundary assignments
    genvar row;
    generate
        for (row = 0; row < SIZE; ++row) begin : gen_boundary
            assign a_bus[row][0]     = i_a[row];
            assign a_vld_bus[row][0] = i_a_vld[row];

            assign c_bus[row][0]     = i_c[row];
            assign c_vld_bus[row][0] = i_c_vld[row];

            assign o_a[row]          = a_bus[row][SIZE];
            assign o_a_vld[row]      = a_vld_bus[row][SIZE];

            assign o_c[row]          = c_bus[row][SIZE];
            assign o_c_vld[row]      = c_vld_bus[row][SIZE];
        end

        for (row = 0; row < SIZE; ++row) begin : gen_b_bound_top
            assign b_bus[0][row]     = i_b[row];
            assign b_we_bus[0][row]  = i_b_we[row];

            assign o_b[row]          = b_bus[SIZE][row];
            assign o_b_we[row]       = b_we_bus[SIZE][row];
        end
    endgenerate

    // Instantiate the mesh of processing elements
    genvar r, c;
    generate
        for (r = 0; r < SIZE; ++r) begin : gen_rows
            for (c = 0; c < SIZE; ++c) begin : gen_cols
                pe #(
                    .WIDTH(WIDTH)
                ) u_pe (
                    .clk      (clk),
                    .rst      (rst),
                    .i_a      (a_bus[r][c]),
                    .i_a_vld  (a_vld_bus[r][c]),
                    .i_b      (b_bus[r][c]),
                    .i_b_we   (b_we_bus[r][c]),
                    .i_c      (c_bus[r][c]),
                    .i_c_vld  (c_vld_bus[r][c]),
                    .o_a      (a_bus[r][c+1]),
                    .o_a_vld  (a_vld_bus[r][c+1]),
                    .o_b      (b_bus[r+1][c]),
                    .o_b_we   (b_we_bus[r+1][c]),
                    .o_c      (c_bus[r][c+1]),
                    .o_c_vld  (c_vld_bus[r][c+1])
                );
            end
        end
    endgenerate

endmodule
