/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm/bugs.h */
#ifndef _ASM_X86_BUGS_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_X86_BUGS_H

extern void check_bugs(void);
int ppro_with_ram_bug(void);

#endif /* _ASM_X86_BUGS_H */
