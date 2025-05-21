transcript on
if {[file exists rtl_work]} {
	vdel -lib rtl_work -all
}
vlib rtl_work
vmap work rtl_work

vlog -vlog01compat -work work +incdir+/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src {/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src/dmem.v}
vlog -vlog01compat -work work +incdir+/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src {/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src/regfile.v}
vlog -vlog01compat -work work +incdir+/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src {/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src/hex_display.v}
vlog -vlog01compat -work work +incdir+/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src {/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src/ctrl_74hc595.v}
vlog -vlog01compat -work work +incdir+/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src/altera {/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src/altera/ram1rw32x256.v}
vlog -vlog01compat -work work +incdir+/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src/altera {/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src/altera/imem1r32x256.v}
vlog -vlog01compat -work work +incdir+/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src {/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src/fpga_top.v}
vlog -vlog01compat -work work +incdir+/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src {/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src/system_top.v}
vlog -vlog01compat -work work +incdir+/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src {/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src/mem_xbar.v}
vlog -vlog01compat -work work +incdir+/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src {/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src/imem.v}
vlog -vlog01compat -work work +incdir+/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src {/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src/cpu_top.v}
vlog -vlog01compat -work work +incdir+/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src {/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src/core.v}
vlog -vlog01compat -work work +incdir+/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src {/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src/control.v}
vlog -vlog01compat -work work +incdir+/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src {/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src/cmp.v}
vlog -vlog01compat -work work +incdir+/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src {/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src/alu.v}
vlog -vlog01compat -work work +incdir+/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src {/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src/lsu.v}
vlog -vlog01compat -work work +incdir+/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src {/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src/mmio_xbar.v}

vlog -vlog01compat -work work +incdir+/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src {/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src/fpga_top_tb.v}

vsim -t 1ps -L altera_ver -L lpm_ver -L sgate_ver -L altera_mf_ver -L altera_lnsim_ver -L cycloneive_ver -L rtl_work -L work -voptargs="+acc"  fpga_top_tb

add wave *
view structure
view signals
run -all
