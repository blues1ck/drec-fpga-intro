module uart_rx #(
    parameter CLKS_PER_BIT = 434 // для 50 МГц и 115200 бод: 50000000/115200 ≈ 434
)(
    input        clk,
    input        rst_n,
    input        rx_serial,
    output reg [7:0] rx_byte,
    output reg      rx_dv
);

    // Состояния конечного автомата
    parameter IDLE         = 3'd0;
    parameter RX_START_BIT = 3'd1;
    parameter RX_DATA_BITS = 3'd2;
    parameter RX_STOP_BIT  = 3'd3;
    parameter CLEANUP      = 3'd4;

    reg [2:0] state;
    reg [7:0] clk_cnt;
    reg [2:0] bit_idx;
    reg [7:0] rx_data;
    reg [1:0] rx_sync;

    // Синхронизация входящего сигнала
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            rx_sync <= 2'b11;
        else
            rx_sync <= {rx_sync[0], rx_serial};
    end

    // Основной конечный автомат
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state   <= IDLE;
            clk_cnt <= 0;
            bit_idx <= 0;
            rx_data <= 0;
            rx_dv   <= 0;
            rx_byte <= 0;
        end else begin
            case (state)
                IDLE: begin
                    rx_dv <= 0;
                    if (rx_sync[1] == 1'b0) begin // обнаружен старт-бит
                        state   <= RX_START_BIT;
                        clk_cnt <= 0;
                    end
                end
                RX_START_BIT: begin
                    if (clk_cnt == (CLKS_PER_BIT-1)/2) begin
                        if (rx_sync[1] == 1'b0) begin
                            clk_cnt <= 0;
                            state   <= RX_DATA_BITS;
                            bit_idx <= 0;
                        end else begin
                            state <= IDLE;
                        end
                    end else begin
                        clk_cnt <= clk_cnt + 1;
                    end
                end
                RX_DATA_BITS: begin
                    if (clk_cnt < CLKS_PER_BIT-1) begin
                        clk_cnt <= clk_cnt + 1;
                    end else begin
                        clk_cnt <= 0;
                        rx_data[bit_idx] <= rx_sync[1];
                        if (bit_idx == 7) begin
                            state   <= RX_STOP_BIT;
                        end else begin
                            bit_idx <= bit_idx + 1;
                        end
                    end
                end
                RX_STOP_BIT: begin
                    if (clk_cnt < CLKS_PER_BIT-1) begin
                        clk_cnt <= clk_cnt + 1;
                    end else begin
                        rx_dv   <= 1;
                        rx_byte <= rx_data;
                        state   <= CLEANUP;
                    end
                end
                CLEANUP: begin
                    state <= IDLE;
                    rx_dv <= 0;
                end
                default: state <= IDLE;
            endcase
        end
    end

endmodule

