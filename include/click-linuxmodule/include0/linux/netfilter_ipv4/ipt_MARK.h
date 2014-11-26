/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter_ipv4/ipt_MARK.h */
#ifndef _IPT_MARK_H_target
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _IPT_MARK_H_target

/* Backwards compatibility for old userspace */

#include <linux/netfilter/xt_MARK.h>

/* Version 0 */
#define ipt_mark_target_info xt_mark_target_info

/* Version 1 */
#define IPT_MARK_SET	XT_MARK_SET
#define IPT_MARK_AND	XT_MARK_AND
#define	IPT_MARK_OR	XT_MARK_OR

#define ipt_mark_target_info_v1 xt_mark_target_info_v1

#endif /*_IPT_MARK_H_target*/
