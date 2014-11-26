/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:34 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-generic/cmpxchg-local.h */
#ifndef __ASM_GENERIC_CMPXCHG_LOCAL_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __ASM_GENERIC_CMPXCHG_LOCAL_H

#include <linux/types.h>

extern unsigned long wrong_size_cmpxchg(volatile void *ptr);

/*
 * Generic version of __cmpxchg_local (disables interrupts). Takes an unsigned
 * long parameter, supporting various types of architectures.
 */
static inline unsigned long __cmpxchg_local_generic(volatile void *ptr,
		unsigned long old, unsigned long new_value, int size)
{
	unsigned long flags, prev;

	/*
	 * Sanity checking, compile-time.
	 */
	if (size == 8 && (BITS_PER_LONG/8 /*=BITS_PER_BYTE*/) != 8)
		wrong_size_cmpxchg(ptr);

	local_irq_save(flags);
	switch (size) {
	case 1: prev = *(u8 *)ptr;
		if (prev == old)
			*(u8 *)ptr = (u8)new_value;
		break;
	case 2: prev = *(u16 *)ptr;
		if (prev == old)
			*(u16 *)ptr = (u16)new_value;
		break;
	case 4: prev = *(u32 *)ptr;
		if (prev == old)
			*(u32 *)ptr = (u32)new_value;
		break;
	case 8: prev = *(u64 *)ptr;
		if (prev == old)
			*(u64 *)ptr = (u64)new_value;
		break;
	default:
		wrong_size_cmpxchg(ptr);
	}
	local_irq_restore(flags);
	return prev;
}

/*
 * Generic version of __cmpxchg64_local. Takes an u64 parameter.
 */
static inline u64 __cmpxchg64_local_generic(volatile void *ptr,
		u64 old, u64 new_value)
{
	u64 prev;
	unsigned long flags;

	local_irq_save(flags);
	prev = *(u64 *)ptr;
	if (prev == old)
		*(u64 *)ptr = new_value;
	local_irq_restore(flags);
	return prev;
}

#endif
