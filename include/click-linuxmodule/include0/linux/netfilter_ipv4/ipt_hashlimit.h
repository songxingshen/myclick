/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter_ipv4/ipt_hashlimit.h */
#ifndef _IPT_HASHLIMIT_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _IPT_HASHLIMIT_H

#include <linux/netfilter/xt_hashlimit.h>

#define IPT_HASHLIMIT_SCALE	XT_HASHLIMIT_SCALE
#define IPT_HASHLIMIT_HASH_DIP	XT_HASHLIMIT_HASH_DIP
#define IPT_HASHLIMIT_HASH_DPT	XT_HASHLIMIT_HASH_DPT
#define IPT_HASHLIMIT_HASH_SIP	XT_HASHLIMIT_HASH_SIP
#define IPT_HASHLIMIT_HASH_SPT	XT_HASHLIMIT_HASH_SPT

#define ipt_hashlimit_info xt_hashlimit_info

#endif /* _IPT_HASHLIMIT_H */
