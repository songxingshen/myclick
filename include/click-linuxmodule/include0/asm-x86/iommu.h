/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/iommu.h */
#ifndef _ASM_X8664_IOMMU_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_X8664_IOMMU_H 1

extern void pci_iommu_shutdown(void);
extern void no_iommu_init(void);
extern struct dma_mapping_ops nommu_dma_ops;
extern int force_iommu, no_iommu;
extern int iommu_detected;

extern unsigned long iommu_num_pages(unsigned long addr, unsigned long len);

#ifdef CONFIG_GART_IOMMU
extern int gart_iommu_aperture;
extern int gart_iommu_aperture_allowed;
extern int gart_iommu_aperture_disabled;

extern void early_gart_iommu_check(void);
extern void gart_iommu_init(void);
extern void gart_iommu_shutdown(void);
extern void __init gart_parse_options(char *);
extern void gart_iommu_hole_init(void);

#else
#define gart_iommu_aperture            0
#define gart_iommu_aperture_allowed    0
#define gart_iommu_aperture_disabled   1

static inline void early_gart_iommu_check(void)
{
}
static inline void gart_iommu_init(void)
{
}
static inline void gart_iommu_shutdown(void)
{
}
static inline void gart_parse_options(char *options)
{
}
static inline void gart_iommu_hole_init(void)
{
}
#endif

#endif
