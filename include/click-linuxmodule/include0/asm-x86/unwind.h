/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/unwind.h */
#ifndef _ASM_X86_UNWIND_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_X86_UNWIND_H

#define UNW_PC(frame) ((void)(frame), 0UL)
#define UNW_SP(frame) ((void)(frame), 0UL)
#define UNW_FP(frame) ((void)(frame), 0UL)

static inline int arch_unw_user_mode(const void *info)
{
	return 0;
}

#endif /* _ASM_X86_UNWIND_H */
