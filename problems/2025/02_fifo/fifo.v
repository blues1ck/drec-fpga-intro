module fifo #(
    parameter DEPTH_BITS = 4,  // Глубина FIFO (в виде степени 2, например, 4 означает 2^4 = 16)
    parameter DATA_WIDTH = 8   // Ширина данных
) (
    input  wire clk,
    input  wire rst_n,
    input  wire wr_en,          // Вход разрешения записи
    input  wire rd_en,          // Вход разрешения чтения
    input  wire [DATA_WIDTH-1:0] data_in,    // Входные данные
    output reg  [DATA_WIDTH-1:0] data_out,   // Выходные данные
    output reg  full,           // Флаг "полно"
    output reg  empty           // Флаг "пусто"
);

    localparam DEPTH = 1 << DEPTH_BITS; // Вычисляем глубину FIFO

    reg [DATA_WIDTH-1:0] mem [DEPTH-1:0]; // Память FIFO
    reg [DEPTH_BITS:0] wr_ptr;   // Указатель записи (с дополнительным битом для различения full/empty)
    reg [DEPTH_BITS:0] rd_ptr;   // Указатель чтения (с дополнительным битом для различения full/empty)

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            wr_ptr <= 0;
            rd_ptr <= 0;
            full <= 0;
            empty <= 1;
            data_out <= 0;
        end else begin
            // Запись
            if (wr_en && !full) begin
                mem[wr_ptr[DEPTH_BITS-1:0]] <= data_in;
                wr_ptr <= wr_ptr + 1;

                // Обновляем флаги full/empty
                if (wr_ptr == {~rd_ptr[DEPTH_BITS], rd_ptr[DEPTH_BITS-1:0]}) begin // FULL
                    full <= 1;
                end
                empty <= 0;

            end

            // Чтение
            if (rd_en && !empty) begin
                data_out <= mem[rd_ptr[DEPTH_BITS-1:0]];
                rd_ptr <= rd_ptr + 1;

                // Обновляем флаги full/empty
                if (rd_ptr == wr_ptr) begin // EMPTY
                    empty <= 1;
                end
                full <= 0;
            end
        end
    end

endmodule
