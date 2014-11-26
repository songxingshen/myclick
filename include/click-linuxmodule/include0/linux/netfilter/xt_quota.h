/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter/xt_quota.h */
#ifndef _XT_QUOTA_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _XT_QUOTA_H

enum xt_quota_flags {
	XT_QUOTA_INVERT		= 0x1,
};
#define XT_QUOTA_MASK		0x1

struct xt_quota_info {
	u_int32_t		flags;
	u_int32_t		pad;

	/* Used internally by the kernel */
	aligned_u64		quota;
	struct xt_quota_info	*master;
};

#endif /* _XT_QUOTA_H */
