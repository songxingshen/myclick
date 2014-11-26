/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:33 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/net/rawv6.h */
#ifndef _NET_RAWV6_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _NET_RAWV6_H

#ifdef __KERNEL__

#include <net/protocol.h>

void raw6_icmp_error(struct sk_buff *, int nexthdr,
		int type, int code, int inner_offset, __be32);
int raw6_local_deliver(struct sk_buff *, int);

extern int			rawv6_rcv(struct sock *sk,
					  struct sk_buff *skb);

#if defined(CONFIG_IPV6_MIP6) || defined(CONFIG_IPV6_MIP6_MODULE)
int rawv6_mh_filter_register(int (*filter)(struct sock *sock,
					   struct sk_buff *skb));
int rawv6_mh_filter_unregister(int (*filter)(struct sock *sock,
					     struct sk_buff *skb));
#endif

#endif

#endif
