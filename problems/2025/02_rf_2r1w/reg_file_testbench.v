`timescale 1ns / 1ps

module tb_reg_file;

    // Параметры
    localparam ADDR_WIDTH = 5;
    localparam DATA_WIDTH = 32;

    // Сигналы
    reg clk;
    reg rst_n;
    reg [ADDR_WIDTH-1:0] rd_addr1;
    wire [DATA_WIDTH-1:0] rd_data1;
    reg [ADDR_WIDTH-1:0] rd_addr2;
    wire [DATA_WIDTH-1:0] rd_data2;
    reg [ADDR_WIDTH-1:0] wr_addr;
    reg [DATA_WIDTH-1:0] wr_data;
    reg wr_en;

    // Инстанцирование модуля
    reg_file #(
        .ADDR_WIDTH(ADDR_WIDTH),
        .DATA_WIDTH(DATA_WIDTH)
    ) uut (
        .clk(clk),
        .rst_n(rst_n),
        .rd_addr1(rd_addr1),
        .rd_data1(rd_data1),
        .rd_addr2(rd_addr2),
        .rd_data2(rd_data2),
        .wr_addr(wr_addr),
        .wr_data(wr_data),
        .wr_en(wr_en)
    );

    // Генерация тактового сигнала
    always #5 clk = ~clk;

    // Последовательность тестов
    initial begin
        // Инициализация
        clk = 0;
        rst_n = 0;
        rd_addr1 = 0;
        rd_addr2 = 1;
        wr_addr = 0;
        wr_data = 32'h12345678;
        wr_en = 0;
        #10;
        rst_n = 1;

        // Запись данных в регистр 0
        wr_en = 1;
        #10;
        wr_en = 0;

        // Чтение данных из регистра 0 и 1
        rd_addr1 = 0;
        rd_addr2 = 1;
        #10;
        $display("rd_data1 = %h", rd_data1);
        $display("rd_data2 = %h", rd_data2);

        // Запись данных в регистр 1
        wr_addr = 1;
        wr_data = 32'hAABBCCDD;
        wr_en = 1;
        #10;
        wr_en = 0;

        // Чтение данных из регистра 1
        rd_addr1 = 1;
        #10;
        $display("rd_data1 = %h", rd_data1);

        // Завершение симуляции
        $finish;
    end

endmodule
