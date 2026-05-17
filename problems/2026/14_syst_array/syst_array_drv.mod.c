#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x98d564ff, "__platform_driver_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x28fa933e, "platform_get_resource" },
	{ 0x96e1a532, "devm_ioremap" },
	{ 0xd9978d7d, "_dev_info" },
	{ 0x9ca651a1, "misc_register" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x5f754e5a, "memset" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x8cd2cb58, "platform_driver_unregister" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x2203cf01, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cdrec-fpga-intro,syst-array");
MODULE_ALIAS("of:N*T*Cdrec-fpga-intro,syst-arrayC*");
MODULE_ALIAS("of:N*T*Cdrec-fpga-intro,sa-dev");
MODULE_ALIAS("of:N*T*Cdrec-fpga-intro,sa-devC*");
MODULE_ALIAS("of:N*T*Cxlnx,syst-array-axil-1.0");
MODULE_ALIAS("of:N*T*Cxlnx,syst-array-axil-1.0C*");
MODULE_ALIAS("of:N*T*Cxlnx,axil2reg-1.0");
MODULE_ALIAS("of:N*T*Cxlnx,axil2reg-1.0C*");
