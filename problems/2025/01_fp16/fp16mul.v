module fp16TEST_OP(
    input  wire [15:0] i_a,  // Первое FP16 число
    input  wire [15:0] i_b,  // Второе FP16 число
    output wire [15:0] o_res  // Результат умножения
);

    // Разделение входных данных на составляющие
    wire [4:0] exp_a; assign exp_a = i_a[14:10];
    wire [9:0] mant_a; assign mant_a = i_a[9:0];
    wire sign_a; assign sign_a = i_a[15];

    wire [4:0] exp_b; assign exp_b = i_b[14:10];
    wire [9:0] mant_b; assign mant_b = i_b[9:0];
    wire sign_b; assign sign_b = i_b[15];

    // Умножение мантисс
    reg [19:0] mant_product;  // Произведение мантисс
    reg [4:0] exp_result;     // Результат экспоненты

    always @(*) begin
        // Умножение мантисс
        mant_product = {1'b1, mant_a} * {1'b1, mant_b};

        // Сложение экспонент
        exp_result = exp_a + exp_b - 5'd15;  // Вычитание 15 для нормализации

        // Нормализация мантиссы
        if (mant_product[19]) begin
            exp_result = exp_result + 1'b1;
            mant_product = mant_product >> 1;
        end

        // Определение знака результата
        reg sign_result; assign sign_result = sign_a ^ sign_b;

        // Применение правил округления
        // Для простоты реализации округление не учитывается здесь

        // Применение DAZ и FTZ
        if (exp_result == 5'b00000) begin
            // Денормализованное число, применение DAZ/FTZ
            if (sign_a == 1'b1 || sign_b == 1'b1) begin
                o_res = 16'b8000;  // Применение DAZ для отрицательных чисел
            end else begin
                o_res = 16'b0000;  // Применение FTZ для положительных чисел
            end
        end else begin
            // Нормализованное число
            o_res = {sign_result, exp_result, mant_product[9:0]};
        end
    end

endmodule