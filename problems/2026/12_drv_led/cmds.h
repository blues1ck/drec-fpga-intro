#ifndef LED_DRV_CMDS_H
#define LED_DRV_CMDS_H

#ifdef __KERNEL__
#include <linux/ioctl.h>
#else
#include <sys/ioctl.h>
#endif

#define LEDDRV_IOC_MAGIC 'l'
#define LEDDRV_SET _IOW(LEDDRV_IOC_MAGIC, 0x01, int)
#define LEDDRV_GET _IOR(LEDDRV_IOC_MAGIC, 0x02, int)

#endif
