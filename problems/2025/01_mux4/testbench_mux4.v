`timescale 1ns / 1ps

module multiplexer_tb;

  reg d3, d2, d1, d0;
  reg c1, c0;

  wire y;

  multiplexer dut (
    .d3(d3),
    .d2(d2),
    .d1(d1),
    .d0(d0),
    .c1(c1),
    .c0(c0),
    .y(y)
  );

  initial begin
    
    d3 = 0;
    d2 = 0;
    d1 = 0;
    d0 = 0;
    c1 = 0;
    c0 = 0;

    #10 d0 = 1; c0 = 0; c1 = 0;  // Выбираем d0
    #10 d0 = 0;
    #10 d1 = 1; c0 = 1; c1 = 0;  // Выбираем d1
    #10 d1 = 0;
    #10 d2 = 1; c0 = 0; c1 = 1;  // Выбираем d2
    #10 d2 = 0;
    #10 d3 = 1; c0 = 1; c1 = 1;  // Выбираем d3
    #10 d3 = 0;

    #10 $finish;
  end

  initial begin
    $monitor("Time=%0t, d0=%b, d1=%b, d2=%b, d3=%b, c0=%b, c1=%b, y=%b",
             $time, d0, d1, d2, d3, c0, c1, y);
  end

endmodule