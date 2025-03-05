module clk_divider #(
    parameter CLK_IN_FREQ = 50_000_000, // Входная частота (50 МГц)
    parameter CLK_OUT_FREQ = 9600      // Выходная частота (по умолчанию 9600 Гц)
) (
    input  wire clk_in,             // Входной тактовый сигнал
    input  wire rst_n,             // Асинхронный сброс (активный низкий)
    output reg  clk_out             // Выходной тактовый сигнал
);

    // Вычисляем коэффициент деления
    localparam DIV_RATIO = CLK_IN_FREQ / CLK_OUT_FREQ / 2; // Делим на 2, чтобы получить 50% duty cycle
    localparam CNT_WIDTH = $clog2(DIV_RATIO); // Определяем ширину счетчика

    reg [CNT_WIDTH-1:0] counter;

    always @(posedge clk_in or negedge rst_n) begin
        if (!rst_n) begin
            counter <= 0;
            clk_out <= 0;
        end else begin
            if (counter == DIV_RATIO - 1) begin
                counter <= 0;
                clk_out <= ~clk_out; // Инвертируем выходной сигнал
            end else begin
                counter <= counter + 1;
            end
        end
    end

endmodule
