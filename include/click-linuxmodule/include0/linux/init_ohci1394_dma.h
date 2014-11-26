/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:36 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/init_ohci1394_dma.h */
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#ifdef CONFIG_PROVIDE_OHCI1394_DMA_INIT
extern int __initdata init_ohci1394_dma_early;
extern void __init init_ohci1394_dma_on_all_controllers(void);
#endif
