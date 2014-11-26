/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm/tce.h */
/*
 * This file is derived from asm-powerpc/tce.h.
 *
 * Copyright (C) IBM Corporation, 2006
 *
 * Author: Muli Ben-Yehuda <muli@il.ibm.com>
 * Author: Jon Mason <jdmason@us.ibm.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */

#ifndef _ASM_X86_64_TCE_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_X86_64_TCE_H

extern unsigned int specified_table_size;
struct iommu_table;

#define TCE_ENTRY_SIZE   8   /* in bytes */

#define TCE_READ_SHIFT   0
#define TCE_WRITE_SHIFT  1
#define TCE_HUBID_SHIFT  2   /* unused */
#define TCE_RSVD_SHIFT   8   /* unused */
#define TCE_RPN_SHIFT    12
#define TCE_UNUSED_SHIFT 48  /* unused */

#define TCE_RPN_MASK     0x0000fffffffff000ULL

extern void tce_build(struct iommu_table *tbl, unsigned long index,
		      unsigned int npages, unsigned long uaddr, int direction);
extern void tce_free(struct iommu_table *tbl, long index, unsigned int npages);
extern void * __init alloc_tce_table(void);
extern void __init free_tce_table(void *tbl);
extern int __init build_tce_table(struct pci_dev *dev, void __iomem *bbar);

#endif /* _ASM_X86_64_TCE_H */
