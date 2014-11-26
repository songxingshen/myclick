/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter_bridge/ebt_mark_m.h */
#ifndef __LINUX_BRIDGE_EBT_MARK_M_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __LINUX_BRIDGE_EBT_MARK_M_H

#define EBT_MARK_AND 0x01
#define EBT_MARK_OR 0x02
#define EBT_MARK_MASK (EBT_MARK_AND | EBT_MARK_OR)
struct ebt_mark_m_info
{
	unsigned long mark, mask;
	uint8_t invert;
	uint8_t bitmask;
};
#define EBT_MARK_MATCH "mark_m"

#endif
