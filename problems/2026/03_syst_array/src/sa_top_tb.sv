`timescale 1ns / 1ps

module sa_top_tb;

    import "DPI-C" function bit  VerifySA();
    import "DPI-C" function void SetElemA(shortint Elem, int Pos);
    import "DPI-C" function void SetElemB(shortint Elem, int Pos);
    import "DPI-C" function void SetElemC(shortint Elem, int Pos);
    import "DPI-C" function void SetSize(int Size);

    localparam int WIDTH = 16;
    localparam int SIZE  = 4;

    logic clk;
    logic rst_n;

    // Input AXI-like interface
    logic                       i_a_valid;
    logic                       o_a_ready;
    logic [SIZE-1:0][WIDTH-1:0] i_a_data;
    logic                       i_we_valid;
    logic                       o_we_ready;
    logic                       i_we_data;
    logic                       i_c_valid;
    logic                       o_c_ready;
    logic [SIZE-1:0][WIDTH-1:0] i_c_data;

    // Output AXI-like interface
    logic                       o_c_valid;
    logic                       i_c_ready;
    logic [SIZE-1:0][WIDTH-1:0] o_c_data;

    logic c_vld_correct;

    sa_top #(.WIDTH(WIDTH), .SIZE(SIZE)) dut (
        .clk        (clk),
        .rst_n      (rst_n),
        .i_a_valid  (i_a_valid),
        .o_a_ready  (o_a_ready),
        .i_a_data   (i_a_data),
        .i_we_valid (i_we_valid),
        .o_we_ready (o_we_ready),
        .i_we_data  (i_we_data),
        .i_c_valid  (i_c_valid),
        .o_c_ready  (o_c_ready),
        .i_c_data   (i_c_data),
        .o_c_valid  (o_c_valid),
        .i_c_ready  (i_c_ready),
        .o_c_data   (o_c_data)
    );

    initial begin
        clk = 1'b0;
    end

    always begin
        #1 clk <= ~clk;
    end

    function void GenMatrices();
        SetSize(SIZE);
        for (shortint i = 0; i < SIZE; i++) begin
            for (shortint j = 0; j < SIZE; j++) begin
                automatic int pos = i * SIZE + j;
                automatic shortint a = pos + 1;
                automatic shortint b = -(pos * 2 + 1);
                SetElemA(a, pos);
                SetElemB(b, pos);
            end
        end
    endfunction

    // Load transposed matrix B with valid/ready flow control
    task LoadB();
        for (shortint i = SIZE - 1; i >= 0; i--) begin
            // Add some backpressure simulation
            if (i % 2 == 0) begin
                i_we_valid = 1'b0;
                @(posedge clk);
                @(posedge clk);
            end
            
            for (shortint j = 0; j < SIZE; j++) begin
                automatic int pos = i * SIZE + j;
                automatic shortint b = -(pos * 2 + 1);
                i_a_data[j] = b;
            end
            i_we_data = 1'b1;
            i_we_valid = 1'b1;
            
            // Wait for handshake
            do @(posedge clk);
            while (!o_we_ready);
            i_we_valid = 1'b0;
        end
    endtask

    // Load matrix A with valid/ready flow control
    task LoadA();
        for (shortint i = 0; i < SIZE; i++) begin
            // Add some backpressure simulation
            if (i == SIZE / 2) begin
                i_a_valid = 1'b0;
                i_c_valid = 1'b0;
                @(posedge clk);
            end
            
            for (shortint j = 0; j < SIZE; j++) begin
                automatic int pos = i * SIZE + j;
                automatic shortint a = pos + 1;
                i_a_data[j] = a;
            end
            i_a_valid = 1'b1;
            i_c_valid = 1'b1;
            
            // Wait for handshake on both A and C
            do @(posedge clk);
            while (!(o_a_ready && o_c_ready));
            i_a_valid = 1'b0;
            i_c_valid = 1'b0;
        end
    endtask

    // Read output matrix C with valid/ready flow control
    task ReadC();
        repeat (SIZE - 2) @(posedge clk);

        i_c_ready = 1'b1;
        for (shortint i = 0; i < SIZE; i++) begin
            // Wait for valid (with timeout to avoid infinite loop)
            automatic int timeout = 0;
            while (!o_c_valid && timeout < 1000) begin
                @(posedge clk);
                timeout = timeout + 1;
            end
            if (timeout >= 1000) begin
                $display("ERROR: Timeout waiting for o_c_valid");
                $finish;
            end
            
            if (i == SIZE / 2) begin
                if (o_c_valid == 1'b1) begin
                    c_vld_correct = 1'b0;
                end
                i_c_ready = 1'b0;
                @(posedge clk);
                i_c_ready = 1'b1;
            end else begin
                if (!o_c_valid) begin
                    c_vld_correct = 1'b0;
                end
            end
            
            for (shortint j = 0; j < SIZE; j++) begin
                automatic int pos = i * SIZE + j;
                automatic shortint c = o_c_data[j];
                SetElemC(c, pos);
            end
            @(posedge clk);
        end
        i_c_ready = 1'b0;
    endtask

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars;

        rst_n       = 1'b1;
        i_a_valid   = 1'b0;
        i_we_valid  = 1'b0;
        i_c_valid   = 1'b0;
        i_c_ready   = 1'b0;
        c_vld_correct = 1'b1;

        @(posedge clk);
        rst_n = 1'b0;
        @(posedge clk);
        rst_n = 1'b1;
        @(posedge clk);

        GenMatrices();
        LoadB();
        LoadA();
        ReadC();

        if (VerifySA() & c_vld_correct) begin
            $display("PASSED");
        end else begin
            $display("FAILED");
        end

        #50 $finish;
    end

endmodule

