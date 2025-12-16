`timescale 1ns / 1ps

// Top-level module: AXI4 Master for Systolic Array Matrix Multiplication
// Combines address generator, AXI4 data handling, and systolic array
module sa_axi_top #(
    parameter int ADDR_WIDTH = 32,
    parameter int DATA_WIDTH = 32,
    parameter int WIDTH = 16,      // Data width for systolic array
    parameter int SIZE = 4         // Matrix size (SIZE x SIZE)
) (
    input  logic clk,
    input  logic rst_n,
    
    // Control signals
    input  logic i_start_b,      // Start loading matrix B (1-cycle pulse)
    input  logic i_start_ac,     // Start loading A and writing C (1-cycle pulse)
    output logic o_busy,         // Busy signal
    
    // Matrix base addresses
    input  logic [ADDR_WIDTH-1:0] i_addr_b,  // Base address for matrix B
    input  logic [ADDR_WIDTH-1:0] i_addr_a,  // Base address for matrix A
    input  logic [ADDR_WIDTH-1:0] i_addr_c,  // Base address for matrix C
    
    // AXI4 Read Address Channel
    output logic                  m_axi_arvalid,
    input  logic                  m_axi_arready,
    output logic [ADDR_WIDTH-1:0] m_axi_araddr,
    output logic [7:0]            m_axi_arlen,
    output logic [2:0]            m_axi_arsize,
    output logic [1:0]            m_axi_arburst,
    
    // AXI4 Read Data Channel
    input  logic                  m_axi_rvalid,
    output logic                  m_axi_rready,
    input  logic [DATA_WIDTH-1:0] m_axi_rdata,
    input  logic                  m_axi_rlast,
    
    // AXI4 Write Address Channel
    output logic                  m_axi_awvalid,
    input  logic                  m_axi_awready,
    output logic [ADDR_WIDTH-1:0] m_axi_awaddr,
    output logic [7:0]            m_axi_awlen,
    output logic [2:0]            m_axi_awsize,
    output logic [1:0]            m_axi_awburst,
    
    // AXI4 Write Data Channel
    output logic                  m_axi_wvalid,
    input  logic                  m_axi_wready,
    output logic [DATA_WIDTH-1:0] m_axi_wdata,
    output logic                  m_axi_wlast,
    
    // AXI4 Write Response Channel
    input  logic                  m_axi_bvalid,
    output logic                  m_axi_bready
);

    // Assume DATA_WIDTH >= WIDTH and can pack multiple elements or single element per word
    // For simplicity, assume each element takes WIDTH bits, and DATA_WIDTH can hold multiple elements
    localparam int ELEMENTS_PER_WORD = DATA_WIDTH / WIDTH;
    localparam int WORDS_PER_ROW = (SIZE + ELEMENTS_PER_WORD - 1) / ELEMENTS_PER_WORD;
    localparam int BURST_LEN = SIZE - 1;  // If each word holds one element
    localparam int ACTUAL_BURST_LEN = (WORDS_PER_ROW > 0) ? WORDS_PER_ROW - 1 : 0;
    
    // Address generator signals
    logic load_b, load_a, store_c;
    
    // Data path signals
    logic [SIZE-1:0][WIDTH-1:0] b_line_data;
    logic [SIZE-1:0][WIDTH-1:0] a_line_data;
    logic [SIZE-1:0][WIDTH-1:0] c_line_data;
    logic b_we_valid;
    logic a_valid;
    logic c_valid;
    
    // Read data collection
    logic [SIZE-1:0][WIDTH-1:0] read_buffer;
    logic [7:0] read_elem_cnt;
    logic reading_b, reading_a;
    
    // Write data output
    logic [SIZE-1:0][WIDTH-1:0] write_buffer;
    logic [7:0] write_elem_cnt;
    logic writing_c;
    
    // Row counters (count completed bursts)
    logic [7:0] b_burst_cnt, a_burst_cnt, c_burst_cnt;
    
    // Burst completion signals
    logic burst_done_b, burst_done_a, burst_done_c;
    
    // Address generator instance
    addr_gen #(
        .ADDR_WIDTH(ADDR_WIDTH),
        .DATA_WIDTH(DATA_WIDTH),
        .SIZE(SIZE)
    ) addr_gen_inst (
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
        .m_axi_awvalid  (m_axi_awvalid),
        .m_axi_awready  (m_axi_awready),
        .m_axi_awaddr   (m_axi_awaddr),
        .m_axi_awlen    (m_axi_awlen),
        .m_axi_awsize   (m_axi_awsize),
        .m_axi_awburst  (m_axi_awburst),
        .o_load_b       (load_b),
        .o_load_a       (load_a),
        .o_store_c      (store_c),
        .i_burst_done_b (burst_done_b),
        .i_burst_done_a (burst_done_a),
        .i_burst_done_c (burst_done_c)
    );
    
    // Track reading/writing state
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            reading_b <= 1'b0;
            reading_a <= 1'b0;
            writing_c <= 1'b0;
        end else begin
            reading_b <= load_b;
            reading_a <= load_a;
            writing_c <= store_c;
        end
    end
    
    // Read data handling - collect elements into row buffer
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            read_buffer <= '0;
            read_elem_cnt <= 0;
            b_line_data <= '0;
            a_line_data <= '0;
            b_burst_cnt <= 0;
            a_burst_cnt <= 0;
            b_we_valid <= 1'b0;
            a_valid <= 1'b0;
        end else begin
            b_we_valid <= 1'b0;
            a_valid <= 1'b0;
            
            if (m_axi_rvalid && m_axi_rready) begin
                // Extract elements from AXI word (assuming each word contains one element)
                // For simplicity, we assume DATA_WIDTH == WIDTH
                if (read_elem_cnt < SIZE) begin
                    read_buffer[read_elem_cnt] <= m_axi_rdata[WIDTH-1:0];
                end
                
                // Check if this is the last word of burst
                if (m_axi_rlast) begin
                    // Row complete - latch buffer and signal completion
                    if (reading_b) begin
                        b_line_data <= read_buffer;
                        b_we_valid <= 1'b1;
                        b_burst_cnt <= b_burst_cnt + 1;
                    end else if (reading_a) begin
                        a_line_data <= read_buffer;
                        a_valid <= 1'b1;
                        a_burst_cnt <= a_burst_cnt + 1;
                    end
                    read_elem_cnt <= 0;
                end else if (read_elem_cnt < SIZE) begin
                    read_elem_cnt <= read_elem_cnt + 1;
                end
            end
        end
    end
    
    // Generate burst done signals (pulse for one cycle when burst completes)
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            burst_done_b <= 1'b0;
            burst_done_a <= 1'b0;
        end else begin
            burst_done_b <= 1'b0;
            burst_done_a <= 1'b0;
            if (m_axi_rvalid && m_axi_rready && m_axi_rlast) begin
                if (reading_b) begin
                    burst_done_b <= 1'b1;
                end else if (reading_a) begin
                    burst_done_a <= 1'b1;
                end
            end
        end
    end
    
    // Always ready to receive data when reading
    assign m_axi_rready = (reading_b || reading_a);
    
    // Write data handling - output elements from row buffer
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            write_elem_cnt <= 0;
            c_burst_cnt <= 0;
            write_buffer <= '0;
            burst_done_c <= 1'b0;
        end else begin
            burst_done_c <= 1'b0;
            if (c_valid && writing_c && write_elem_cnt == 0) begin
                // Latch new row from systolic array
                write_buffer <= c_line_data;
                write_elem_cnt <= 1;
            end else if (m_axi_wvalid && m_axi_wready) begin
                if (write_elem_cnt < SIZE) begin
                    write_elem_cnt <= write_elem_cnt + 1;
                end
                if (m_axi_wlast || write_elem_cnt >= SIZE) begin
                    write_elem_cnt <= 0;
                    if (m_axi_wlast) begin
                        burst_done_c <= 1'b1;
                        c_burst_cnt <= c_burst_cnt + 1;
                    end
                end
            end
        end
    end
    
    assign m_axi_wvalid = writing_c && (write_elem_cnt > 0) && (write_elem_cnt <= SIZE);
    assign m_axi_wdata = (write_elem_cnt > 0 && write_elem_cnt <= SIZE) ? 
                         write_buffer[write_elem_cnt-1] : '0;
    assign m_axi_wlast = (write_elem_cnt == SIZE);
    
    // Systolic array instance
    sa_top #(
        .WIDTH(WIDTH),
        .SIZE(SIZE)
    ) sa_top_inst (
        .clk      (clk),
        .rst_n    (rst_n),
        .i_we     (b_we_valid),
        .i_a_vld  (a_valid),
        .i_c_vld  (1'b0),  // C input is always 0 for matrix multiplication
        .i_a_line (a_line_data),
        .o_c_vld  (c_valid),
        .o_c_line (c_line_data)
    );
    
    // Write response handling
    assign m_axi_bready = 1'b1;

endmodule
