transcript on
if {[file exists gate_work]} {
	vdel -lib gate_work -all
}
vlib gate_work
vmap work gate_work

vlog -vlog01compat -work work +incdir+. {fpga.vo}

vlog -vlog01compat -work work +incdir+/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src {/home/ilya/Desktop/baikal/drec-fpga-intro/problems/2025/06_cpu/src/fpga_top_tb.v}

vsim -t 1ps +transport_int_delays +transport_path_delays -L altera_ver -L cycloneive_ver -L gate_work -L work -voptargs="+acc"  fpga_top_tb

add wave *
view structure
view signals
run -all
