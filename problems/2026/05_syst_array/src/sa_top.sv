module sa_top #(
    parameter int WIDTH = 16,
    parameter int SIZE  = 4
) (
    input  logic                       clk,
    input  logic                       rst_n,
    input  logic                       i_we,
    input  logic                       i_a_vld,
    input  logic                       i_c_vld,
    input  logic [SIZE-1:0][WIDTH-1:0] i_a_line,
    output logic                       o_c_vld,
    output logic [SIZE-1:0][WIDTH-1:0] o_c_line
);

    // Input delay line signals
    logic [SIZE-1:0]            we_line_delayed;
    logic [SIZE-1:0]            a_vld_line_delayed;
    logic [SIZE-1:0]            c_vld_line_in;
    logic [SIZE-1:0][WIDTH-1:0] a_line_delayed;

    // Output delay line signals
    logic [SIZE-1:0]            c_vld_line_out;
    logic [SIZE-1:0]            c_vld_line_out_delayed;
    logic [SIZE-1:0][WIDTH-1:0] c_line_out;

    // Delay write-enable line
    we_line #(.SIZE(SIZE)) we_line_inst (
        .clk      (clk),
        .rst_n    (rst_n),
        .i_we     (i_we),
        .o_we_line(we_line_delayed)
    );

    // Delay A-valid line
    delay_line #(.WIDTH(1), .SIZE(SIZE)) dl_a_vld_inst (
        .clk    (clk),
        .rst_n  (rst_n),
        .i_data ({SIZE{i_a_vld}}),
        .o_data (a_vld_line_delayed)
    );

    // Delay C-valid line (input)
    delay_line #(.WIDTH(1), .SIZE(SIZE)) dl_c_vld_in_inst (
        .clk    (clk),
        .rst_n  (rst_n),
        .i_data ({SIZE{i_c_vld}}),
        .o_data (c_vld_line_in)
    );

    // Delay A data line
    delay_line #(.WIDTH(WIDTH), .SIZE(SIZE)) dl_a_inst (
        .clk    (clk),
        .rst_n  (rst_n),
        .i_data (i_a_line),
        .o_data (a_line_delayed)
    );

    // Delay C-valid line (output)
    delay_line_rev #(.WIDTH(1), .SIZE(SIZE)) dl_c_vld_out_inst (
        .clk    (clk),
        .rst_n  (rst_n),
        .i_data (c_vld_line_out),
        .o_data (c_vld_line_out_delayed)
    );

    // Delay C data line (output)
    delay_line_rev #(.WIDTH(WIDTH), .SIZE(SIZE)) dl_c_out_inst (
        .clk    (clk),
        .rst_n  (rst_n),
        .i_data (c_line_out),
        .o_data (o_c_line)
    );

    // Output valid is AND of all delayed valid signals
    assign o_c_vld = &c_vld_line_out_delayed;

    // Systolic array core instance
    sa_core #(.WIDTH(WIDTH), .SIZE(SIZE)) sa_core_inst (
        .clk          (clk),
        .rst_n        (rst_n),
        .i_we_line    (we_line_delayed),
        .i_a_vld_line (a_vld_line_delayed),
        .i_c_vld_line (c_vld_line_in),
        .i_a_line     (a_line_delayed),
        .o_c_vld_line (c_vld_line_out),
        .o_c_line     (c_line_out)
    );

endmodule
