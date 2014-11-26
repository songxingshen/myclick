/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:36 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/utime.h */
#ifndef _LINUX_UTIME_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_UTIME_H

#include <linux/types.h>

struct utimbuf {
	time_t actime;
	time_t modtime;
};

#endif
