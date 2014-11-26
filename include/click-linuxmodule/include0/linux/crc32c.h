/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:36 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/crc32c.h */
#ifndef _LINUX_CRC32C_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_CRC32C_H

#include <linux/types.h>

extern u32 crc32c_le(u32 crc, unsigned char const *address, size_t length);
extern u32 crc32c_be(u32 crc, unsigned char const *address, size_t length);

#define crc32c(seed, data, length)  crc32c_le(seed, (unsigned char const *)data, length)

#endif	/* _LINUX_CRC32C_H */
