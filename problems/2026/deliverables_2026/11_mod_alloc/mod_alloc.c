#include <linux/module.h>
#include <linux/miscdevice.h>
#include <linux/fs.h>
#include <linux/slab.h>
#include <linux/vmalloc.h>
#include "cmds.h"

struct alloc_state {
	void *contig_ptr;
	void *virt_ptr;
	size_t contig_size;
	size_t virt_size;
	struct mutex lock;
};

static struct alloc_state g_alloc = {
	.lock = __MUTEX_INITIALIZER(g_alloc.lock),
};

static int alloc_contig(size_t bytes)
{
	void *new_ptr = kmalloc(bytes, GFP_KERNEL);

	if (!new_ptr) {
		pr_err("allocate: kmalloc(%zu) failed\n", bytes);
		return -ENOMEM;
	}

	g_alloc.contig_ptr = new_ptr;
	g_alloc.contig_size = bytes;
	pr_info("allocate: kmalloc(%zu) ok\n", bytes);
	return 0;
}

static void free_contig(void)
{
	if (g_alloc.contig_ptr) {
		kfree(g_alloc.contig_ptr);
		g_alloc.contig_ptr = NULL;
		g_alloc.contig_size = 0;
	}
}

static int alloc_virtual(size_t bytes)
{
	void *new_ptr = vmalloc(bytes);

	if (!new_ptr) {
		pr_err("allocate: vmalloc(%zu) failed\n", bytes);
		return -ENOMEM;
	}

	g_alloc.virt_ptr = new_ptr;
	g_alloc.virt_size = bytes;
	pr_info("allocate: vmalloc(%zu) ok\n", bytes);
	return 0;
}

static void free_virtual(void)
{
	if (g_alloc.virt_ptr) {
		vfree(g_alloc.virt_ptr);
		g_alloc.virt_ptr = NULL;
		g_alloc.virt_size = 0;
	}
}

static long mod_alloc_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
{
	size_t req_size = (size_t)arg;
	int rc = 0;

	mutex_lock(&g_alloc.lock);
	switch (cmd) {
	case ALLOCATE_CONTINUOUS:
		free_contig();
		rc = alloc_contig(req_size);
		break;
	case ALLOCATE_ANY:
		free_virtual();
		rc = alloc_virtual(req_size);
		break;
	case FREE_CONTINUOUS:
		free_contig();
		break;
	case FREE_ANY:
		free_virtual();
		break;
	default:
		mutex_unlock(&g_alloc.lock);
		return -ENOTTY;
	}
	mutex_unlock(&g_alloc.lock);

	return rc;
}

static const struct file_operations mod_alloc_fops = {
	.owner = THIS_MODULE,
	.unlocked_ioctl = mod_alloc_ioctl,
};

static struct miscdevice mod_alloc_miscdev = {
	.minor = MISC_DYNAMIC_MINOR,
	.name = "allocate",
	.fops = &mod_alloc_fops,
	.mode = 0666,
};

static int __init mod_alloc_init(void)
{
	int ret = misc_register(&mod_alloc_miscdev);
	if (ret) {
		pr_err("allocate: misc_register failed (%d)\n", ret);
		return ret;
	}
	pr_info("allocate: /dev/%s ready\n", mod_alloc_miscdev.name);
	return 0;
}

static void __exit mod_alloc_exit(void)
{
	mutex_lock(&g_alloc.lock);
	free_contig();
	free_virtual();
	mutex_unlock(&g_alloc.lock);

	misc_deregister(&mod_alloc_miscdev);
	pr_info("allocate: module unloaded\n");
}

module_init(mod_alloc_init);
module_exit(mod_alloc_exit);

MODULE_LICENSE("GPL");
