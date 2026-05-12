#ifndef SYST_ARRAY_CMDS_H
#define SYST_ARRAY_CMDS_H

#define SA_N 4
#define SA_ELEMS (SA_N * SA_N)

/*
 * Userspace sends three pointers in this order:
 *  0 -> matrix A
 *  1 -> matrix B
 *  2 -> output matrix C
 */
struct sa_user_ptrs {
	unsigned int a_ptr;
	unsigned int b_ptr;
	unsigned int c_ptr;
};

#endif
