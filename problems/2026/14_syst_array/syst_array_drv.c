#include <linux/delay.h>
#include <linux/module.h>
#include <linux/platform_device.h>
#include <linux/interrupt.h>
#include <linux/io.h>
#include <linux/of.h>
#include <linux/mm.h>
#include <linux/of_irq.h>
#include <linux/dma-mapping.h>
#include <linux/miscdevice.h>
#include <linux/uaccess.h>

static u16 *buf_a;
static u16 *buf_b;
static u16 *buf_c;

static dma_addr_t phys_a;
static dma_addr_t phys_b;
static dma_addr_t phys_c;

static void __iomem *sa_mmio_reg;
static DECLARE_COMPLETION(compute_done);

static int copy_matrices_from_user(const u32 *user_ptrs)
{
	if (copy_from_user(buf_a, (void __user *)(unsigned long)user_ptrs[0], PAGE_SIZE))
		return -EFAULT;
	if (copy_from_user(buf_b, (void __user *)(unsigned long)user_ptrs[1], PAGE_SIZE))
		return -EFAULT;
	return 0;
}

static int copy_result_to_user(const u32 *user_ptrs)
{
	if (copy_to_user((void __user *)(unsigned long)user_ptrs[2], buf_c, PAGE_SIZE))
		return -EFAULT;
	return 0;
}

static void sa_start_dma_job(void)
{
	/* Interface order is defined by accelerator registers */
	iowrite32(phys_b, sa_mmio_reg + 0x0);
	iowrite32(phys_a, sa_mmio_reg + 0x4);
	iowrite32(phys_c, sa_mmio_reg + 0x8);
}

static ssize_t sa_write(struct file *filp, const char __user *buf, size_t count,
			loff_t *ppos)
{
	u32 addrs[3] = {};
	int rc;

	if (count < sizeof(addrs))
		return -EINVAL;

	if (copy_from_user(addrs, buf, sizeof(addrs)))
		return -EFAULT;

	rc = copy_matrices_from_user(addrs);
	if (rc)
		return rc;

	reinit_completion(&compute_done);
	sa_start_dma_job();

	if (!wait_for_completion_timeout(&compute_done, msecs_to_jiffies(1000)))
		return -ETIMEDOUT;

	rc = copy_result_to_user(addrs);
	if (rc)
		return rc;

	return sizeof(addrs);
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

static irqreturn_t sa_irq_handler(int irq, void *dev_id)
{
	return IRQ_WAKE_THREAD;
}

static irqreturn_t sa_irq_thread(int irq, void *dev_id)
{
	struct device *dev = dev_id;
	dev_info(dev, "IRQ received\n");
	complete(&compute_done);
	return IRQ_HANDLED;
}

static int sa_probe(struct platform_device *pdev)
{
	struct device *dev = &pdev->dev;
	int ret;
	int irq;

	sa_mmio_reg = devm_platform_ioremap_resource(pdev, 0);
	if (IS_ERR(sa_mmio_reg))
		return PTR_ERR(sa_mmio_reg);
	dev_info(dev, "MMIO at %px\n", sa_mmio_reg);

	ret = dma_set_mask_and_coherent(dev, DMA_BIT_MASK(32));
	if (ret)
		dev_err_probe(dev, ret, "Failed to set DMA mask!\n");

	buf_a = dmam_alloc_coherent(dev, PAGE_SIZE, &phys_a, GFP_KERNEL);
	buf_b = dmam_alloc_coherent(dev, PAGE_SIZE, &phys_b, GFP_KERNEL);
	buf_c = dmam_alloc_coherent(dev, PAGE_SIZE, &phys_c, GFP_KERNEL);
	if (!buf_a || !buf_b || !buf_c)
		return -ENOMEM;
	dev_info(dev, "DMA buffers: A=%pad B=%pad C=%pad\n", &phys_a, &phys_b, &phys_c);

	irq = platform_get_irq(pdev, 0);
	if (irq < 0)
		return irq;

	ret = devm_request_threaded_irq(dev, irq, sa_irq_handler, sa_irq_thread,
					IRQF_ONESHOT, "sa-irq", dev);
	if (ret)
		return ret;

	ret = misc_register(&sa_misc);
	if (ret)
		return ret;

	dev_info(dev, "Systolic array registered\n");
	return 0;
}

static const struct of_device_id sa_dt_match[] = {{
		.compatible = "drec-fpga-intro,sa-dev",
	}, {},
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
