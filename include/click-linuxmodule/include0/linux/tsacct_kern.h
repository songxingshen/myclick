/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:36 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/tsacct_kern.h */
/*
 * tsacct_kern.h - kernel header for system accounting over taskstats interface
 *
 * Copyright (C) Jay Lan	SGI
 */

#ifndef _LINUX_TSACCT_KERN_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_TSACCT_KERN_H

#include <linux/taskstats.h>

#ifdef CONFIG_TASKSTATS
extern void bacct_add_tsk(struct taskstats *stats, struct task_struct *tsk);
#else
static inline void bacct_add_tsk(struct taskstats *stats, struct task_struct *tsk)
{}
#endif /* CONFIG_TASKSTATS */

#ifdef CONFIG_TASK_XACCT
extern void xacct_add_tsk(struct taskstats *stats, struct task_struct *p);
extern void acct_update_integrals(struct task_struct *tsk);
extern void acct_clear_integrals(struct task_struct *tsk);
#else
static inline void xacct_add_tsk(struct taskstats *stats, struct task_struct *p)
{}
static inline void acct_update_integrals(struct task_struct *tsk)
{}
static inline void acct_clear_integrals(struct task_struct *tsk)
{}
#endif /* CONFIG_TASK_XACCT */

#endif


