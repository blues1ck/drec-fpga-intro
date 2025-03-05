module ALU_R(
    input  wire [4:0]  func3,  // Функциональный код для операций
    input  wire [6:0]  func7,  // Дополнительный функциональный код для умножения и деления
    input  wire [31:0] rs1,    // Первый операнд
    input  wire [31:0] rs2,    // Второй операнд
    output wire [31:0] result  // Результат операции
);

    // Определение операций
    parameter ADD = 7'b0000000;  // Сложение
    parameter SUB = 7'b0100000;  // Вычитание
    parameter AND = 7'b0000000;  // Битовая операция AND
    parameter OR  = 7'b0000000;  // Битовая операция OR
    parameter XOR = 7'b0000000;  // Битовая операция XOR

    // Выполнение операций
    always @(*) begin
        case ({func7, func3})
            {ADD, 7'b0000000}: result = rs1 + rs2;  // Сложение
            {SUB, 7'b0100000}: result = rs1 - rs2;  // Вычитание
            {AND, 7'b0000000}: result = rs1 & rs2;   // Битовая операция AND
            {OR,  7'b0000000}: result = rs1 | rs2;   // Битовая операция OR
            {XOR, 7'b0000000}: result = rs1 ^ rs2;  // Битовая операция XOR
            default: result = 32'd0;                // По умолчанию
        endcase
    end

endmodule