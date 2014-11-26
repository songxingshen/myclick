/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:34 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/vdso.h */
#ifndef _ASM_X86_VDSO_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_X86_VDSO_H	1

#ifdef CONFIG_X86_64
extern const char VDSO64_PRELINK[];

/*
 * Given a pointer to the vDSO image, find the pointer to VDSO64_name
 * as that symbol is defined in the vDSO sources or linker script.
 */
#define VDSO64_SYMBOL(base, name)					\
({									\
	extern const char VDSO64_##name[];				\
	(void *)(VDSO64_##name - VDSO64_PRELINK + (unsigned long)(base)); \
})
#endif

#if defined CONFIG_X86_32 || defined CONFIG_COMPAT
extern const char VDSO32_PRELINK[];

/*
 * Given a pointer to the vDSO image, find the pointer to VDSO32_name
 * as that symbol is defined in the vDSO sources or linker script.
 */
#define VDSO32_SYMBOL(base, name)					\
({									\
	extern const char VDSO32_##name[];				\
	(void *)(VDSO32_##name - VDSO32_PRELINK + (unsigned long)(base)); \
})
#endif

/*
 * These symbols are defined with the addresses in the vsyscall page.
 * See vsyscall-sigreturn.S.
 */
extern void *__user __kernel_sigreturn;
extern void *__user __kernel_rt_sigreturn;

/*
 * These symbols are defined by vdso32.S to mark the bounds
 * of the ELF DSO images included therein.
 */
extern const char vdso32_int80_start, vdso32_int80_end;
extern const char vdso32_syscall_start, vdso32_syscall_end;
extern const char vdso32_sysenter_start, vdso32_sysenter_end;

#endif	/* asm-x86/vdso.h */
