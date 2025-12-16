TOP_TB_NAME := sa_top_tb

TB_LIST := src/sa_top_tb.sv src/sa_top_tb.cc

RTL_LIST :=  \
	src/sr.sv \
	src/pe.sv \
	src/delay_line.sv \
	src/delay_line_rev.sv \
	src/we_line.sv \
	src/sa_core.sv \
	src/sa_top.sv

VCD_FILE := dump.vcd

ifeq ($(GUI), 1)
VSIM_FLAGS :=
else
VSIM_FLAGS := -c -do 'vcd file $(VCD_FILE); vcd add -r /$(TOP_TB_NAME)/*; run -all'
endif

vsim: $(TB_LIST) $(RTL_LIST)
	@echo "Compiling SystemVerilog files..."
	vlog $^
	@echo "Running ModelSim simulation..."
	vsim work.$(TOP_TB_NAME) $(VSIM_FLAGS) $(VSIM_LIBS)

verilator: $(TB_LIST) $(RTL_LIST)
	@echo "Compiling with Verilator..."
	verilator --binary -Wno-fatal --trace $^
	@echo "Running simulation..."
	./obj_dir/V$(TOP_TB_NAME)

lint: $(RTL_LIST)
	@echo "Running lint check..."
	verilator --lint-only $^
	@echo "Lint check completed"

clean:
	@echo "Cleaning build artifacts..."
	rm -rf transcript work obj_dir $(VCD_FILE)
	@echo "Clean completed"

waves: $(VCD_FILE)
	@echo "Opening waveform viewer..."
	gtkwave $(VCD_FILE) &

.PHONY: clean verilator waves vsim lint
