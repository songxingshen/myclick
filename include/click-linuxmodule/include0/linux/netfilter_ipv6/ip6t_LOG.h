/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter_ipv6/ip6t_LOG.h */
#ifndef _IP6T_LOG_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _IP6T_LOG_H

/* make sure not to change this without changing netfilter.h:NF_LOG_* (!) */
#define IP6T_LOG_TCPSEQ		0x01	/* Log TCP sequence numbers */
#define IP6T_LOG_TCPOPT		0x02	/* Log TCP options */
#define IP6T_LOG_IPOPT		0x04	/* Log IP options */
#define IP6T_LOG_UID		0x08	/* Log UID owning local socket */
#define IP6T_LOG_NFLOG		0x10	/* Unsupported, don't use */
#define IP6T_LOG_MASK		0x1f

struct ip6t_log_info {
	unsigned char level;
	unsigned char logflags;
	char prefix[30];
};

#endif /*_IPT_LOG_H*/
