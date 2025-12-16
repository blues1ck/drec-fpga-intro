SIM ?= verilator

# Add common Python user bin directory to PATH for cocotb-config
export PATH := $(shell python3 -c "import site; import os; print(os.path.join(site.USER_BASE, 'bin'))" 2>/dev/null):$(PATH)

TOPLEVEL_LANG = verilog

VERILOG_SOURCES += \
	src/sa_top.sv \
	src/sa_core.sv \
	src/pe.sv \
	src/sr.sv \
	src/we_line.sv \
	src/delay_line.sv \
	src/delay_line_rev.sv \
	src/credit.sv \
	src/fifo.sv \
	sa_credit_top.sv


TOPLEVEL = sa_credit_top
MODULE   = sa_credit_top_tb

ifeq ($(SIM), verilator)
    EXTRA_ARGS += --trace --trace-fst --trace-structs
    # Set C++ standard for Verilator compilation
    export CXXFLAGS := -std=c++14 $(CXXFLAGS)
endif

# Find cocotb-config in PATH or common installation locations
COCOTB_CONFIG := $(shell which cocotb-config 2>/dev/null || python3 -c "import site; import os; print(os.path.join(site.USER_BASE, 'bin', 'cocotb-config'))" 2>/dev/null || echo "")
ifeq ($(COCOTB_CONFIG),)
    $(error cocotb-config not found. Please install cocotb: pip3 install cocotb)
endif
ifeq ($(wildcard $(COCOTB_CONFIG)),)
    $(error cocotb-config not found at $(COCOTB_CONFIG). Please install cocotb: pip3 install cocotb)
endif

include $(shell $(COCOTB_CONFIG) --makefiles)/Makefile.sim
