`timescale 1ns / 1ps

module tb_clk_divider;

    // Параметры
    localparam CLK_IN_FREQ = 50_000_000;
    localparam CLK_OUT_FREQ = 9600;

    // Сигналы
    reg clk_in;
    reg rst_n;
    wire clk_out;

    // Инстанцирование модуля
    clk_divider #(
        .CLK_IN_FREQ(CLK_IN_FREQ),
        .CLK_OUT_FREQ(CLK_OUT_FREQ)
    ) uut (
        .clk_in(clk_in),
        .rst_n(rst_n),
        .clk_out(clk_out)
    );

    // Генерация тактового сигнала
    always #((1.0/CLK_IN_FREQ)*500_000_000) clk_in = ~clk_in;

    // Последовательность тестов
    initial begin
        // Инициализация
        clk_in = 0;
        rst_n = 0;
        #10;
        rst_n = 1;

        // Задержка для наблюдения за выходным сигналом
        #100000; // Задержка 100 us

        // Завершение симуляции
        $finish;
    end

    // Мониторинг сигналов
    initial begin
        $monitor("Time = %t, clk_in = %b, clk_out = %b", $time, clk_in, clk_out);
    end

endmodule
