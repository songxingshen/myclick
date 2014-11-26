/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/tc_ematch/tc_em_cmp.h */
#ifndef __LINUX_TC_EM_CMP_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __LINUX_TC_EM_CMP_H

#include <linux/pkt_cls.h>

struct tcf_em_cmp
{
	__u32		val;
	__u32		mask;
	__u16		off;
	__u8		align:4;
	__u8		flags:4;
	__u8		layer:4;
	__u8		opnd:4;
};

enum
{
	TCF_EM_ALIGN_U8  = 1,
	TCF_EM_ALIGN_U16 = 2,
	TCF_EM_ALIGN_U32 = 4
};

#define TCF_EM_CMP_TRANS	1

#endif
