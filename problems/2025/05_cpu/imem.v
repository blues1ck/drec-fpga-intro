module imem #(
    parameter ADDR_WIDTH = 10,
    parameter DATA_WIDTH = 32,
    parameter INIT_FILE = ""
)(
    input  wire [ADDR_WIDTH-1:0] i_addr,
    output wire [DATA_WIDTH-1:0] o_data
);
    reg [DATA_WIDTH-1:0] mem [0:(1<<ADDR_WIDTH)-1];
    initial if (INIT_FILE != "") $readmemh(INIT_FILE, mem);
    assign o_data = mem[i_addr];
endmodule
