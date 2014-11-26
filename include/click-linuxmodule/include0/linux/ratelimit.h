/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:36 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/ratelimit.h */
#ifndef _LINUX_RATELIMIT_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_RATELIMIT_H
#include <linux/param.h>

#define DEFAULT_RATELIMIT_INTERVAL (5 * HZ)
#define DEFAULT_RATELIMIT_BURST 10

struct ratelimit_state {
	int interval;
	int burst;
	int printed;
	int missed;
	unsigned long begin;
};

#define DEFINE_RATELIMIT_STATE(name, interval, burst)		\
		struct ratelimit_state name = {interval, burst,}

extern int __ratelimit(struct ratelimit_state *rs);

static inline int ratelimit(void)
{
	static DEFINE_RATELIMIT_STATE(rs, DEFAULT_RATELIMIT_INTERVAL,
					DEFAULT_RATELIMIT_BURST);
	return __ratelimit(&rs);
}
#endif
