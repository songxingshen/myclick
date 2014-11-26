/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:39 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/mutex-debug.h */
#ifndef __LINUX_MUTEX_DEBUG_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __LINUX_MUTEX_DEBUG_H

#include <linux/linkage.h>
#include <linux/lockdep.h>

/*
 * Mutexes - debugging helpers:
 */

#define __DEBUG_MUTEX_INITIALIZER(lockname)				\
	, magic:  &lockname

#define mutex_init(mutex)						\
do {									\
	static struct lock_class_key __key;				\
									\
	__mutex_init((mutex), #mutex, &__key);				\
} while (0)

extern void mutex_destroy(struct mutex *lock);

#endif
