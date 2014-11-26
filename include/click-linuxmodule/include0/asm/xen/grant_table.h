/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm/xen/grant_table.h */
#ifndef __XEN_GRANT_TABLE_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __XEN_GRANT_TABLE_H

#define xen_alloc_vm_area(size)	alloc_vm_area(size)
#define xen_free_vm_area(area)	free_vm_area(area)

#endif /* __XEN_GRANT_TABLE_H */
