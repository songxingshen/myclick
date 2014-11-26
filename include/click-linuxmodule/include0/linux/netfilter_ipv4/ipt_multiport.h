/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter_ipv4/ipt_multiport.h */
#ifndef _IPT_MULTIPORT_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _IPT_MULTIPORT_H

#include <linux/netfilter/xt_multiport.h>

#define IPT_MULTIPORT_SOURCE		XT_MULTIPORT_SOURCE
#define IPT_MULTIPORT_DESTINATION	XT_MULTIPORT_DESTINATION
#define IPT_MULTIPORT_EITHER		XT_MULTIPORT_EITHER

#define IPT_MULTI_PORTS			XT_MULTI_PORTS

#define ipt_multiport			xt_multiport
#define ipt_multiport_v1		xt_multiport_v1

#endif /*_IPT_MULTIPORT_H*/
