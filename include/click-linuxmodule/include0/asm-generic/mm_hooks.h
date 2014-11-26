/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:34 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-generic/mm_hooks.h */
/*
 * Define generic no-op hooks for arch_dup_mmap and arch_exit_mmap, to
 * be included in asm-FOO/mmu_context.h for any arch FOO which doesn't
 * need to hook these.
 */
#ifndef _ASM_GENERIC_MM_HOOKS_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_GENERIC_MM_HOOKS_H

static inline void arch_dup_mmap(struct mm_struct *oldmm,
				 struct mm_struct *mm)
{
}

static inline void arch_exit_mmap(struct mm_struct *mm)
{
}

#endif	/* _ASM_GENERIC_MM_HOOKS_H */
