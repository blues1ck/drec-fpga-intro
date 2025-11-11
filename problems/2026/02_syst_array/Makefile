CC ?= cc
DPI_INC ?=
DPI_CFLAGS ?= -shared -fPIC

TOP_TB_NAME := sa_dpi_tb

TB_LIST := tb/sa_dpi_tb.sv

RTL_LIST :=  \
	src/pe.sv \
	src/sa_core.sv \

DPI_SRCS := tb/matmul_ref.c

VCD_FILE := dump.vcd

ifeq ($(GUI), 1)
VSIM_FLAGS :=
else
VSIM_FLAGS := -c -do 'vcd file $(VCD_FILE); vcd add -r /$(TOP_TB_NAME)/*; run -all'
endif

build:
	mkdir -p build

build/libdpi.so: build $(DPI_SRCS)
	$(CC) $(DPI_CFLAGS) $(if $(DPI_INC),-I$(DPI_INC),) -o $@ $(DPI_SRCS)

vsim: $(TB_LIST) $(RTL_LIST) build/libdpi.so
	vlog $(TB_LIST) $(RTL_LIST)
	sim_flags="$(VSIM_FLAGS)"; \
	vsim $$sim_flags -sv_lib build/libdpi work.$(TOP_TB_NAME) $(VSIM_LIBS)

verilator: $(TB_LIST) $(RTL_LIST) $(DPI_SRCS)
	verilator --binary -Wno-fatal $^
	./obj_dir/V$(TOP_TB_NAME)

lint: $(RTL_LIST) 
	verilator --lint-only $^

clean:
	rm -rf transcript work obj_dir build $(VCD_FILE)

waves: $(VCD_FILE)
	gtkwave $(VCD_FILE) &

.PHONY: clean verilator waves vsim build