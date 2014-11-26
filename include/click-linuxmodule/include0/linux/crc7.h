/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:37 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/crc7.h */
#ifndef _LINUX_CRC7_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_CRC7_H
#include <linux/types.h>

extern const u8 crc7_syndrome_table[256];

static inline u8 crc7_byte(u8 crc, u8 data)
{
	return crc7_syndrome_table[(crc << 1) ^ data];
}

extern u8 crc7(u8 crc, const u8 *buffer, size_t len);

#endif
