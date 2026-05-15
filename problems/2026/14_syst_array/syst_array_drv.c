#include <linux/delay.h>
#include <linux/fs.h>
#include <linux/io.h>
#include <linux/ioport.h>
#include <linux/miscdevice.h>
#include <linux/module.h>
#include <linux/of.h>
#include <linux/platform_device.h>
#include <linux/sizes.h>
#include <linux/uaccess.h>
#include "cmds.h"

#define SA_CTRL_OFF         0x00
#define SA_A_BASE_OFF       0x10
#define SA_B_BASE_OFF       0x50
#define SA_C_BASE_OFF       0x90
#define SA_STRIDE           4
#define SA_CTRL_START       BIT(0)
#define SA_CTRL_DONE        BIT(1)

static void __iomem *sa_mmio_reg;

static int sa_write_matrix(u32 base, const u16 *m)
{
	int i;

	for (i = 0; i < SA_ELEMS; i++)
		iowrite32((u32)m[i], sa_mmio_reg + base + i * SA_STRIDE);

	return 0;
}

static void sa_read_matrix(u32 base, u16 *m)
{
	int i;

	for (i = 0; i < SA_ELEMS; i++)
		m[i] = (u16)ioread32(sa_mmio_reg + base + i * SA_STRIDE);
}

static int sa_wait_done(unsigned int timeout_ms)
{
	unsigned int elapsed = 0;

	while (elapsed < timeout_ms) {
		u32 ctrl = ioread32(sa_mmio_reg + SA_CTRL_OFF);

		if (ctrl & SA_CTRL_DONE)
			return 0;

		udelay(100);
		elapsed++;
	}

	return -ETIMEDOUT;
}

static ssize_t sa_write(struct file *filp, const char __user *buf, size_t count,
			loff_t *ppos)
{
	struct sa_user_ptrs ptrs;
	u16 a[SA_ELEMS];
	u16 b[SA_ELEMS];
	u16 c[SA_ELEMS];
	int rc;

	if (count < sizeof(ptrs))
		return -EINVAL;

	if (copy_from_user(&ptrs, buf, sizeof(ptrs)))
		return -EFAULT;

	if (copy_from_user(a, (void __user *)(unsigned long)ptrs.a_ptr, sizeof(a)))
		return -EFAULT;
	if (copy_from_user(b, (void __user *)(unsigned long)ptrs.b_ptr, sizeof(b)))
		return -EFAULT;

	sa_write_matrix(SA_A_BASE_OFF, a);
	sa_write_matrix(SA_B_BASE_OFF, b);
	iowrite32(SA_CTRL_START, sa_mmio_reg + SA_CTRL_OFF);

	rc = sa_wait_done(1000);
	if (rc)
		return rc;

	sa_read_matrix(SA_C_BASE_OFF, c);
	if (copy_to_user((void __user *)(unsigned long)ptrs.c_ptr, c, sizeof(c)))
		return -EFAULT;

	if (copy_to_user((void __user *)(unsigned long)ptrs.a_ptr, a, sizeof(a)))
		return -EFAULT;
	if (copy_to_user((void __user *)(unsigned long)ptrs.b_ptr, b, sizeof(b)))
		return -EFAULT;

	return sizeof(ptrs);
}

static const struct file_operations sa_fops = {
	.owner = THIS_MODULE,
	.write = sa_write,
};

static struct miscdevice sa_misc = {
	.minor = MISC_DYNAMIC_MINOR,
	.name = "sa-dev",
	.fops = &sa_fops,
};

static int sa_probe(struct platform_device *pdev)
{
	struct device *dev = &pdev->dev;
	struct resource *res;
	resource_size_t map_size = SZ_4K;
	int ret;

	res = platform_get_resource(pdev, IORESOURCE_MEM, 0);
	if (!res)
		return -ENODEV;

	/* Generated DT sometimes contains oversized ranges for custom IP. */
	sa_mmio_reg = devm_ioremap(dev, res->start, map_size);
	if (!sa_mmio_reg)
		return -ENOMEM;
	dev_info(dev, "MMIO at %px\n", sa_mmio_reg);

	ret = misc_register(&sa_misc);
	if (ret)
		return ret;

	dev_info(dev, "Systolic array registered\n");
	return 0;
}

static const struct of_device_id sa_dt_match[] = {
	{ .compatible = "drec-fpga-intro,syst-array" },
	{ .compatible = "drec-fpga-intro,sa-dev" },
	{ .compatible = "xlnx,syst-array-axil-1.0" },
	{ .compatible = "xlnx,axil2reg-1.0" },
	{},
};
MODULE_DEVICE_TABLE(of, sa_dt_match);

static struct platform_driver sa_driver = {
	.probe = sa_probe,
	.remove = NULL,
	.driver = {
		.name = KBUILD_MODNAME,
		.of_match_table = sa_dt_match,
	},
};

module_platform_driver(sa_driver);
MODULE_LICENSE("GPL");
