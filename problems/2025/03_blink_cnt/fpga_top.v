module fpga_top(
    input  wire        CLK,   // Тактовый сигнал (50 МГц)
    input  wire        RSTN,  // Кнопка сброса (активный низкий уровень)
    output wire [11:0] LED    // Светодиоды (активный низкий уровень)
);
    assign LED[11:1] = {11{1'b1}}; // Выключить неиспользуемые светодиоды

    reg rst_n, RSTN_d;
    always @(posedge CLK) begin
        rst_n  <= RSTN_d; // Синхронизация сигнала сброса
        RSTN_d <= RSTN;
    end

    blink blink_inst(
        .clk    (CLK),
        .rst_n  (rst_n),
        .out    (LED[0])
    );
endmodule