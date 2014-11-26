/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/tc_ematch/tc_em_nbyte.h */
#ifndef __LINUX_TC_EM_NBYTE_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __LINUX_TC_EM_NBYTE_H

#include <linux/pkt_cls.h>

struct tcf_em_nbyte
{
	__u16		off;
	__u16		len:12;
	__u8		layer:4;
};

#endif
