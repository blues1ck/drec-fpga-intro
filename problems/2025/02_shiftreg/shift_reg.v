module shift_register (
    input  wire clk,
    input  wire rst_n,
    input  wire enable,         // Вход разрешения
    input  wire load,           // Вход параллельной загрузки
    input  wire data_in,        // Вход последовательных данных
    input  wire [7:0] parallel_data_in, // Вход параллельных данных
    output reg  data_out         // Выходной бит
);

    reg [7:0] shift_reg;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            shift_reg <= 0;
            data_out <= 0;
        end else if (load) begin
            shift_reg <= parallel_data_in; // Параллельная загрузка
            data_out <= parallel_data_in[7];
        end else if (enable) begin
            shift_reg <= {data_in, shift_reg[7:1]}; // Сдвиг вправо
            data_out <= data_in; // Выводим входящий бит
        end
    end

endmodule
