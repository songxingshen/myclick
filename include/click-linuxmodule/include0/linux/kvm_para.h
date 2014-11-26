/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:36 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/kvm_para.h */
#ifndef __LINUX_KVM_PARA_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __LINUX_KVM_PARA_H

/*
 * This header file provides a method for making a hypercall to the host
 * Architectures should define:
 * - kvm_hypercall0, kvm_hypercall1...
 * - kvm_arch_para_features
 * - kvm_para_available
 */

/* Return values for hypercalls */
#define KVM_ENOSYS		1000
#define KVM_EFAULT		EFAULT
#define KVM_E2BIG		E2BIG

#define KVM_HC_VAPIC_POLL_IRQ		1
#define KVM_HC_MMU_OP			2

/*
 * hypercalls use architecture specific
 */
#include <asm/kvm_para.h>

#ifdef __KERNEL__
#ifdef CONFIG_KVM_GUEST
void __init kvm_guest_init(void);
#else
#define kvm_guest_init() do { } while (0)
#endif

static inline int kvm_para_has_feature(unsigned int feature)
{
	if (kvm_arch_para_features() & (1UL << feature))
		return 1;
	return 0;
}
#endif /* __KERNEL__ */
#endif /* __LINUX_KVM_PARA_H */

