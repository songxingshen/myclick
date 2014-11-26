/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/current.h */
#ifndef _X86_CURRENT_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _X86_CURRENT_H

#ifdef CONFIG_X86_32
#include <linux/compiler.h>
#include <asm/percpu.h>

struct task_struct;

DECLARE_PER_CPU(struct task_struct *, current_task);
static __always_inline struct task_struct *get_current(void)
{
	return x86_read_percpu(current_task);
}

#else /* X86_32 */

#ifndef __ASSEMBLY__
#include <asm/pda.h>

struct task_struct;

static __always_inline struct task_struct *get_current(void)
{
	return read_pda(pcurrent);
}

#else /* __ASSEMBLY__ */

#include <asm/asm-offsets.h>
#define GET_CURRENT(reg) movq %gs:(pda_pcurrent),reg

#endif /* __ASSEMBLY__ */

#endif /* X86_32 */

#define current get_current()

#endif /* X86_CURRENT_H */
