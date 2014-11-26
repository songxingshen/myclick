/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter/xt_comment.h */
#ifndef _XT_COMMENT_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _XT_COMMENT_H

#define XT_MAX_COMMENT_LEN 256

struct xt_comment_info {
	unsigned char comment[XT_MAX_COMMENT_LEN];
};

#endif /* XT_COMMENT_H */
