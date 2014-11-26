/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:36 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/getcpu.h */
#ifndef _LINUX_GETCPU_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_GETCPU_H 1

/* Cache for getcpu() to speed it up. Results might be a short time
   out of date, but will be faster.

   User programs should not refer to the contents of this structure.
   I repeat they should not refer to it. If they do they will break
   in future kernels.

   It is only a private cache for vgetcpu(). It will change in future kernels.
   The user program must store this information per thread (__thread)
   If you want 100% accurate information pass NULL instead. */
struct getcpu_cache {
	unsigned long blob[128 / (BITS_PER_LONG/8 /*=BITS_PER_BYTE*/)];
};

#endif
