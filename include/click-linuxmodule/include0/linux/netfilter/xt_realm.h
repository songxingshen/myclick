/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter/xt_realm.h */
#ifndef _XT_REALM_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _XT_REALM_H

struct xt_realm_info {
	u_int32_t id;
	u_int32_t mask;
	u_int8_t invert;
};

#endif /* _XT_REALM_H */
