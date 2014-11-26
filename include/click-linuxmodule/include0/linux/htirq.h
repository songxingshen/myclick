/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/htirq.h */
#ifndef LINUX_HTIRQ_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define LINUX_HTIRQ_H

struct ht_irq_msg {
	u32	address_lo;	/* low 32 bits of the ht irq message */
	u32	address_hi;	/* high 32 bits of the it irq message */
};

/* Helper functions.. */
void fetch_ht_irq_msg(unsigned int irq, struct ht_irq_msg *msg);
void write_ht_irq_msg(unsigned int irq, struct ht_irq_msg *msg);
void mask_ht_irq(unsigned int irq);
void unmask_ht_irq(unsigned int irq);

/* The arch hook for getting things started */
int arch_setup_ht_irq(unsigned int irq, struct pci_dev *dev);

/* For drivers of buggy hardware */
typedef void (ht_irq_update_t)(struct pci_dev *dev, int irq,
			       struct ht_irq_msg *msg);
int __ht_create_irq(struct pci_dev *dev, int idx, ht_irq_update_t *update);

#endif /* LINUX_HTIRQ_H */
