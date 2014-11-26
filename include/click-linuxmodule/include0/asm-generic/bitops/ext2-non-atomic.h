/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:39 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-generic/bitops/ext2-non-atomic.h */
#ifndef _ASM_GENERIC_BITOPS_EXT2_NON_ATOMIC_H_
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_GENERIC_BITOPS_EXT2_NON_ATOMIC_H_

#include <asm-generic/bitops/le.h>

#define ext2_set_bit(nr,addr)	\
	generic___test_and_set_le_bit((nr),(unsigned long *)(addr))
#define ext2_clear_bit(nr,addr)	\
	generic___test_and_clear_le_bit((nr),(unsigned long *)(addr))

#define ext2_test_bit(nr,addr)	\
	generic_test_le_bit((nr),(unsigned long *)(addr))
#define ext2_find_first_zero_bit(addr, size) \
	generic_find_first_zero_le_bit((unsigned long *)(addr), (size))
#define ext2_find_next_zero_bit(addr, size, off) \
	generic_find_next_zero_le_bit((unsigned long *)(addr), (size), (off))
#define ext2_find_next_bit(addr, size, off) \
	generic_find_next_le_bit((unsigned long *)(addr), (size), (off))

#endif /* _ASM_GENERIC_BITOPS_EXT2_NON_ATOMIC_H_ */
