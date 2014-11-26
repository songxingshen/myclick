/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:39 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-generic/bitops/minix-le.h */
#ifndef _ASM_GENERIC_BITOPS_MINIX_LE_H_
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_GENERIC_BITOPS_MINIX_LE_H_

#include <asm-generic/bitops/le.h>

#define minix_test_and_set_bit(nr,addr)	\
	generic___test_and_set_le_bit((nr),(unsigned long *)(addr))
#define minix_set_bit(nr,addr)		\
	generic___set_le_bit((nr),(unsigned long *)(addr))
#define minix_test_and_clear_bit(nr,addr) \
	generic___test_and_clear_le_bit((nr),(unsigned long *)(addr))
#define minix_test_bit(nr,addr)		\
	generic_test_le_bit((nr),(unsigned long *)(addr))
#define minix_find_first_zero_bit(addr,size) \
	generic_find_first_zero_le_bit((unsigned long *)(addr),(size))

#endif /* _ASM_GENERIC_BITOPS_MINIX_LE_H_ */
