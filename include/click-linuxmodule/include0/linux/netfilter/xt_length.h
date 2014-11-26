/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter/xt_length.h */
#ifndef _XT_LENGTH_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _XT_LENGTH_H

struct xt_length_info {
    u_int16_t	min, max;
    u_int8_t	invert;
};

#endif /*_XT_LENGTH_H*/
