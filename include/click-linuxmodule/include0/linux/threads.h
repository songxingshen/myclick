/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:39 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/threads.h */
#ifndef _LINUX_THREADS_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_THREADS_H


/*
 * The default limit for the nr of threads is now in
 * /proc/sys/kernel/threads-max.
 */

/*
 * Maximum supported processors that can run under SMP.  This value is
 * set via configure setting.  The maximum is equal to the size of the
 * bitmasks used on that platform, i.e. 32 or 64.  Setting this smaller
 * saves quite a bit of memory.
 */
#ifdef CONFIG_SMP
#define NR_CPUS		CONFIG_NR_CPUS
#else
#define NR_CPUS		1
#endif

#define MIN_THREADS_LEFT_FOR_ROOT 4

/*
 * This controls the default maximum pid allocated to a process
 */
#define PID_MAX_DEFAULT (CONFIG_BASE_SMALL ? 0x1000 : 0x8000)

/*
 * A maximum of 4 million PIDs should be enough for a while.
 * [NOTE: PID/TIDs are limited to 2^29 ~= 500+ million, see futex.h.]
 */
#define PID_MAX_LIMIT (CONFIG_BASE_SMALL ? PAGE_SIZE * 8 : \
	((BITS_PER_LONG/8 /*=BITS_PER_BYTE*/) > 4 ? 4 * 1024 * 1024 : PID_MAX_DEFAULT))

#endif
