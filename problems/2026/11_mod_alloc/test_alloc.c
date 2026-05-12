#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include "cmds.h"

static int issue_alloc(int fd, bool contiguous, unsigned long bytes)
{
	int cmd = contiguous ? ALLOCATE_CONTINUOUS : ALLOCATE_ANY;
	return ioctl(fd, cmd, bytes);
}

static unsigned long probe_limit(int fd, bool contiguous)
{
	unsigned long ok = 0;
	unsigned long cur = 1UL << 12; /* start from 4 KiB */

	while (cur && issue_alloc(fd, contiguous, cur) == 0) {
		ok = cur;
		cur <<= 1;
	}

	return ok;
}

int main(void)
{
	int fd = open("/dev/allocate", O_RDWR);
	unsigned long max_kmalloc;
	unsigned long max_vmalloc;

	if (fd < 0) {
		perror("open /dev/allocate");
		return 1;
	}

	max_kmalloc = probe_limit(fd, true);
	ioctl(fd, FREE_CONTINUOUS);

	max_vmalloc = probe_limit(fd, false);
	ioctl(fd, FREE_ANY);

	printf("kmalloc max: %lu bytes (~%lu MiB)\n", max_kmalloc, max_kmalloc >> 20);
	printf("vmalloc max: %lu bytes (~%lu MiB)\n", max_vmalloc, max_vmalloc >> 20);

	close(fd);
	return 0;
}
