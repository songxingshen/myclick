/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/syscall.h */
/*
 * Access to user system call parameters and results
 *
 * Copyright (C) 2008 Red Hat, Inc.  All rights reserved.
 *
 * This copyrighted material is made available to anyone wishing to use,
 * modify, copy, or redistribute it subject to the terms and conditions
 * of the GNU General Public License v.2.
 *
 * See asm-generic/syscall.h for descriptions of what we must do here.
 */

#ifndef _ASM_SYSCALL_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_SYSCALL_H	1

#include <linux/sched.h>
#include <linux/err.h>

static inline long syscall_get_nr(struct task_struct *task,
				  struct pt_regs *regs)
{
	/*
	 * We always sign-extend a -1 value being set here,
	 * so this is always either -1L or a syscall number.
	 */
	return regs->orig_ax;
}

static inline void syscall_rollback(struct task_struct *task,
				    struct pt_regs *regs)
{
	regs->ax = regs->orig_ax;
}

static inline long syscall_get_error(struct task_struct *task,
				     struct pt_regs *regs)
{
	unsigned long error = regs->ax;
#ifdef CONFIG_IA32_EMULATION
	/*
	 * TS_COMPAT is set for 32-bit syscall entries and then
	 * remains set until we return to user mode.
	 */
	if (task_thread_info(task)->status & TS_COMPAT)
		/*
		 * Sign-extend the value so (int)-EFOO becomes (long)-EFOO
		 * and will match correctly in comparisons.
		 */
		error = (long) (int) error;
#endif
	return IS_ERR_VALUE(error) ? error : 0;
}

static inline long syscall_get_return_value(struct task_struct *task,
					    struct pt_regs *regs)
{
	return regs->ax;
}

static inline void syscall_set_return_value(struct task_struct *task,
					    struct pt_regs *regs,
					    int error, long val)
{
	regs->ax = (long) error ?: val;
}

#ifdef CONFIG_X86_32

static inline void syscall_get_arguments(struct task_struct *task,
					 struct pt_regs *regs,
					 unsigned int i, unsigned int n,
					 unsigned long *args)
{
	BUG_ON(i + n > 6);
	memcpy(args, &regs->bx + i, n * sizeof(args[0]));
}

static inline void syscall_set_arguments(struct task_struct *task,
					 struct pt_regs *regs,
					 unsigned int i, unsigned int n,
					 const unsigned long *args)
{
	BUG_ON(i + n > 6);
	memcpy(&regs->bx + i, args, n * sizeof(args[0]));
}

#else	 /* CONFIG_X86_64 */

static inline void syscall_get_arguments(struct task_struct *task,
					 struct pt_regs *regs,
					 unsigned int i, unsigned int n,
					 unsigned long *args)
{
# ifdef CONFIG_IA32_EMULATION
	if (task_thread_info(task)->status & TS_COMPAT)
		switch (i) {
		case 0:
			if (!n--) break;
			*args++ = regs->bx;
		case 1:
			if (!n--) break;
			*args++ = regs->cx;
		case 2:
			if (!n--) break;
			*args++ = regs->dx;
		case 3:
			if (!n--) break;
			*args++ = regs->si;
		case 4:
			if (!n--) break;
			*args++ = regs->di;
		case 5:
			if (!n--) break;
			*args++ = regs->bp;
		case 6:
			if (!n--) break;
		default:
			BUG();
			break;
		}
	else
# endif
		switch (i) {
		case 0:
			if (!n--) break;
			*args++ = regs->di;
		case 1:
			if (!n--) break;
			*args++ = regs->si;
		case 2:
			if (!n--) break;
			*args++ = regs->dx;
		case 3:
			if (!n--) break;
			*args++ = regs->r10;
		case 4:
			if (!n--) break;
			*args++ = regs->r8;
		case 5:
			if (!n--) break;
			*args++ = regs->r9;
		case 6:
			if (!n--) break;
		default:
			BUG();
			break;
		}
}

static inline void syscall_set_arguments(struct task_struct *task,
					 struct pt_regs *regs,
					 unsigned int i, unsigned int n,
					 const unsigned long *args)
{
# ifdef CONFIG_IA32_EMULATION
	if (task_thread_info(task)->status & TS_COMPAT)
		switch (i) {
		case 0:
			if (!n--) break;
			regs->bx = *args++;
		case 1:
			if (!n--) break;
			regs->cx = *args++;
		case 2:
			if (!n--) break;
			regs->dx = *args++;
		case 3:
			if (!n--) break;
			regs->si = *args++;
		case 4:
			if (!n--) break;
			regs->di = *args++;
		case 5:
			if (!n--) break;
			regs->bp = *args++;
		case 6:
			if (!n--) break;
		default:
			BUG();
			break;
		}
	else
# endif
		switch (i) {
		case 0:
			if (!n--) break;
			regs->di = *args++;
		case 1:
			if (!n--) break;
			regs->si = *args++;
		case 2:
			if (!n--) break;
			regs->dx = *args++;
		case 3:
			if (!n--) break;
			regs->r10 = *args++;
		case 4:
			if (!n--) break;
			regs->r8 = *args++;
		case 5:
			if (!n--) break;
			regs->r9 = *args++;
		case 6:
			if (!n--) break;
		default:
			BUG();
			break;
		}
}

#endif	/* CONFIG_X86_32 */

#endif	/* _ASM_SYSCALL_H */
