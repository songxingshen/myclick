/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:38 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/cnt32_to_63.h */
/*
 *  Extend a 32-bit counter to 63 bits
 *
 *  Author:	Nicolas Pitre
 *  Created:	December 3, 2006
 *  Copyright:	MontaVista Software, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation.
 */

#ifndef __LINUX_CNT32_TO_63_H__
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __LINUX_CNT32_TO_63_H__

#include <linux/compiler.h>
#include <linux/types.h>
#include <asm/byteorder.h>

/* this is used only to give gcc a clue about good code generation */
union cnt32_to_63 {
	struct {
#if defined(__LITTLE_ENDIAN)
		u32 lo, hi;
#elif defined(__BIG_ENDIAN)
		u32 hi, lo;
#endif
	};
	u64 val;
};


/**
 * cnt32_to_63 - Expand a 32-bit counter to a 63-bit counter
 * @cnt_lo: The low part of the counter
 *
 * Many hardware clock counters are only 32 bits wide and therefore have
 * a relatively short period making wrap-arounds rather frequent.  This
 * is a problem when implementing sched_clock() for example, where a 64-bit
 * non-wrapping monotonic value is expected to be returned.
 *
 * To overcome that limitation, let's extend a 32-bit counter to 63 bits
 * in a completely lock free fashion. Bits 0 to 31 of the clock are provided
 * by the hardware while bits 32 to 62 are stored in memory.  The top bit in
 * memory is used to synchronize with the hardware clock half-period.  When
 * the top bit of both counters (hardware and in memory) differ then the
 * memory is updated with a new value, incrementing it when the hardware
 * counter wraps around.
 *
 * Because a word store in memory is atomic then the incremented value will
 * always be in synch with the top bit indicating to any potential concurrent
 * reader if the value in memory is up to date or not with regards to the
 * needed increment.  And any race in updating the value in memory is harmless
 * as the same value would simply be stored more than once.
 *
 * The only restriction for the algorithm to work properly is that this
 * code must be executed at least once per each half period of the 32-bit
 * counter to properly update the state bit in memory. This is usually not a
 * problem in practice, but if it is then a kernel timer could be scheduled
 * to manage for this code to be executed often enough.
 *
 * Note that the top bit (bit 63) in the returned value should be considered
 * as garbage.  It is not cleared here because callers are likely to use a
 * multiplier on the returned value which can get rid of the top bit
 * implicitly by making the multiplier even, therefore saving on a runtime
 * clear-bit instruction. Otherwise caller must remember to clear the top
 * bit explicitly.
 */
#define cnt32_to_63(cnt_lo) \
({ \
	static volatile u32 __m_cnt_hi; \
	union cnt32_to_63 __x; \
	__x.hi = __m_cnt_hi; \
	__x.lo = (cnt_lo); \
	if (unlikely((s32)(__x.hi ^ __x.lo) < 0)) \
		__m_cnt_hi = __x.hi = (__x.hi ^ 0x80000000) + (__x.hi >> 31); \
	__x.val; \
})

#endif