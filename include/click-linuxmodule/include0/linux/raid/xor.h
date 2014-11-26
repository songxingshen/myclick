/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/raid/xor.h */
#ifndef _XOR_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _XOR_H

#include <linux/raid/md.h>

#define MAX_XOR_BLOCKS 4

extern void xor_blocks(unsigned int count, unsigned int bytes,
	void *dest, void **srcs);

struct xor_block_template {
        struct xor_block_template *next;
        const char *name;
        int speed;
	void (*do_2)(unsigned long, unsigned long *, unsigned long *);
	void (*do_3)(unsigned long, unsigned long *, unsigned long *,
		     unsigned long *);
	void (*do_4)(unsigned long, unsigned long *, unsigned long *,
		     unsigned long *, unsigned long *);
	void (*do_5)(unsigned long, unsigned long *, unsigned long *,
		     unsigned long *, unsigned long *, unsigned long *);
};

#endif
