`timescale 1ns/1ps

module sa_top_tb;

    localparam int WIDTH = 16;
    localparam int SIZE  = 4;

    logic clk = 1'b0;
    logic rst = 1'b1;
    logic start = 1'b0;
    logic done;

    logic [WIDTH-1:0]    matrix_a [SIZE][SIZE];
    logic [WIDTH-1:0]    matrix_b [SIZE][SIZE];
    logic [2*WIDTH-1:0]  matrix_c [SIZE][SIZE];

    int printable_a [SIZE][SIZE];
    int printable_b [SIZE][SIZE];
    int printable_c [SIZE][SIZE];

    sa_top #(
        .WIDTH (WIDTH),
        .SIZE  (SIZE)
    ) dut (
        .clk        (clk),
        .rst        (rst),
        .start      (start),
        .i_a_matrix (matrix_a),
        .i_b_matrix (matrix_b),
        .done       (done),
        .o_c_matrix (matrix_c)
    );

    always #5 clk = ~clk;

    function automatic void display_matrix(string name, int mat [SIZE][SIZE]);
        $display("%s:", name);
        for (int r = 0; r < SIZE; ++r) begin
            string line = "";
            for (int c = 0; c < SIZE; ++c) begin
                line = {line, $sformatf("%6d", mat[r][c])};
            end
            $display("  %s", line);
        end
    endfunction

    function automatic void display_logic_matrix(string name, logic [2*WIDTH-1:0] mat [SIZE][SIZE]);
        $display("%s:", name);
        for (int r = 0; r < SIZE; ++r) begin
            string line = "";
            for (int c = 0; c < SIZE; ++c) begin
                line = {line, $sformatf("%6d", mat[r][c])};
            end
            $display("  %s", line);
        end
    endfunction

    initial begin
        int expected   [SIZE][SIZE];
        int errors;

        // Example matrices A and B (взяты из условия)
        matrix_a = '{
            '{16'd1, 16'd2, 16'd3, 16'd4},
            '{16'd5, 16'd6, 16'd7, 16'd8},
            '{16'd1, 16'd2, 16'd3, 16'd4},
            '{16'd5, 16'd6, 16'd7, 16'd8}
        };

        matrix_b = '{
            '{16'd3, 16'd4, 16'd5, 16'd6},
            '{16'd7, 16'd8, 16'd9, 16'd0},
            '{16'd3, 16'd4, 16'd5, 16'd6},
            '{16'd7, 16'd8, 16'd9, 16'd0}
        };

        // Display input matrices (casts to int for readability)
        for (int r = 0; r < SIZE; ++r) begin
            for (int c = 0; c < SIZE; ++c) begin
                printable_a[r][c] = matrix_a[r][c];
                printable_b[r][c] = matrix_b[r][c];
            end
        end
        display_matrix("Matrix A", printable_a);
        display_matrix("Matrix B", printable_b);

        // Release reset and start processing
        repeat (5) @(posedge clk);
        rst = 1'b0;
        @(posedge clk);
        start = 1'b1;
        @(posedge clk);
        start = 1'b0;

        // Wait for completion
        wait (done == 1'b1);
        @(posedge clk);

        // Compute expected result in SystemVerilog
        for (int r = 0; r < SIZE; ++r) begin
            for (int c = 0; c < SIZE; ++c) begin
                expected[r][c] = 0;
                for (int k = 0; k < SIZE; ++k) begin
                    expected[r][c] += matrix_a[r][k] * matrix_b[k][c];
                end
            end
        end

        for (int r = 0; r < SIZE; ++r)
            for (int c = 0; c < SIZE; ++c)
                printable_c[r][c] = matrix_c[r][c];

        display_matrix("Result matrix C (hardware)", printable_c);
        display_matrix("Expected matrix", expected);

        errors = 0;
        for (int r = 0; r < SIZE; ++r) begin
            for (int c = 0; c < SIZE; ++c) begin
                if (matrix_c[r][c] !== expected[r][c]) begin
                    $error("Mismatch at [%0d][%0d]: got %0d expected %0d", r, c, matrix_c[r][c], expected[r][c]);
                    errors++;
                end
            end
        end

        if (errors == 0) begin
            $display("PASS: systolic array produced correct result");
        end else begin
            $fatal(1, "FAIL: detected %0d mismatches", errors);
        end

        $finish;
    end

endmodule
