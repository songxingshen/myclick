/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/swiotlb.h */
#ifndef _ASM_SWIOTLB_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_SWIOTLB_H 1

#include <asm/dma-mapping.h>

/* SWIOTLB interface */

extern dma_addr_t swiotlb_map_single(struct device *hwdev, void *ptr,
				     size_t size, int dir);
extern void *swiotlb_alloc_coherent(struct device *hwdev, size_t size,
				    dma_addr_t *dma_handle, gfp_t flags);
extern void swiotlb_unmap_single(struct device *hwdev, dma_addr_t dev_addr,
				 size_t size, int dir);
extern void swiotlb_sync_single_for_cpu(struct device *hwdev,
					dma_addr_t dev_addr,
					size_t size, int dir);
extern void swiotlb_sync_single_for_device(struct device *hwdev,
					   dma_addr_t dev_addr,
					   size_t size, int dir);
extern void swiotlb_sync_single_range_for_cpu(struct device *hwdev,
					      dma_addr_t dev_addr,
					      unsigned long offset,
					      size_t size, int dir);
extern void swiotlb_sync_single_range_for_device(struct device *hwdev,
						 dma_addr_t dev_addr,
						 unsigned long offset,
						 size_t size, int dir);
extern void swiotlb_sync_sg_for_cpu(struct device *hwdev,
				    struct scatterlist *sg, int nelems,
				    int dir);
extern void swiotlb_sync_sg_for_device(struct device *hwdev,
				       struct scatterlist *sg, int nelems,
				       int dir);
extern int swiotlb_map_sg(struct device *hwdev, struct scatterlist *sg,
			  int nents, int direction);
extern void swiotlb_unmap_sg(struct device *hwdev, struct scatterlist *sg,
			     int nents, int direction);
extern int swiotlb_dma_mapping_error(struct device *hwdev, dma_addr_t dma_addr);
extern void swiotlb_free_coherent(struct device *hwdev, size_t size,
				  void *vaddr, dma_addr_t dma_handle);
extern int swiotlb_dma_supported(struct device *hwdev, u64 mask);
extern void swiotlb_init(void);

extern int swiotlb_force;

#ifdef CONFIG_SWIOTLB
extern int swiotlb;
extern void pci_swiotlb_init(void);
#else
#define swiotlb 0
static inline void pci_swiotlb_init(void)
{
}
#endif

static inline void dma_mark_clean(void *addr, size_t size) {}

#endif /* _ASM_SWIOTLB_H */
