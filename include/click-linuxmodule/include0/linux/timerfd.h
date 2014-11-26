/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:36 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/timerfd.h */
/*
 *  include/linux/timerfd.h
 *
 *  Copyright (C) 2007  Davide Libenzi <davidel@xmailserver.org>
 *
 */

#ifndef _LINUX_TIMERFD_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_TIMERFD_H

/* For O_CLOEXEC and O_NONBLOCK */
#include <linux/fcntl.h>

/* Flags for timerfd_settime.  */
#define TFD_TIMER_ABSTIME (1 << 0)

/* Flags for timerfd_create.  */
#define TFD_CLOEXEC O_CLOEXEC
#define TFD_NONBLOCK O_NONBLOCK


#endif /* _LINUX_TIMERFD_H */

