/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/netfilter_ipv4/ipt_owner.h */
#ifndef _IPT_OWNER_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _IPT_OWNER_H

/* match and invert flags */
#define IPT_OWNER_UID	0x01
#define IPT_OWNER_GID	0x02
#define IPT_OWNER_PID	0x04
#define IPT_OWNER_SID	0x08
#define IPT_OWNER_COMM	0x10

struct ipt_owner_info {
    uid_t uid;
    gid_t gid;
    pid_t pid;
    pid_t sid;
    char comm[16];
    u_int8_t match, invert;	/* flags */
};

#endif /*_IPT_OWNER_H*/
