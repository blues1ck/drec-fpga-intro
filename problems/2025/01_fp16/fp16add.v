module fp16TEST_OP(
    input  wire [15:0] i_a,  // Первое FP16 число
    input  wire [15:0] i_b,  // Второе FP16 число
    output wire [15:0] o_res  // Результат операции
);

    // Разделение входных данных на составляющие
    wire [4:0] exp_a; assign exp_a = i_a[14:10];
    wire [9:0] mant_a; assign mant_a = i_a[9:0];
    wire sign_a; assign sign_a = i_a[15];

    wire [4:0] exp_b; assign exp_b = i_b[14:10];
    wire [9:0] mant_b; assign mant_b = i_b[9:0];
    wire sign_b; assign sign_b = i_b[15];

    // Выполнение сложения
    reg [19:0] mant_sum;  // Сумма мантисс
    reg [4:0] exp_result; // Результат экспоненты

    always @(*) begin
        // Сравнение показателей степени и выравнивание мантисс
        if (exp_a > exp_b) begin
            // Выравнивание мантиссы b
            mant_sum = {1'b1, mant_a} + {1'b1, mant_b} >> (exp_a - exp_b);
        end else if (exp_b > exp_a) begin
            // Выравнивание мантиссы a
            mant_sum = {1'b1, mant_b} + {1'b1, mant_a} >> (exp_b - exp_a);
        end else begin
            // Мантиссы уже выровнены
            mant_sum = {1'b1, mant_a} + {1'b1, mant_b};
        end

        // Определение знака результата
        reg sign_result; assign sign_result = sign_a ^ sign_b;

        // Нормализация мантиссы
        if (mant_sum[19]) begin
            exp_result = exp_a + 1'b1;
            mant_sum = mant_sum >> 1;
        end else begin
            exp_result = exp_a;
        end

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
            o_res = {sign_result, exp_result, mant_sum[9:0]};
        end
    end

endmodule