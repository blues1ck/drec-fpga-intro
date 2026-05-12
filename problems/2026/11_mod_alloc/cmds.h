#ifndef CMDS_H
#define CMDS_H

#ifdef __KERNEL__
#include <linux/ioctl.h>
#else
#include <sys/ioctl.h>
#endif

#define ALLOCATE_CONTINUOUS _IOW('M', 1, unsigned)
#define ALLOCATE_ANY _IOW('M', 2, unsigned)

#define FREE_CONTINUOUS _IO('M', 3)
#define FREE_ANY _IO('M', 4)

#endif
