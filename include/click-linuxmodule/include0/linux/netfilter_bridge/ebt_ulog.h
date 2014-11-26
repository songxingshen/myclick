/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter_bridge/ebt_ulog.h */
#ifndef _EBT_ULOG_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _EBT_ULOG_H

#define EBT_ULOG_DEFAULT_NLGROUP 0
#define EBT_ULOG_DEFAULT_QTHRESHOLD 1
#define EBT_ULOG_MAXNLGROUPS 32 /* hardcoded netlink max */
#define EBT_ULOG_PREFIX_LEN 32
#define EBT_ULOG_MAX_QLEN 50
#define EBT_ULOG_WATCHER "ulog"
#define EBT_ULOG_VERSION 1

struct ebt_ulog_info {
	uint32_t nlgroup;
	unsigned int cprange;
	unsigned int qthreshold;
	char prefix[EBT_ULOG_PREFIX_LEN];
};

typedef struct ebt_ulog_packet_msg {
	int version;
	char indev[IFNAMSIZ];
	char outdev[IFNAMSIZ];
	char physindev[IFNAMSIZ];
	char physoutdev[IFNAMSIZ];
	char prefix[EBT_ULOG_PREFIX_LEN];
	struct timeval stamp;
	unsigned long mark;
	unsigned int hook;
	size_t data_len;
	/* The complete packet, including Ethernet header and perhaps
	 * the VLAN header is appended */
	unsigned char data[0] __attribute__
	                      ((aligned (__alignof__(struct ebt_ulog_info))));
} ebt_ulog_packet_msg_t;

#endif /* _EBT_ULOG_H */
