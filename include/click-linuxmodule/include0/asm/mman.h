/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm/mman.h */
#ifndef _ASM_X86_MMAN_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_X86_MMAN_H

#include <asm-generic/mman.h>

#define MAP_32BIT	0x40		/* only give out 32bit addresses */

#define MAP_GROWSDOWN	0x0100		/* stack-like segment */
#define MAP_DENYWRITE	0x0800		/* ETXTBSY */
#define MAP_EXECUTABLE	0x1000		/* mark it as an executable */
#define MAP_LOCKED	0x2000		/* pages are locked */
#define MAP_NORESERVE	0x4000		/* don't check for reservations */
#define MAP_POPULATE	0x8000		/* populate (prefault) pagetables */
#define MAP_NONBLOCK	0x10000		/* do not block on IO */
#define MAP_STACK	0x20000		/* give out an address that is best suited for process/thread stacks */

#define MCL_CURRENT	1		/* lock all current mappings */
#define MCL_FUTURE	2		/* lock all future mappings */

#endif /* _ASM_X86_MMAN_H */
