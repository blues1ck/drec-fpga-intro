SIM ?= verilator
WAVES ?= 0
COV ?= 0

# Add common Python user bin directory to PATH for cocotb-config
export PATH := $(shell python3 -c "import site; import os; print(os.path.join(site.USER_BASE, 'bin'))" 2>/dev/null):$(PATH)

VERILOG_SOURCES :=  \
	src/axis_fifo.sv

.PHONY: lint

MODULE   = axis_fifo_tb
TOPLEVEL = axis_fifo

ifeq ($(SIM),verilator)
ifeq ($(WAVES),1)
	EXTRA_ARGS += --trace --trace-fst --trace-structs
endif
ifeq ($(COV),1)
	EXTRA_ARGS += --coverage
endif
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

lint: $(VERILOG_SOURCES)
	@echo "Running lint check..."
	verilator --lint-only $^
	@echo "Lint check completed"
