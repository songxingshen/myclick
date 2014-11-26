/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter/xt_mark.h */
#ifndef _XT_MARK_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _XT_MARK_H

struct xt_mark_info {
    unsigned long mark, mask;
    u_int8_t invert;
};

struct xt_mark_mtinfo1 {
	u_int32_t mark, mask;
	u_int8_t invert;
};

#endif /*_XT_MARK_H*/
