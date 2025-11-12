CC ?= cc
DPI_INC ?=
DPI_CFLAGS ?= -shared -fPIC

TOP_TB_NAME := sa_top_tb

TB_LIST := tb/sa_dpi_tb.sv

RTL_LIST := \
	src/pe.sv \
	src/sa_core.sv \
	src/sa_top.sv \

VCD_FILE := dump.vcd

ifeq ($(GUI), 1)
VSIM_FLAGS :=
else
VSIM_FLAGS := -c -do 'vcd file $(VCD_FILE); vcd add -r /$(TOP_TB_NAME)/*; run -all'
endif

verilator: $(TB_LIST) $(RTL_LIST)
	verilator --binary --top-module $(TOP_TB_NAME) -Wno-fatal $^
	./obj_dir/V$(TOP_TB_NAME)

lint: $(RTL_LIST)
	verilator --lint-only $^

vsim: $(TB_LIST) $(RTL_LIST)
	vlog $^
	vsim work.$(TOP_TB_NAME) $(VSIM_FLAGS) $(VSIM_LIBS)

clean:
	rm -rf transcript work obj_dir $(VCD_FILE)

waves: $(VCD_FILE)
	gtkwave $(VCD_FILE) &

.PHONY: clean verilator waves vsim lint