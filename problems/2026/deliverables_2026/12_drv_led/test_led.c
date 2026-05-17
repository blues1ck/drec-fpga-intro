#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
	int fd = open("/dev/led", O_WRONLY);
	unsigned char pattern = 1;
	int step;

	if (fd < 0) {
		perror("open /dev/led");
		return 1;
	}

	for (step = 0; step < 8; ++step) {
		if (write(fd, &pattern, 1) != 1) {
			perror("write");
			close(fd);
			return 1;
		}
		usleep(120000);
		pattern = (pattern << 1) | (pattern >> 3);
		pattern &= 0xF;
	}

	puts("led write sequence complete");
	close(fd);
	return 0;
}
