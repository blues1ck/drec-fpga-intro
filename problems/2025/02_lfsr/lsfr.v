module lfsr (
    input  wire clk,
    input  wire rst_n,
    input  wire enable,         // Вход разрешения
    output reg  [7:0] q         // Выходной регистр
);

    reg [7:0] lfsr;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            lfsr <= 8'h01; // Начальное значение (не должно быть 0)
            q <= 8'h01;
        end else if (enable) begin
            lfsr[0] <= lfsr[6] ^ lfsr[5] ^ lfsr[4] ^ lfsr[7];
            lfsr[7:1] <= lfsr[6:0];
            q <= lfsr;
        end
    end

endmodule
