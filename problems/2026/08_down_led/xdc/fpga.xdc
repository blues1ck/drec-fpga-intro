# Clock and reset (adapt to your board constraints if needed)
set_property PACKAGE_PIN E3 [get_ports clk]
set_property IOSTANDARD LVCMOS33 [get_ports clk]
create_clock -period 10.000 -name sys_clk [get_ports clk]

set_property PACKAGE_PIN C2 [get_ports rst_n]
set_property IOSTANDARD LVCMOS33 [get_ports rst_n]

# LEDs
set_property -dict { LOC T12 IOSTANDARD LVCMOS18 } [get_ports {led[3]}]
set_property -dict { LOC U12 IOSTANDARD LVCMOS18 } [get_ports {led[2]}]
set_property -dict { LOC V12 IOSTANDARD LVCMOS18 } [get_ports {led[1]}]
set_property -dict { LOC W13 IOSTANDARD LVCMOS18 } [get_ports {led[0]}]
