/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter/xt_RATEEST.h */
#ifndef _XT_RATEEST_TARGET_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _XT_RATEEST_TARGET_H

struct xt_rateest_target_info {
	char			name[IFNAMSIZ];
	int8_t			interval;
	u_int8_t		ewma_log;

	/* Used internally by the kernel */
	struct xt_rateest	*est __attribute__((aligned(8)));
};

#endif /* _XT_RATEEST_TARGET_H */
