`timescale 1ns / 1ps

module axis_fifo_tb;

    localparam int DEPTH = 8;
    localparam int WIDTH = 32;

    logic clk;
    logic rst_n;

    // AXI-Stream Slave Interface (Input)
    logic s_axis_tvalid;
    logic s_axis_tready;
    logic [WIDTH-1:0] s_axis_tdata;
    logic s_axis_tlast;

    // AXI-Stream Master Interface (Output)
    logic m_axis_tvalid;
    logic m_axis_tready;
    logic [WIDTH-1:0] m_axis_tdata;
    logic m_axis_tlast;

    // Test control
    logic test_passed;
    int error_count;

    axis_fifo #(
        .DEPTH(DEPTH),
        .WIDTH(WIDTH)
    ) dut (
        .clk            (clk),
        .rst_n          (rst_n),
        .s_axis_tvalid  (s_axis_tvalid),
        .s_axis_tready  (s_axis_tready),
        .s_axis_tdata   (s_axis_tdata),
        .s_axis_tlast   (s_axis_tlast),
        .m_axis_tvalid  (m_axis_tvalid),
        .m_axis_tready  (m_axis_tready),
        .m_axis_tdata   (m_axis_tdata),
        .m_axis_tlast   (m_axis_tlast)
    );

    // Clock generation
    initial begin
        clk = 1'b0;
    end

    always begin
        #1 clk <= ~clk;
    end

    // Test data storage
    logic [WIDTH-1:0] test_data [$];
    logic [WIDTH-1:0] received_data [$];
    logic test_tlast [$];

    // Task to send data with idle cycles
    task send_data_with_idle(input int num_items, input int idle_cycles);
        automatic int sent = 0;
        automatic int idle_count = 0;
        
        s_axis_tvalid = 1'b0;
        s_axis_tdata = '0;
        s_axis_tlast = 1'b0;
        
        while (sent < num_items) begin
            @(posedge clk);
            
            // Check if we need to insert idle cycles after last transmission
            if (idle_count > 0) begin
                s_axis_tvalid = 1'b0;
                idle_count--;
            end else begin
                // Try to send data
                if (s_axis_tready) begin
                    s_axis_tdata = test_data[sent];
                    s_axis_tlast = (sent == num_items - 1);
                    s_axis_tvalid = 1'b1;
                    sent++;
                    
                    // After sending even-numbered items (2, 4, 6, ...), insert idle cycles
                    if ((sent % 2 == 0) && (sent < num_items)) begin
                        idle_count = idle_cycles;
                    end
                end else begin
                    s_axis_tvalid = 1'b0;
                end
            end
        end
        
        @(posedge clk);
        s_axis_tvalid = 1'b0;
        s_axis_tlast = 1'b0;
    endtask

    // Task to receive data with backpressure
    task receive_data_with_backpressure(input int num_items, input int backpressure_cycles);
        automatic int received = 0;
        automatic int backpressure_count = 0;
        
        m_axis_tready = 1'b1;
        
        while (received < num_items) begin
            @(posedge clk);
            
            // Check if we need to apply backpressure
            if (backpressure_count > 0) begin
                m_axis_tready = 1'b0;
                backpressure_count--;
            end else begin
                // Normal receive mode
                m_axis_tready = 1'b1;
                if (m_axis_tvalid && m_axis_tready) begin
                    received_data.push_back(m_axis_tdata);
                    test_tlast.push_back(m_axis_tlast);
                    received++;
                    
                    // After receiving even-numbered items (2, 4, 6, ...), apply backpressure
                    if ((received % 2 == 0) && (received < num_items)) begin
                        backpressure_count = backpressure_cycles;
                    end
                end
            end
        end
        
        @(posedge clk);
        m_axis_tready = 1'b0;
    endtask

    // Task to send data continuously
    task send_continuous(input int num_items);
        automatic int sent = 0;
        
        s_axis_tvalid = 1'b0;
        s_axis_tdata = '0;
        s_axis_tlast = 1'b0;
        
        while (sent < num_items) begin
            @(posedge clk);
            if (s_axis_tready) begin
                s_axis_tdata = test_data[sent];
                s_axis_tlast = (sent == num_items - 1);
                s_axis_tvalid = 1'b1;
                sent++;
            end else begin
                s_axis_tvalid = 1'b0;
            end
        end
        
        @(posedge clk);
        s_axis_tvalid = 1'b0;
        s_axis_tlast = 1'b0;
    endtask

    // Task to receive data continuously
    task receive_continuous(input int num_items);
        automatic int received = 0;
        automatic int cycles = 0;
        automatic int max_cycles = 10000; // Timeout protection
        
        m_axis_tready = 1'b1;
        $display("[receive_continuous] Starting to receive %0d items", num_items);
        
        while (received < num_items) begin
            @(posedge clk);
            cycles++;
            if (cycles > max_cycles) begin
                $error("[receive_continuous] TIMEOUT: Received only %0d/%0d items after %0d cycles", received, num_items, cycles);
                $error("[receive_continuous] m_axis_tvalid=%b, m_axis_tready=%b", m_axis_tvalid, m_axis_tready);
                break;
            end
            if (m_axis_tvalid && m_axis_tready) begin
                received_data.push_back(m_axis_tdata);
                test_tlast.push_back(m_axis_tlast);
                received++;
                if (received % 5 == 0 || received == num_items) begin
                    $display("[receive_continuous] Received %0d/%0d items", received, num_items);
                end
            end else if (cycles % 1000 == 0) begin
                $display("[receive_continuous] Waiting: received=%0d, m_axis_tvalid=%b, m_axis_tready=%b, cycles=%0d", 
                         received, m_axis_tvalid, m_axis_tready, cycles);
                // Debug: check FIFO internal state (if accessible)
                $display("[receive_continuous] FIFO state: s_axis_tready=%b, m_axis_tvalid=%b", 
                         dut.s_axis_tready, dut.m_axis_tvalid);
            end
        end
        
        $display("[receive_continuous] Finished: received %0d/%0d items in %0d cycles", received, num_items, cycles);
        @(posedge clk);
        m_axis_tready = 1'b0;
    endtask

    // Test 1: Basic functionality with idle cycles
    task test_idle_cycles();
        $display("=== Test 1: Idle Cycles ===");
        
        test_data.delete();
        received_data.delete();
        test_tlast.delete();
        
        // Generate test data
        for (int i = 0; i < 10; i++) begin
            test_data.push_back(32'hDEADBEEF + i);
        end
        
        fork
            send_data_with_idle(10, 2); // Send 10 items with 2 idle cycles every 2 items
            receive_continuous(10);
        join
        
        // Verify data
        if (received_data.size() != 10) begin
            $error("Test 1 failed: Expected 10 items, got %0d", received_data.size());
            error_count++;
        end else begin
            for (int i = 0; i < 10; i++) begin
                if (received_data[i] != test_data[i]) begin
                    $error("Test 1 failed: Data mismatch at index %0d: expected %h, got %h", 
                           i, test_data[i], received_data[i]);
                    error_count++;
                end
            end
            if (test_tlast[9] != 1'b1) begin
                $error("Test 1 failed: TLAST not set on last item");
                error_count++;
            end
            $display("Test 1 passed: Idle cycles handled correctly");
        end
        
        repeat(5) @(posedge clk);
    endtask

    // Test 2: Backpressure
    task test_backpressure();
        $display("=== Test 2: Backpressure ===");
        
        test_data.delete();
        received_data.delete();
        test_tlast.delete();
        
        // Generate test data
        for (int i = 0; i < 12; i++) begin
            test_data.push_back(32'hCAFEBABE + i);
        end
        
        fork
            send_continuous(12);
            receive_data_with_backpressure(12, 3); // Apply backpressure for 3 cycles every 2 items
        join
        
        // Verify data
        if (received_data.size() != 12) begin
            $error("Test 2 failed: Expected 12 items, got %0d", received_data.size());
            error_count++;
        end else begin
            for (int i = 0; i < 12; i++) begin
                if (received_data[i] != test_data[i]) begin
                    $error("Test 2 failed: Data mismatch at index %0d: expected %h, got %h", 
                           i, test_data[i], received_data[i]);
                    error_count++;
                end
            end
            if (test_tlast[11] != 1'b1) begin
                $error("Test 2 failed: TLAST not set on last item");
                error_count++;
            end
            $display("Test 2 passed: Backpressure handled correctly");
        end
        
        repeat(5) @(posedge clk);
    endtask

    // Test 3: Combined idle and backpressure
    task test_idle_and_backpressure();
        $display("=== Test 3: Idle Cycles + Backpressure ===");
        
        test_data.delete();
        received_data.delete();
        test_tlast.delete();
        
        // Generate test data
        for (int i = 0; i < 15; i++) begin
            test_data.push_back(32'h12345678 + i);
        end
        
        fork
            send_data_with_idle(15, 2);
            receive_data_with_backpressure(15, 2);
        join
        
        // Verify data
        if (received_data.size() != 15) begin
            $error("Test 3 failed: Expected 15 items, got %0d", received_data.size());
            error_count++;
        end else begin
            for (int i = 0; i < 15; i++) begin
                if (received_data[i] != test_data[i]) begin
                    $error("Test 3 failed: Data mismatch at index %0d: expected %h, got %h", 
                           i, test_data[i], received_data[i]);
                    error_count++;
                end
            end
            if (test_tlast[14] != 1'b1) begin
                $error("Test 3 failed: TLAST not set on last item");
                error_count++;
            end
            $display("Test 3 passed: Idle cycles and backpressure handled correctly");
        end
        
        repeat(5) @(posedge clk);
    endtask

    // Test 4: FIFO full condition
    task test_fifo_full();
        $display("=== Test 4: FIFO Full Condition ===");
        
        test_data.delete();
        received_data.delete();
        test_tlast.delete();
        
        // Generate test data to fill FIFO
        for (int i = 0; i < DEPTH + 5; i++) begin
            test_data.push_back(32'hFEDCBA98 + i);
        end
        
        // Stop reading to fill FIFO
        m_axis_tready = 1'b0;
        $display("[test_fifo_full] Starting: DEPTH=%0d, sending %0d items", DEPTH, DEPTH + 5);
        
        fork
            begin
                automatic int sent = 0;
                automatic int cycles = 0;
                s_axis_tvalid = 1'b0;
                while (sent < DEPTH + 5) begin
                    @(posedge clk);
                    cycles++;
                    if (s_axis_tready) begin
                        s_axis_tdata = test_data[sent];
                        s_axis_tlast = (sent == DEPTH + 4);
                        s_axis_tvalid = 1'b1;
                        sent++;
                        if (sent % 3 == 0 || sent == DEPTH + 5) begin
                            $display("[test_fifo_full] Sent %0d/%0d items, s_axis_tready=%b", sent, DEPTH + 5, s_axis_tready);
                        end
                    end else begin
                        s_axis_tvalid = 1'b0;
                        // FIFO should be full, s_axis_tready should be 0
                        if (sent >= DEPTH) begin
                            if (s_axis_tready != 1'b0) begin
                                $error("Test 4 failed: s_axis_tready should be 0 when FIFO is full");
                                error_count++;
                            end
                        end
                        if (cycles % 100 == 0 && cycles > 0) begin
                            $display("[test_fifo_full] Waiting to send: sent=%0d, s_axis_tready=%b, cycles=%0d", 
                                     sent, s_axis_tready, cycles);
                        end
                    end
                end
                $display("[test_fifo_full] Finished sending: sent %0d items in %0d cycles", sent, cycles);
                s_axis_tvalid = 1'b0;
            end
            begin
                $display("[test_fifo_full] Waiting %0d cycles before reading", DEPTH + 10);
                repeat(DEPTH + 10) @(posedge clk);
                $display("[test_fifo_full] Starting to read");
                m_axis_tready = 1'b1;
                receive_continuous(DEPTH + 5);
            end
        join
        
        // Verify data
        if (received_data.size() != DEPTH + 5) begin
            $error("Test 4 failed: Expected %0d items, got %0d", DEPTH + 5, received_data.size());
            error_count++;
        end else begin
            for (int i = 0; i < DEPTH + 5; i++) begin
                if (received_data[i] != test_data[i]) begin
                    $error("Test 4 failed: Data mismatch at index %0d", i);
                    error_count++;
                end
            end
            $display("Test 4 passed: FIFO full condition handled correctly");
        end
        
        repeat(5) @(posedge clk);
    endtask

    // Main test sequence
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars;

        test_passed = 1'b1;
        error_count = 0;
        
        s_axis_tvalid = 1'b0;
        s_axis_tdata = '0;
        s_axis_tlast = 1'b0;
        m_axis_tready = 1'b0;
        
        @(posedge clk);
        rst_n = 1'b0;
        @(posedge clk);
        rst_n = 1'b1;
        @(posedge clk);
        
        // Run tests
        test_idle_cycles();
        test_backpressure();
        test_idle_and_backpressure();
        test_fifo_full();
        
        // Final result
        if (error_count == 0) begin
            $display("\n=== ALL TESTS PASSED ===");
            test_passed = 1'b1;
        end else begin
            $display("\n=== TESTS FAILED: %0d errors ===", error_count);
            test_passed = 1'b0;
        end
        
        #50 $finish;
    end
    
    // Timeout protection: kill simulation after 1 minute
    initial begin
        #60000000; // 60 seconds at 1ns timescale
        $display("\n=== TIMEOUT: Simulation exceeded 60 seconds ===");
        $display("This indicates a deadlock or infinite loop in the testbench");
        $finish(2);
    end

endmodule

