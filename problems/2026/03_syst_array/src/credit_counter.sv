module credit_counter #(
    parameter int MAX_CREDITS = 8
) (
    input  logic clk,
    input  logic rst_n,
    input  logic i_inc,  // Increment credits (when data is consumed)
    input  logic i_dec,  // Decrement credits (when data is produced)
    output logic o_ready // Ready when credits > 0
);

    localparam int CNT_WIDTH = $clog2(MAX_CREDITS + 1);
    logic [CNT_WIDTH-1:0] credits;

    assign o_ready = (credits > 0);

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            credits <= MAX_CREDITS[CNT_WIDTH-1:0];
        end else begin
            case ({i_inc, i_dec})
                2'b10: begin
                    if (credits < MAX_CREDITS[CNT_WIDTH-1:0])
                        credits <= credits + 1;
                end
                2'b01: begin
                    if (credits > 0)
                        credits <= credits - 1;
                end
                2'b11: begin
                    // Both inc and dec - no change
                    credits <= credits;
                end
                default: credits <= credits;
            endcase
        end
    end

endmodule

