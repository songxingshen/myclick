/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter_ipv6/ip6t_physdev.h */
#ifndef _IP6T_PHYSDEV_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _IP6T_PHYSDEV_H

/* Backwards compatibility for old userspace */

#include <linux/netfilter/xt_physdev.h>

#define IP6T_PHYSDEV_OP_IN		XT_PHYSDEV_OP_IN
#define IP6T_PHYSDEV_OP_OUT		XT_PHYSDEV_OP_OUT
#define IP6T_PHYSDEV_OP_BRIDGED		XT_PHYSDEV_OP_BRIDGED
#define IP6T_PHYSDEV_OP_ISIN		XT_PHYSDEV_OP_ISIN
#define IP6T_PHYSDEV_OP_ISOUT		XT_PHYSDEV_OP_ISOUT
#define IP6T_PHYSDEV_OP_MASK		XT_PHYSDEV_OP_MASK

#define ip6t_physdev_info xt_physdev_info

#endif /*_IP6T_PHYSDEV_H*/
