/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter/xt_statistic.h */
#ifndef _XT_STATISTIC_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _XT_STATISTIC_H

enum xt_statistic_mode {
	XT_STATISTIC_MODE_RANDOM,
	XT_STATISTIC_MODE_NTH,
	__XT_STATISTIC_MODE_MAX
};
#define XT_STATISTIC_MODE_MAX (__XT_STATISTIC_MODE_MAX - 1)

enum xt_statistic_flags {
	XT_STATISTIC_INVERT		= 0x1,
};
#define XT_STATISTIC_MASK		0x1

struct xt_statistic_info {
	u_int16_t			mode;
	u_int16_t			flags;
	union {
		struct {
			u_int32_t	probability;
		} random;
		struct {
			u_int32_t	every;
			u_int32_t	packet;
			/* Used internally by the kernel */
			u_int32_t	count;
		} nth;
	} u;
	struct xt_statistic_info	*master __attribute__((aligned(8)));
};

#endif /* _XT_STATISTIC_H */
