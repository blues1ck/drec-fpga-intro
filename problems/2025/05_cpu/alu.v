module alu(
    input [31:0] a, b,
    input [3:0] op,
    output reg [31:0] y
);
    always @* begin
        case (op)
            4'b0000: y = a + b;   // ADD
            4'b1000: y = a - b;   // SUB
            4'b0111: y = a & b;   // AND
            4'b0110: y = a | b;   // OR
            4'b0100: y = a ^ b;   // XOR
            4'b0001: y = a << b[4:0]; // SLL
            4'b0101: y = a >> b[4:0]; // SRL
            4'b1101: y = $signed(a) >>> b[4:0]; // SRA
            4'b0010: y = ($signed(a) < $signed(b)) ? 1 : 0; // SLT
            4'b0011: y = (a < b) ? 1 : 0; // SLTU
            default: y = 0;
        endcase
    end
endmodule
