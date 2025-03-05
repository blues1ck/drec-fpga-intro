`timescale 1ns / 1ps

module tb_lfsr;

    // Сигналы
    reg clk;
    reg rst_n;
    reg enable;
    wire [7:0] q;

    // Инстанцирование модуля
    lfsr uut (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .q(q)
    );

    // Генерация тактового сигнала
    always #5 clk = ~clk;

    // Последовательность тестов
    initial begin
        // Инициализация
        clk = 0;
        rst_n = 0;
        enable = 0;
        #10;
        rst_n = 1;

        // Включаем генерацию
        enable = 1;
        #100;

        // Выключаем генерацию
        enable = 0;
        #10;

        // Завершение симуляции
        $finish;
    end

    // Мониторинг сигналов
    initial begin
        $monitor("Time = %t, q = %h", $time, q);
    end

endmodule
