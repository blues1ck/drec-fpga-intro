module multiplexer (
    input d0, d1, d2, d3,
    input c1, c0,
    output reg y
);

always @(*) begin
    case ({c1, c0})
        2'b00: y = d0;
        2'b01: y = d1;
        2'b10: y = d2;
        2'b11: y = d3;
    endcase    
end

endmodule