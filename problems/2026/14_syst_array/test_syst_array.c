#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include "cmds.h"

static void init_matrix(uint16_t *m)
{
	int i;
	for (i = 0; i < SA_ELEMS; ++i)
		m[i] = (uint16_t)i;
}

static void dump_matrix(const uint16_t *m, const char *name)
{
	int r, c;
	printf("%s:\n", name);
	for (r = 0; r < SA_N; ++r) {
		for (c = 0; c < SA_N; ++c)
			printf("%5u ", m[r * SA_N + c]);
		printf("\n");
	}
}

int main(void)
{
	int fd;
	ssize_t wr;
	uint16_t *a;
	uint16_t *b;
	uint16_t *c;
	struct sa_user_ptrs ptrs;

	a = calloc(SA_ELEMS, sizeof(*a));
	b = calloc(SA_ELEMS, sizeof(*b));
	c = calloc(SA_ELEMS, sizeof(*c));
	if (!a || !b || !c) {
		perror("calloc");
		return 1;
	}

	init_matrix(a);
	init_matrix(b);

	ptrs.a_ptr = (unsigned int)(uintptr_t)a;
	ptrs.b_ptr = (unsigned int)(uintptr_t)b;
	ptrs.c_ptr = (unsigned int)(uintptr_t)c;

	fd = open("/dev/sa-dev", O_WRONLY);
	if (fd < 0) {
		perror("open /dev/sa-dev");
		return 1;
	}

	wr = write(fd, &ptrs, sizeof(ptrs));
	if (wr != (ssize_t)sizeof(ptrs)) {
		perror("write");
		close(fd);
		return 1;
	}

	dump_matrix(a, "A");
	dump_matrix(b, "B");
	dump_matrix(c, "C");

	close(fd);
	free(a);
	free(b);
	free(c);
	return 0;
}
