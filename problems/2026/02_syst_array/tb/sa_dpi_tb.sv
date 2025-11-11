`timescale 1ns/1ps

module sa_dpi_tb;

    localparam int WIDTH = 16;
    localparam int SIZE  = 4;

    import "DPI-C" function void matmul_ref(
        input int size,
        input int a_flat[],
        input int b_flat[],
        output int c_flat[]
    );

    // Clock and reset
    logic clk = 0;
    logic rst = 1;

    always #5ns clk = ~clk;

    // DUT connections
    logic [SIZE-1:0][WIDTH-1:0]       i_a;
    logic [SIZE-1:0]                  i_a_vld;
    logic [SIZE-1:0][WIDTH-1:0]       i_b;
    logic [SIZE-1:0]                  i_b_we;
    logic [SIZE-1:0][2*WIDTH-1:0]     i_c;
    logic [SIZE-1:0]                  i_c_vld;

    logic [SIZE-1:0][WIDTH-1:0]       o_a;
    logic [SIZE-1:0]                  o_a_vld;
    logic [SIZE-1:0][WIDTH-1:0]       o_b;
    logic [SIZE-1:0]                  o_b_we;
    logic [SIZE-1:0][2*WIDTH-1:0]     o_c;
    logic [SIZE-1:0]                  o_c_vld;

    sa_core #(
        .WIDTH (WIDTH),
        .SIZE  (SIZE)
    ) dut (
        .clk     (clk),
        .rst     (rst),
        .i_a     (i_a),
        .i_a_vld (i_a_vld),
        .i_b     (i_b),
        .i_b_we  (i_b_we),
        .i_c     (i_c),
        .i_c_vld (i_c_vld),
        .o_a     (o_a),
        .o_a_vld (o_a_vld),
        .o_b     (o_b),
        .o_b_we  (o_b_we),
        .o_c     (o_c),
        .o_c_vld (o_c_vld)
    );

    // Stimulus and scoreboard data
    int unsigned a_matrix [SIZE][SIZE];
    int unsigned b_matrix [SIZE][SIZE];
    int          expected  [SIZE][SIZE];
    int          collected [SIZE][SIZE];

    int a_flat [SIZE*SIZE];
    int b_flat [SIZE*SIZE];
    int ref_flat [SIZE*SIZE];

    int col_cursor [SIZE];
    int total_collected;

    // Capture results as they emerge from the array
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (int r = 0; r < SIZE; ++r) begin
                col_cursor[r] <= 0;
            end
            total_collected <= 0;
        end else begin
            for (int r = 0; r < SIZE; ++r) begin
                if (o_c_vld[r] && col_cursor[r] < SIZE) begin
                    collected[r][col_cursor[r]] <= o_c[r];
                    col_cursor[r]              <= col_cursor[r] + 1;
                    total_collected            <= total_collected + 1;
                end
            end
        end
    end

    // Convenience tasks
    task automatic drive_idle();
        i_a      = '{default: '0};
        i_a_vld  = '{default: 1'b0};
        i_b      = '{default: '0};
        i_b_we   = '{default: 1'b0};
        i_c      = '{default: '0};
        i_c_vld  = '{default: 1'b1};
    endtask

    task automatic drive_iteration(input int k);
        for (int r = 0; r < SIZE; ++r) begin
            i_a[r]     = a_matrix[r][k][WIDTH-1:0];
            i_a_vld[r] = 1'b1;
            i_c[r]     = '0; // start new accumulation for each column
            i_c_vld[r] = 1'b1;
        end

        for (int c = 0; c < SIZE; ++c) begin
            i_b[c]    = b_matrix[k][c][WIDTH-1:0];
            i_b_we[c] = 1'b1;
        end
    endtask

    // Main stimulus
    initial begin
        int errors;

        drive_idle();

        // Reset pulse
        repeat (5) @(posedge clk);
        rst = 0;
        @(posedge clk);

        // Random but bounded matrices for WIDTH=16
        for (int r = 0; r < SIZE; ++r) begin
            for (int c = 0; c < SIZE; ++c) begin
                a_matrix[r][c] = $urandom_range(0, 15);
                b_matrix[r][c] = $urandom_range(0, 15);
                a_flat[r*SIZE + c] = a_matrix[r][c];
                b_flat[r*SIZE + c] = b_matrix[r][c];
                collected[r][c] = '0;
                expected[r][c]  = '0;
            end
        end

        $display("[TB] Generated matrices A and B, starting DPI reference...");
        matmul_ref(SIZE, a_flat, b_flat, ref_flat);
        $display("[TB] Reference ready, streaming data into DUT");

        for (int r = 0; r < SIZE; ++r)
            for (int c = 0; c < SIZE; ++c)
                expected[r][c] = ref_flat[r*SIZE + c];

        // Feed data streams column by column
        for (int k = 0; k < SIZE; ++k) begin
            drive_iteration(k);
            @(posedge clk);
            $display("[TB] cycle %0t: fed column %0d", $time, k);
        end

        // Flush the pipeline
        for (int f = 0; f < SIZE * 3; ++f) begin
            drive_idle();
            @(posedge clk);
            $display("[TB] cycle %0t: flushing (%0d/%0d)", $time, f+1, SIZE*3);
        end

        wait (total_collected >= SIZE*SIZE);
        $display("[TB] cycle %0t: collected %0d / %0d results", $time, total_collected, SIZE*SIZE);

        errors = 0;
        for (int r = 0; r < SIZE; ++r) begin
            for (int c = 0; c < SIZE; ++c) begin
                $display("[TB] C[%0d][%0d] = %0d (expected %0d)", r, c, collected[r][c], expected[r][c]);
                if (collected[r][c] !== expected[r][c]) begin
                    $error("Mismatch at C[%0d][%0d]: got %0d, expected %0d", r, c, collected[r][c], expected[r][c]);
                    errors++;
                end
            end
        end

        if (errors == 0) begin
            $display("PASS: systolic array produced correct 4x4 matrix multiply results.");
        end else begin
            $fatal(1, "FAIL: systolic array had %0d mismatches", errors);
        end

        $finish;
    end

endmodule
