/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter/xt_connlimit.h */
#ifndef _XT_CONNLIMIT_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _XT_CONNLIMIT_H

struct xt_connlimit_data;

struct xt_connlimit_info {
	union {
		union nf_inet_addr mask;
#ifndef __KERNEL__
		union {
			__be32 v4_mask;
			__be32 v6_mask[4];
		};
#endif
	};
	unsigned int limit, inverse;

	/* Used internally by the kernel */
	struct xt_connlimit_data *data __attribute__((aligned(8)));
};

#endif /* _XT_CONNLIMIT_H */
