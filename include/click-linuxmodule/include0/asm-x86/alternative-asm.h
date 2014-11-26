/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/alternative-asm.h */
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#ifdef __ASSEMBLY__

#ifdef CONFIG_X86_32
# define X86_ALIGN .long
#else
# define X86_ALIGN .quad
#endif

#ifdef CONFIG_SMP
	.macro LOCK_PREFIX
1:	lock
	
	.endm
#else
	.macro LOCK_PREFIX
	.endm
#endif

#endif  /*  __ASSEMBLY__  */
