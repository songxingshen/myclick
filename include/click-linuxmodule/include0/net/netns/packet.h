/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:39 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/net/netns/packet.h */
/*
 * Packet network namespace
 */
#ifndef __NETNS_PACKET_H__
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __NETNS_PACKET_H__

#include <linux/list.h>
#include <linux/spinlock.h>

struct netns_packet {
	rwlock_t		sklist_lock;
	struct hlist_head	sklist;
};

#endif /* __NETNS_PACKET_H__ */
