import vitis

XSA_FILE = "fpga/design_1_wrapper.xsa"
WORKSPACE_DIR = "vitis"
PLATFORM = "zynq_platform"
DOMAIN = "linux_ps7_cortexa9"

cli = vitis.create_client()
cli.set_workspace(path=WORKSPACE_DIR)

plat = cli.create_platform_component(
    name=PLATFORM,
    hw_design=XSA_FILE,
    cpu="ps7_cortexa9_0",
    os="linux",
    domain_name=DOMAIN,
)

plat_domain = plat.get_domain(name=DOMAIN)
plat_domain.recompile_dtb()
plat.build()
cli.close()
