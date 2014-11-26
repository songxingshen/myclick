/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter/nf_conntrack_amanda.h */
#ifndef _NF_CONNTRACK_AMANDA_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _NF_CONNTRACK_AMANDA_H
/* AMANDA tracking. */

extern unsigned int (*nf_nat_amanda_hook)(struct sk_buff *skb,
					  enum ip_conntrack_info ctinfo,
					  unsigned int matchoff,
					  unsigned int matchlen,
					  struct nf_conntrack_expect *exp);
#endif /* _NF_CONNTRACK_AMANDA_H */
