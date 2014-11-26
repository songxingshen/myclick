/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/msgbuf.h */
#ifndef _ASM_X86_MSGBUF_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_X86_MSGBUF_H

/*
 * The msqid64_ds structure for i386 architecture.
 * Note extra padding because this structure is passed back and forth
 * between kernel and user space.
 *
 * Pad space on i386 is left for:
 * - 64-bit time_t to solve y2038 problem
 * - 2 miscellaneous 32-bit values
 *
 * Pad space on x8664 is left for:
 * - 2 miscellaneous 64-bit values
 */
struct msqid64_ds {
	struct ipc64_perm msg_perm;
	__kernel_time_t msg_stime;	/* last msgsnd time */
#ifdef __i386__
	unsigned long	__unused1;
#endif
	__kernel_time_t msg_rtime;	/* last msgrcv time */
#ifdef __i386__
	unsigned long	__unused2;
#endif
	__kernel_time_t msg_ctime;	/* last change time */
#ifdef __i386__
	unsigned long	__unused3;
#endif
	unsigned long  msg_cbytes;	/* current number of bytes on queue */
	unsigned long  msg_qnum;	/* number of messages in queue */
	unsigned long  msg_qbytes;	/* max number of bytes on queue */
	__kernel_pid_t msg_lspid;	/* pid of last msgsnd */
	__kernel_pid_t msg_lrpid;	/* last receive pid */
	unsigned long  __unused4;
	unsigned long  __unused5;
};

#endif /* _ASM_X86_MSGBUF_H */
