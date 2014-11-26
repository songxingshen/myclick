/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter_bridge/ebt_pkttype.h */
#ifndef __LINUX_BRIDGE_EBT_PKTTYPE_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __LINUX_BRIDGE_EBT_PKTTYPE_H

struct ebt_pkttype_info
{
	uint8_t pkt_type;
	uint8_t invert;
};
#define EBT_PKTTYPE_MATCH "pkttype"

#endif
