`timescale 1ns / 1ps

module sa_axi_top_tb;

    localparam int ADDR_WIDTH = 32;
    localparam int DATA_WIDTH = 32;
    localparam int WIDTH = 16;
    localparam int SIZE = 4;
    localparam int MEM_SIZE = 1024;
    
    logic clk;
    logic rst_n;
    
    // Control signals
    logic i_start_b;
    logic i_start_ac;
    logic o_busy;
    
    // Addresses
    logic [ADDR_WIDTH-1:0] i_addr_b;
    logic [ADDR_WIDTH-1:0] i_addr_a;
    logic [ADDR_WIDTH-1:0] i_addr_c;
    
    // AXI4 signals
    logic                  m_axi_arvalid;
    logic                  m_axi_arready;
    logic [ADDR_WIDTH-1:0] m_axi_araddr;
    logic [7:0]            m_axi_arlen;
    logic [2:0]            m_axi_arsize;
    logic [1:0]            m_axi_arburst;
    
    logic                  m_axi_rvalid;
    logic                  m_axi_rready;
    logic [DATA_WIDTH-1:0] m_axi_rdata;
    logic                  m_axi_rlast;
    
    logic                  m_axi_awvalid;
    logic                  m_axi_awready;
    logic [ADDR_WIDTH-1:0] m_axi_awaddr;
    logic [7:0]            m_axi_awlen;
    logic [2:0]            m_axi_awsize;
    logic [1:0]            m_axi_awburst;
    
    logic                  m_axi_wvalid;
    logic                  m_axi_wready;
    logic [DATA_WIDTH-1:0] m_axi_wdata;
    logic                  m_axi_wlast;
    
    logic                  m_axi_bvalid;
    logic                  m_axi_bready;
    logic [1:0]            m_axi_bresp;
    
    // Memory model
    logic [DATA_WIDTH-1:0] memory [0:MEM_SIZE-1];
    logic [DATA_WIDTH-1:0] result_memory [0:MEM_SIZE-1];
    
    // Test matrices
    logic [WIDTH-1:0] matrix_a [0:SIZE-1][0:SIZE-1];
    logic [WIDTH-1:0] matrix_b [0:SIZE-1][0:SIZE-1];
    logic [WIDTH-1:0] matrix_c_ref [0:SIZE-1][0:SIZE-1];
    
    // Test control
    int errors;
    
    // DUT
    sa_axi_top #(
        .ADDR_WIDTH(ADDR_WIDTH),
        .DATA_WIDTH(DATA_WIDTH),
        .WIDTH(WIDTH),
        .SIZE(SIZE)
    ) dut (
        .clk            (clk),
        .rst_n          (rst_n),
        .i_start_b      (i_start_b),
        .i_start_ac     (i_start_ac),
        .o_busy         (o_busy),
        .i_addr_b       (i_addr_b),
        .i_addr_a       (i_addr_a),
        .i_addr_c       (i_addr_c),
        .m_axi_arvalid  (m_axi_arvalid),
        .m_axi_arready  (m_axi_arready),
        .m_axi_araddr   (m_axi_araddr),
        .m_axi_arlen    (m_axi_arlen),
        .m_axi_arsize   (m_axi_arsize),
        .m_axi_arburst  (m_axi_arburst),
        .m_axi_rvalid   (m_axi_rvalid),
        .m_axi_rready   (m_axi_rready),
        .m_axi_rdata    (m_axi_rdata),
        .m_axi_rlast    (m_axi_rlast),
        .m_axi_awvalid  (m_axi_awvalid),
        .m_axi_awready  (m_axi_awready),
        .m_axi_awaddr   (m_axi_awaddr),
        .m_axi_awlen    (m_axi_awlen),
        .m_axi_awsize   (m_axi_awsize),
        .m_axi_awburst  (m_axi_awburst),
        .m_axi_wvalid   (m_axi_wvalid),
        .m_axi_wready   (m_axi_wready),
        .m_axi_wdata    (m_axi_wdata),
        .m_axi_wlast    (m_axi_wlast),
        .m_axi_bvalid   (m_axi_bvalid),
        .m_axi_bready   (m_axi_bready)
    );
    
    // Clock generation
    initial begin
        clk = 1'b0;
    end
    
    always begin
        #1 clk <= ~clk;
    end
    
    // Initialize test matrices
    task init_matrices();
        // Initialize matrix A
        for (int i = 0; i < SIZE; i++) begin
            for (int j = 0; j < SIZE; j++) begin
                matrix_a[i][j] = i * SIZE + j + 1;
            end
        end
        
        // Initialize matrix B (transposed for systolic array)
        for (int i = 0; i < SIZE; i++) begin
            for (int j = 0; j < SIZE; j++) begin
                matrix_b[i][j] = -(i * SIZE + j) * 2 - 1;
            end
        end
        
        // Compute reference result: C = A * B
        for (int i = 0; i < SIZE; i++) begin
            for (int j = 0; j < SIZE; j++) begin
                automatic int sum = 0;
                for (int k = 0; k < SIZE; k++) begin
                    sum = sum + matrix_a[i][k] * matrix_b[j][k];
                end
                matrix_c_ref[i][j] = sum;
            end
        end
        
        // Store matrices in memory
        // Matrix A: row-major order
        for (int i = 0; i < SIZE; i++) begin
            for (int j = 0; j < SIZE; j++) begin
                memory[i * SIZE + j] = {{(DATA_WIDTH-WIDTH){1'b0}}, matrix_a[i][j]};
            end
        end
        
        // Matrix B: column-major order (transposed for systolic array)
        for (int i = 0; i < SIZE; i++) begin
            for (int j = 0; j < SIZE; j++) begin
                memory[SIZE*SIZE + i * SIZE + j] = {{(DATA_WIDTH-WIDTH){1'b0}}, matrix_b[j][i]};
            end
        end
    endtask
    
    // AXI4 Read Address Channel handler
    logic [ADDR_WIDTH-1:0] read_addr;
    logic [7:0] read_len;
    logic [7:0] read_cnt;
    logic read_active;
    
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            read_addr <= 0;
            read_len <= 0;
            read_cnt <= 0;
            read_active <= 1'b0;
            m_axi_arready <= 1'b0;
        end else begin
            if (m_axi_arvalid && !read_active) begin
                read_addr <= m_axi_araddr;
                read_len <= m_axi_arlen;
                read_cnt <= 0;
                read_active <= 1'b1;
                m_axi_arready <= 1'b1;
            end else begin
                m_axi_arready <= 1'b0;
            end
            
            if (read_active) begin
                if (m_axi_rvalid && m_axi_rready) begin
                    if (read_cnt >= read_len) begin
                        read_active <= 1'b0;
                        read_cnt <= 0;  // Reset for next burst
                    end else begin
                        read_cnt <= read_cnt + 1;
                        read_addr <= read_addr + (DATA_WIDTH/8);
                    end
                end
            end
        end
    end
    
    // AXI4 Read Data Channel handler
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            m_axi_rvalid <= 1'b0;
            m_axi_rdata <= 0;
            m_axi_rlast <= 1'b0;
        end else begin
            if (read_active) begin
                if (m_axi_rready) begin
                    m_axi_rvalid <= 1'b1;
                    m_axi_rdata <= memory[read_addr[ADDR_WIDTH-1:2]];  // Word address
                    // rlast is set when we're sending the last word
                    // read_cnt is current count, so last word is when read_cnt == read_len
                    m_axi_rlast <= (read_cnt == read_len);
                end else begin
                    m_axi_rvalid <= 1'b0;
                    m_axi_rlast <= 1'b0;
                end
            end else begin
                m_axi_rvalid <= 1'b0;
                m_axi_rlast <= 1'b0;
            end
        end
    end
    
    // AXI4 Write Address Channel handler
    logic [ADDR_WIDTH-1:0] write_addr;
    logic [7:0] write_len;
    logic [7:0] write_cnt;
    logic write_active;
    
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            write_addr <= 0;
            write_len <= 0;
            write_cnt <= 0;
            write_active <= 1'b0;
            m_axi_awready <= 1'b0;
        end else begin
            if (m_axi_awvalid && !write_active) begin
                write_addr <= m_axi_awaddr;
                write_len <= m_axi_awlen;
                write_cnt <= 0;
                write_active <= 1'b1;
                m_axi_awready <= 1'b1;
            end else begin
                m_axi_awready <= 1'b0;
            end
            
            if (write_active && m_axi_wvalid && m_axi_wready) begin
                if (write_cnt >= write_len) begin
                    write_active <= 1'b0;
                end else begin
                    write_cnt <= write_cnt + 1;
                    write_addr <= write_addr + (DATA_WIDTH/8);
                end
            end
        end
    end
    
    // AXI4 Write Data Channel handler
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            m_axi_wready <= 1'b0;
        end else begin
            if (write_active) begin
                m_axi_wready <= 1'b1;
                if (m_axi_wvalid && m_axi_wready) begin
                    result_memory[write_addr[ADDR_WIDTH-1:2]] <= m_axi_wdata;
                end
            end else begin
                m_axi_wready <= 1'b0;
            end
        end
    end
    
    // AXI4 Write Response Channel handler
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            m_axi_bvalid <= 1'b0;
            m_axi_bresp <= 2'b00;
        end else begin
            if (write_active && m_axi_wvalid && m_axi_wready && m_axi_wlast) begin
                m_axi_bvalid <= 1'b1;
                m_axi_bresp <= 2'b00;  // OKAY
            end else if (m_axi_bvalid && m_axi_bready) begin
                m_axi_bvalid <= 1'b0;
            end
        end
    end
    
    // Main test
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars;
        
        // Initialize
        rst_n = 1'b1;
        i_start_b = 1'b0;
        i_start_ac = 1'b0;
        i_addr_b = 0;
        i_addr_a = 0;
        i_addr_c = 0;
        
        // Reset
        @(posedge clk);
        rst_n = 1'b0;
        @(posedge clk);
        rst_n = 1'b1;
        @(posedge clk);
        
        // Initialize matrices
        init_matrices();
        
        // Set addresses
        i_addr_b = SIZE * SIZE * (DATA_WIDTH/8);  // After matrix A
        i_addr_a = 0;
        i_addr_c = 2 * SIZE * SIZE * (DATA_WIDTH/8);  // After matrices A and B
        
        // Start loading matrix B
        @(posedge clk);
        i_start_b = 1'b1;
        @(posedge clk);
        i_start_b = 1'b0;
        
        // Wait for B loading to complete
        wait(!o_busy || (m_axi_arvalid && m_axi_arready && read_cnt >= read_len));
        repeat(100) @(posedge clk);
        
        // Start loading A and writing C
        @(posedge clk);
        i_start_ac = 1'b1;
        @(posedge clk);
        i_start_ac = 1'b0;
        
        // Wait for completion
        wait(!o_busy);
        repeat(100) @(posedge clk);
        
        // Verify results
        $display("=== Verifying Results ===");
        errors = 0;
        for (int i = 0; i < SIZE; i++) begin
            for (int j = 0; j < SIZE; j++) begin
                logic [WIDTH-1:0] expected;
                logic [WIDTH-1:0] actual;
                expected = matrix_c_ref[i][j];
                actual = result_memory[2*SIZE*SIZE + i*SIZE + j][WIDTH-1:0];
                if (expected != actual) begin
                    $display("ERROR: C[%0d][%0d] expected=%0d, got=%0d", i, j, expected, actual);
                    errors++;
                end
            end
        end
        
        if (errors == 0) begin
            $display("=== TEST PASSED ===");
        end else begin
            $display("=== TEST FAILED: %0d errors ===", errors);
        end
        
        #100 $finish;
    end
    
    // Timeout protection: kill simulation after 30 seconds
    initial begin
        #30000000; // 30 seconds at 1ns timescale
        $display("\n=== TIMEOUT: Simulation exceeded 30 seconds ===");
        $display("This indicates a deadlock or infinite loop in the testbench");
        $display("Current state: o_busy=%b", o_busy);
        $finish(2);
    end

endmodule

