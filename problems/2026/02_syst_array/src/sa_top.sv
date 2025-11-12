module sa_top #(
    parameter int WIDTH = 16,
    parameter int SIZE  = 4
) (
    input  logic                                   clk,
    input  logic                                   rst,
    input  logic                                   start,
    input  logic [WIDTH-1:0]                       i_a_matrix [SIZE][SIZE],
    input  logic [WIDTH-1:0]                       i_b_matrix [SIZE][SIZE],
    output logic                                   done,
    output logic [2*WIDTH-1:0]                     o_c_matrix [SIZE][SIZE]
);

    typedef enum logic [2:0] {IDLE, PRELOAD, FEED, FLUSH, COMPLETE} state_t;

    state_t state;

    localparam int TOTAL_EXPECTED = SIZE*SIZE;

    logic [WIDTH-1:0] a_reg [SIZE][SIZE];
    logic [WIDTH-1:0] b_reg [SIZE][SIZE];

    logic [SIZE-1:0][WIDTH-1:0]     sa_i_a;
    logic [SIZE-1:0]                sa_i_a_vld;
    logic [SIZE-1:0][WIDTH-1:0]     sa_i_b;
    logic [SIZE-1:0]                sa_i_b_we;
    logic [SIZE-1:0][2*WIDTH-1:0]   sa_i_c;
    logic [SIZE-1:0]                sa_i_c_vld;

    logic [SIZE-1:0][WIDTH-1:0]     sa_o_a;
    logic [SIZE-1:0]                sa_o_a_vld;
    logic [SIZE-1:0][WIDTH-1:0]     sa_o_b;
    logic [SIZE-1:0]                sa_o_b_we;
    logic [SIZE-1:0][2*WIDTH-1:0]   sa_o_c;
    logic [SIZE-1:0]                sa_o_c_vld;

    int feed_idx;
    int total_collected;
    int collect_ptr [SIZE];
    logic [2*WIDTH-1:0] result_reg [SIZE][SIZE];
    int inc_tmp;

    logic start_d;
    wire  start_edge = start && !start_d;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            start_d <= 1'b0;
        end else begin
            start_d <= start;
        end
    end

    sa_core #(
        .WIDTH (WIDTH),
        .SIZE  (SIZE)
    ) u_sa_core (
        .clk     (clk),
        .rst     (rst),
        .i_a     (sa_i_a),
        .i_a_vld (sa_i_a_vld),
        .i_b     (sa_i_b),
        .i_b_we  (sa_i_b_we),
        .i_c     (sa_i_c),
        .i_c_vld (sa_i_c_vld),
        .o_a     (sa_o_a),
        .o_a_vld (sa_o_a_vld),
        .o_b     (sa_o_b),
        .o_b_we  (sa_o_b_we),
        .o_c     (sa_o_c),
        .o_c_vld (sa_o_c_vld)
    );

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state            <= IDLE;
            feed_idx         <= 0;
            sa_i_a           <= '{default: '0};
            sa_i_a_vld       <= '{default: 1'b0};
            sa_i_b           <= '{default: '0};
            sa_i_b_we        <= '{default: 1'b0};
            sa_i_c           <= '{default: '0};
            sa_i_c_vld       <= '{default: 1'b0};
            done             <= 1'b0;
            for (int r = 0; r < SIZE; ++r)
                for (int c = 0; c < SIZE; ++c)
                    o_c_matrix[r][c] <= '0;
        end else begin
            done <= 1'b0;

            case (state)
                IDLE: begin
                    sa_i_a_vld <= '{default: 1'b0};
                    sa_i_b_we  <= '{default: 1'b0};
                    sa_i_c_vld <= '{default: 1'b0};
                    sa_i_a     <= '{default: '0};
                    sa_i_b     <= '{default: '0};
                    sa_i_c     <= '{default: '0};

                    if (start_edge) begin
                        a_reg       <= i_a_matrix;
                        b_reg       <= i_b_matrix;
                        feed_idx    <= 0;
                        state       <= PRELOAD;
                    end
                end

                PRELOAD: begin
                    sa_i_a_vld <= '{default: 1'b0};
                    sa_i_c_vld <= '{default: 1'b1};
                    sa_i_a     <= '{default: '0};
                    sa_i_c     <= '{default: '0};
                    sa_i_b_we  <= '{default: 1'b1};

                    for (int c = 0; c < SIZE; ++c) begin
                        sa_i_b[c] <= b_reg[feed_idx][c];
                    end

                    if (feed_idx == SIZE-1) begin
                        feed_idx <= 0;
                        state    <= FEED;
                    end else begin
                        feed_idx <= feed_idx + 1;
                    end
                end

                FEED: begin
                    sa_i_c     <= '{default: '0};
                    sa_i_c_vld <= '{default: 1'b1};
                    sa_i_a_vld <= '{default: 1'b1};
                    sa_i_b_we  <= '{default: 1'b0};

                    for (int r = 0; r < SIZE; ++r) begin
                        sa_i_a[r] <= a_reg[r][feed_idx];
                    end

                    sa_i_b <= '{default: '0};

                    if (feed_idx == SIZE-1) begin
                        state    <= FLUSH;
                    end

                    feed_idx <= feed_idx + 1;
                end

                FLUSH: begin
                    sa_i_a_vld <= '{default: 1'b0};
                    sa_i_b_we  <= '{default: 1'b0};
                    sa_i_c_vld <= '{default: 1'b1};
                    sa_i_a     <= '{default: '0};
                    sa_i_b     <= '{default: '0};
                    sa_i_c     <= '{default: '0};

                    if (total_collected == TOTAL_EXPECTED) begin
                        o_c_matrix <= result_reg;
                        done       <= 1'b1;
                        state      <= COMPLETE;
                    end
                end

                COMPLETE: begin
                    sa_i_a_vld <= '{default: 1'b0};
                    sa_i_b_we  <= '{default: 1'b0};
                    sa_i_c_vld <= '{default: 1'b0};
                    sa_i_a     <= '{default: '0};
                    sa_i_b     <= '{default: '0};
                    sa_i_c     <= '{default: '0};
                    done       <= 1'b1;

                    if (start_edge) begin
                        a_reg       <= i_a_matrix;
                        b_reg       <= i_b_matrix;
                        feed_idx    <= 0;
                        state       <= PRELOAD;
                    end
                end

                default: state <= IDLE;
            endcase
        end
    end

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            total_collected <= 0;
            for (int r = 0; r < SIZE; ++r) begin
                for (int c = 0; c < SIZE; ++c) begin
                    result_reg[r][c] <= '0;
                end
                collect_ptr[r] <= 0;
            end
        end else begin
            if ((state == IDLE && start_edge) || state == PRELOAD) begin
                total_collected <= 0;
                for (int r = 0; r < SIZE; ++r) begin
                    for (int c = 0; c < SIZE; ++c) begin
                        result_reg[r][c] <= '0;
                    end
                    collect_ptr[r] <= 0;
                end
            end

            if (state == FLUSH || state == COMPLETE) begin
                inc_tmp = 0;
                for (int r = 0; r < SIZE; ++r) begin
                    if (sa_o_c_vld[r] && collect_ptr[r] < SIZE) begin
                        result_reg[r][collect_ptr[r]] <= sa_o_c[r];
                        collect_ptr[r]               <= collect_ptr[r] + 1;
                        inc_tmp = inc_tmp + 1;
                    end
                end

                if (inc_tmp != 0) begin
                    total_collected <= total_collected + inc_tmp;
                end
            end
        end
    end

endmodule
