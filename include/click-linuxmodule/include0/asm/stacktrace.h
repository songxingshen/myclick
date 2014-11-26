/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm/stacktrace.h */
#ifndef _ASM_STACKTRACE_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_STACKTRACE_H 1

extern int kstack_depth_to_print;

/* Generic stack tracer with callbacks */

struct stacktrace_ops {
	void (*warning)(void *data, char *msg);
	/* msg must contain %s for the symbol */
	void (*warning_symbol)(void *data, char *msg, unsigned long symbol);
	void (*address)(void *data, unsigned long address, int reliable);
	/* On negative return stop dumping */
	int (*stack)(void *data, char *name);
};

void dump_trace(struct task_struct *tsk, struct pt_regs *regs,
		unsigned long *stack, unsigned long bp,
		const struct stacktrace_ops *ops, void *data);

#endif
