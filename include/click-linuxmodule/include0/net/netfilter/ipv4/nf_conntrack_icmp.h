/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/net/netfilter/ipv4/nf_conntrack_icmp.h */
#ifndef _NF_CONNTRACK_ICMP_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _NF_CONNTRACK_ICMP_H
/* ICMP tracking. */
#include <asm/atomic.h>

struct ip_ct_icmp
{
	/* Optimization: when number in == number out, forget immediately. */
	atomic_t count;
};
#endif /* _NF_CONNTRACK_ICMP_H */
