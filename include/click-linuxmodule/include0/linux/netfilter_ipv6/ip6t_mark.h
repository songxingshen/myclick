/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter_ipv6/ip6t_mark.h */
#ifndef _IP6T_MARK_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _IP6T_MARK_H

/* Backwards compatibility for old userspace */
#include <linux/netfilter/xt_mark.h>

#define ip6t_mark_info xt_mark_info

#endif /*_IPT_MARK_H*/
