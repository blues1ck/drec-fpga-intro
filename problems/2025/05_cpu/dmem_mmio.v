module dmem_mmio #(
    parameter ADDR_WIDTH = 10,
    parameter DATA_WIDTH = 32
)(
    input  wire clk,
    input  wire we,
    input  wire [ADDR_WIDTH-1:0] addr,
    input  wire [DATA_WIDTH-1:0] wdata,
    output wire [DATA_WIDTH-1:0] rdata,
    // MMIO
    output reg [DATA_WIDTH-1:0] mmio_data,
    output reg mmio_we
);
    reg [DATA_WIDTH-1:0] mem [0:(1<<ADDR_WIDTH)-1];
    
    always @(posedge clk) begin
        mmio_we <= 0;
        if (we) begin
            if (addr == 32'h20) begin // MMIO-адрес для 7-сегментника
                mmio_data <= wdata;
                mmio_we   <= 1;
            end else begin
                mem[addr] <= wdata;
            end
        end
    end
    
    assign rdata = (addr == 32'h20) ? 32'b0 : mem[addr]; 
endmodule

