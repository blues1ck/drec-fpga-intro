module reg_file #(
    parameter ADDR_WIDTH = 5,   // Ширина адреса (log2(32) = 5)
    parameter DATA_WIDTH = 32  // Ширина данных (32 бита)
) (
    input  wire clk,
    input  wire rst_n,

    // Порт чтения 1
    input  wire [ADDR_WIDTH-1:0] rd_addr1,
    output reg  [DATA_WIDTH-1:0] rd_data1,

    // Порт чтения 2
    input  wire [ADDR_WIDTH-1:0] rd_addr2,
    output reg  [DATA_WIDTH-1:0] rd_data2,

    // Порт записи
    input  wire [ADDR_WIDTH-1:0] wr_addr,
    input  wire [DATA_WIDTH-1:0] wr_data,
    input  wire wr_en
);

    reg [DATA_WIDTH-1:0] registers [31:0]; // Массив регистров

    // Чтение 1
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rd_data1 <= 0;
        end else begin
            rd_data1 <= registers[rd_addr1];
        end
    end

    // Чтение 2
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rd_data2 <= 0;
        end else begin
            rd_data2 <= registers[rd_addr2];
        end
    end

    // Запись
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // Можно добавить логику для сброса всех регистров при сбросе
        end else if (wr_en) begin
            registers[wr_addr] <= wr_data;
        end
    end

endmodule
