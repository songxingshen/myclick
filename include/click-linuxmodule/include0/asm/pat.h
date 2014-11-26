/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm/pat.h */
#ifndef _ASM_PAT_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_PAT_H

#include <linux/types.h>

#ifdef CONFIG_X86_PAT
extern int pat_enabled;
extern void validate_pat_support(struct cpuinfo_x86 *c);
#else
static const int pat_enabled;
static inline void validate_pat_support(struct cpuinfo_x86 *c) { }
#endif

extern void pat_init(void);

extern int reserve_memtype(u64 start, u64 end,
		unsigned long req_type, unsigned long *ret_type);
extern int free_memtype(u64 start, u64 end);

extern void pat_disable(char *reason);

#endif
