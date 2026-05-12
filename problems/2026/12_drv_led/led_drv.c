#include <linux/fs.h>
#include <linux/miscdevice.h>
#include <linux/module.h>
#include <linux/uaccess.h>
#include <linux/io.h>
#include <linux/of.h>
#include <linux/platform_device.h>

static void __iomem *base;

static ssize_t led_write(struct file *filp, const char __user *buf, size_t len,
			 loff_t *off)
{
	u8 led_mask = 0;

	if (len < 1)
		return -EINVAL;

	if (copy_from_user(&led_mask, buf, sizeof(led_mask)))
		return -EFAULT;

	iowrite32((u32)led_mask, base);
	pr_debug("led_drv: write value=0x%x\n", led_mask);

	return 1;
}

static const struct file_operations led_fops = {
	.owner = THIS_MODULE,
	.write = led_write,
};

static struct miscdevice led_miscdev = {
	.minor = MISC_DYNAMIC_MINOR,
	.name = "led",
	.fops = &led_fops,
	.mode = 0666,
};

static int led_probe(struct platform_device *pdev)
{
	struct device *dev = &pdev->dev;
	int ret;

	base = devm_platform_ioremap_resource(pdev, 0);
	if (IS_ERR(base))
		return PTR_ERR(base);

	dev_info(dev, "mapped register at %px\n", base);
	led_miscdev.parent = dev;

	ret = misc_register(&led_miscdev);
	if (ret) {
		dev_err(dev, "failed to register misc device: %d\n", ret);
		return ret;
	}

	dev_info(dev, "device available as /dev/%s\n", led_miscdev.name);
	return 0;
}

static const struct of_device_id led_dt_match[] = {
	{ .compatible = "drec-fpga-intro,led-dev" },
	{},
};
MODULE_DEVICE_TABLE(of, led_dt_match);

static struct platform_driver led_driver = {
	.probe = led_probe,
	.driver = {
		.name = "led",
		.of_match_table = led_dt_match,
	},
};

module_platform_driver(led_driver);
MODULE_LICENSE("GPL");
