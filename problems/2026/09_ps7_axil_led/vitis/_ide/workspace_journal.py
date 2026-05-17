# 2026-05-15T15:40:05.188891
import vitis

client = vitis.create_client()
client.set_workspace(path="vitis")

platform = client.create_platform_component(name = "zynq_platform",hw_design = "$COMPONENT_LOCATION/../../fpga/design_1_wrapper.xsa",os = "linux",cpu = "ps7_cortexa9_0",domain_name = "linux_ps7_cortexa9",generate_dtb = True)

platform = client.get_component(name="zynq_platform")
domain = platform.get_domain(name="linux_ps7_cortexa9")

domain = platform.get_domain(name="linux_ps7_cortexa9")

domain.recompile_dtb()

status = platform.build()

vitis.dispose()

