/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter_bridge/ebt_arp.h */
#ifndef __LINUX_BRIDGE_EBT_ARP_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __LINUX_BRIDGE_EBT_ARP_H

#define EBT_ARP_OPCODE 0x01
#define EBT_ARP_HTYPE 0x02
#define EBT_ARP_PTYPE 0x04
#define EBT_ARP_SRC_IP 0x08
#define EBT_ARP_DST_IP 0x10
#define EBT_ARP_SRC_MAC 0x20
#define EBT_ARP_DST_MAC 0x40
#define EBT_ARP_GRAT 0x80
#define EBT_ARP_MASK (EBT_ARP_OPCODE | EBT_ARP_HTYPE | EBT_ARP_PTYPE | \
   EBT_ARP_SRC_IP | EBT_ARP_DST_IP | EBT_ARP_SRC_MAC | EBT_ARP_DST_MAC | \
   EBT_ARP_GRAT)
#define EBT_ARP_MATCH "arp"

struct ebt_arp_info
{
	__be16 htype;
	__be16 ptype;
	__be16 opcode;
	__be32 saddr;
	__be32 smsk;
	__be32 daddr;
	__be32 dmsk;
	unsigned char smaddr[ETH_ALEN];
	unsigned char smmsk[ETH_ALEN];
	unsigned char dmaddr[ETH_ALEN];
	unsigned char dmmsk[ETH_ALEN];
	uint8_t  bitmask;
	uint8_t  invflags;
};

#endif
