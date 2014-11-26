/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:34 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-generic/poll.h */
#ifndef __ASM_GENERIC_POLL_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __ASM_GENERIC_POLL_H

/* These are specified by iBCS2 */
#define POLLIN		0x0001
#define POLLPRI		0x0002
#define POLLOUT		0x0004
#define POLLERR		0x0008
#define POLLHUP		0x0010
#define POLLNVAL	0x0020

/* The rest seem to be more-or-less nonstandard. Check them! */
#define POLLRDNORM	0x0040
#define POLLRDBAND	0x0080
#ifndef POLLWRNORM
#define POLLWRNORM	0x0100
#endif
#ifndef POLLWRBAND
#define POLLWRBAND	0x0200
#endif
#ifndef POLLMSG
#define POLLMSG		0x0400
#endif
#ifndef POLLREMOVE
#define POLLREMOVE	0x1000
#endif
#ifndef POLLRDHUP
#define POLLRDHUP       0x2000
#endif

struct pollfd {
	int fd;
	short events;
	short revents;
};

#endif	/* __ASM_GENERIC_POLL_H */
