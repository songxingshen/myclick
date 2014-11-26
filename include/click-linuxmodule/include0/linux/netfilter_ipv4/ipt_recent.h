/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter_ipv4/ipt_recent.h */
#ifndef _IPT_RECENT_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _IPT_RECENT_H

#define RECENT_NAME	"ipt_recent"
#define RECENT_VER	"v0.3.1"

#define IPT_RECENT_CHECK  1
#define IPT_RECENT_SET    2
#define IPT_RECENT_UPDATE 4
#define IPT_RECENT_REMOVE 8
#define IPT_RECENT_TTL   16

#define IPT_RECENT_SOURCE 0
#define IPT_RECENT_DEST   1

#define IPT_RECENT_NAME_LEN 200

struct ipt_recent_info {
	u_int32_t   seconds;
	u_int32_t   hit_count;
	u_int8_t    check_set;
	u_int8_t    invert;
	char        name[IPT_RECENT_NAME_LEN];
	u_int8_t    side;
};

#endif /*_IPT_RECENT_H*/
