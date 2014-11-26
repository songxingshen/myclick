/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:36 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/dmar.h */
/*
 * Copyright (c) 2006, Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place - Suite 330, Boston, MA 02111-1307 USA.
 *
 * Copyright (C) Ashok Raj <ashok.raj@intel.com>
 * Copyright (C) Shaohua Li <shaohua.li@intel.com>
 */

#ifndef __DMAR_H__
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __DMAR_H__

#include <linux/acpi.h>
#include <linux/types.h>
#include <linux/msi.h>

#ifdef CONFIG_DMAR
struct intel_iommu;

extern const char *dmar_get_fault_reason(u8 fault_reason);

/* Can't use the common MSI interrupt functions
 * since DMAR is not a pci device
 */
extern void dmar_msi_unmask(unsigned int irq);
extern void dmar_msi_mask(unsigned int irq);
extern void dmar_msi_read(int irq, struct msi_msg *msg);
extern void dmar_msi_write(int irq, struct msi_msg *msg);
extern int dmar_set_interrupt(struct intel_iommu *iommu);
extern int arch_setup_dmar_msi(unsigned int irq);

/* Intel IOMMU detection and initialization functions */
extern void detect_intel_iommu(void);
extern int intel_iommu_init(void);

extern int dmar_table_init(void);
extern int early_dmar_detect(void);

extern struct list_head dmar_drhd_units;
extern struct list_head dmar_rmrr_units;

struct dmar_drhd_unit {
	struct list_head list;		/* list of drhd units	*/
	u64	reg_base_addr;		/* register base address*/
	struct	pci_dev **devices; 	/* target device array	*/
	int	devices_cnt;		/* target device count	*/
	u8	ignored:1; 		/* ignore drhd		*/
	u8	include_all:1;
	struct intel_iommu *iommu;
};

struct dmar_rmrr_unit {
	struct list_head list;		/* list of rmrr units	*/
	u64	base_address;		/* reserved base address*/
	u64	end_address;		/* reserved end address */
	struct pci_dev **devices;	/* target devices */
	int	devices_cnt;		/* target device count */
};

#define for_each_drhd_unit(drhd) \
	list_for_each_entry(drhd, &dmar_drhd_units, list)
#define for_each_rmrr_units(rmrr) \
	list_for_each_entry(rmrr, &dmar_rmrr_units, list)
#else
static inline void detect_intel_iommu(void)
{
	return;
}
static inline int intel_iommu_init(void)
{
	return -ENODEV;
}

#endif /* !CONFIG_DMAR */
#endif /* __DMAR_H__ */
