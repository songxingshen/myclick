/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:38 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/iommu-helper.h */
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
extern int iommu_is_span_boundary(unsigned int index, unsigned int nr,
				  unsigned long shift,
				  unsigned long boundary_size);
extern unsigned long iommu_area_alloc(unsigned long *map, unsigned long size,
				      unsigned long start, unsigned int nr,
				      unsigned long shift,
				      unsigned long boundary_size,
				      unsigned long align_mask);
extern void iommu_area_free(unsigned long *map, unsigned long start,
			    unsigned int nr);
