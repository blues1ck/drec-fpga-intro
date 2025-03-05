`timescale 1ns / 1ps

module tb_fifo;

    // Параметры
    localparam DEPTH_BITS = 4;
    localparam DATA_WIDTH = 8;

    // Сигналы
    reg clk;
    reg rst_n;
    reg wr_en;
    reg rd_en;
    reg [DATA_WIDTH-1:0] data_in;
    wire [DATA_WIDTH-1:0] data_out;
    wire full;
    wire empty;

    // Инстанцирование модуля
    fifo #(
        .DEPTH_BITS(DEPTH_BITS),
        .DATA_WIDTH(DATA_WIDTH)
    ) uut (
        .clk(clk),
        .rst_n(rst_n),
        .wr_en(wr_en),
        .rd_en(rd_en),
        .data_in(data_in),
        .data_out(data_out),
        .full(full),
        .empty(empty)
    );

    // Генерация тактового сигнала
    always #5 clk = ~clk;

    // Последовательность тестов
    initial begin
        // Инициализация
        clk = 0;
        rst_n = 0;
        wr_en = 0;
        rd_en = 0;
        data_in = 0;
        #10;
        rst_n = 1;

        // Запись нескольких значений
        wr_en = 1;
        data_in = 8'h11; #10;
        data_in = 8'h22; #10;
        data_in = 8'h33; #10;
        wr_en = 0;

        // Чтение значений
        rd_en = 1;
        #10;
        $display("data_out = %h, full = %b, empty = %b", data_out, full, empty);
        #10;
        $display("data_out = %h, full = %b, empty = %b", data_out, full, empty);
        #10;
        $display("data_out = %h, full = %b, empty = %b", data_out, full, empty);
        rd_en = 0;

        // Завершение симуляции
        $finish;
    end

    // Мониторинг сигналов
    initial begin
        $monitor("Time = %t, data_in = %h, data_out = %h, full = %b, empty = %b", $time, data_in, data_out, full, empty);
    end

endmodule
