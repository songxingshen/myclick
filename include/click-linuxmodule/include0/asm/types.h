/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm/types.h */
#ifndef _ASM_X86_TYPES_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_X86_TYPES_H

#include <asm-generic/int-ll64.h>

#ifndef __ASSEMBLY__

typedef unsigned short umode_t;

#endif /* __ASSEMBLY__ */

/*
 * These aren't exported outside the kernel to avoid name space clashes
 */
#ifdef __KERNEL__

#ifdef CONFIG_X86_32
# define BITS_PER_LONG 32
#else
# define BITS_PER_LONG 64
#endif

#ifndef __ASSEMBLY__

typedef u64 dma64_addr_t;
#if defined(CONFIG_X86_64) || defined(CONFIG_HIGHMEM64G)
/* DMA addresses come in 32-bit and 64-bit flavours. */
typedef u64 dma_addr_t;
#else
typedef u32 dma_addr_t;
#endif

#endif /* __ASSEMBLY__ */
#endif /* __KERNEL__ */

#endif
