/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter/xt_owner.h */
#ifndef _XT_OWNER_MATCH_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _XT_OWNER_MATCH_H

enum {
	XT_OWNER_UID    = 1 << 0,
	XT_OWNER_GID    = 1 << 1,
	XT_OWNER_SOCKET = 1 << 2,
};

struct xt_owner_match_info {
	u_int32_t uid_min, uid_max;
	u_int32_t gid_min, gid_max;
	u_int8_t match, invert;
};

#endif /* _XT_OWNER_MATCH_H */
