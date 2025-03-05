module ComparisonUnit(
    input  wire [31:0] rs1,    // Первый операнд
    input  wire [31:0] rs2,    // Второй операнд
    input  wire [2:0]  func3,  // Функциональный код для операций сравнения
    output wire [1:0] result   // Результат сравнения (0 - ложь, 1 - равенство, 2 - истина)
);

    // Определение операций сравнения
    parameter EQ = 3'b000;  // Равенство
    parameter NE = 3'b001;  // Не равенство
    parameter LT = 3'b010;  // Меньше (знаковое)
    parameter GE = 3'b011;  // Больше или равно (знаковое)
    parameter LTU = 3'b100; // Меньше (беззнаковое)
    parameter GEU = 3'b111; // Больше или равно (беззнаковое)

    // Выполнение операций сравнения
    always @(*) begin
        case (func3)
            EQ: result = (rs1 == rs2) ? 2'b01 : 2'b00;  // Равенство
            NE: result = (rs1 != rs2) ? 2'b01 : 2'b00;  // Не равенство
            LT: result = ($signed(rs1) < $signed(rs2)) ? 2'b01 : 2'b00;  // Меньше (знаковое)
            GE: result = ($signed(rs1) >= $signed(rs2)) ? 2'b01 : 2'b00;  // Больше или равно (знаковое)
            LTU: result = (rs1 < rs2) ? 2'b01 : 2'b00;  // Меньше (беззнаковое)
            GEU: result = (rs1 >= rs2) ? 2'b01 : 2'b00;  // Больше или равно (беззнаковое)
            default: result = 2'b00;                // По умолчанию
        endcase
    end

endmodule