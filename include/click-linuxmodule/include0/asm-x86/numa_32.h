/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-x86/numa_32.h */
#ifndef _ASM_X86_32_NUMA_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_X86_32_NUMA_H 1

extern int pxm_to_nid(int pxm);
extern void numa_remove_cpu(int cpu);

#ifdef CONFIG_NUMA
extern void set_highmem_pages_init(void);
#endif

#endif /* _ASM_X86_32_NUMA_H */
