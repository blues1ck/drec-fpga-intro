`timescale 1ns / 1ps

module tb_shift_register;

    // Сигналы
    reg clk;
    reg rst_n;
    reg enable;
    reg load;
    reg data_in;
    reg [7:0] parallel_data_in;
    wire data_out;

    // Инстанцирование модуля
    shift_register uut (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .load(load),
        .data_in(data_in),
        .parallel_data_in(parallel_data_in),
        .data_out(data_out)
    );

    // Генерация тактового сигнала
    always #5 clk = ~clk;

    // Последовательность тестов
    initial begin
        // Инициализация
        clk = 0;
        rst_n = 0;
        enable = 0;
        load = 0;
        data_in = 0;
        parallel_data_in = 8'h55;
        #10;
        rst_n = 1;

        // Параллельная загрузка
        load = 1;
        #10;
        load = 0;

        // Сдвиг данных
        enable = 1;
        data_in = 1;
        #10;
        data_in = 0;
        #10;
        data_in = 1;
        #10;
        enable = 0;

        // Завершение симуляции
        #20;
        $finish;
    end

    // Мониторинг сигналов
    initial begin
        $monitor("Time = %t, data_out = %b", $time, data_out);
    end

endmodule
