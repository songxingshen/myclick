/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/spi/eeprom.h */
#ifndef __LINUX_SPI_EEPROM_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __LINUX_SPI_EEPROM_H

/*
 * Put one of these structures in platform_data for SPI EEPROMS handled
 * by the "at25" driver.  On SPI, most EEPROMS understand the same core
 * command set.  If you need to support EEPROMs that don't yet fit, add
 * flags to support those protocol options.  These values all come from
 * the chip datasheets.
 */
struct spi_eeprom {
	u32		byte_len;
	char		name[10];
	u16		page_size;		/* for writes */
	u16		flags;
#define	EE_ADDR1	0x0001			/*  8 bit addrs */
#define	EE_ADDR2	0x0002			/* 16 bit addrs */
#define	EE_ADDR3	0x0004			/* 24 bit addrs */
#define	EE_READONLY	0x0008			/* disallow writes */
};

#endif /* __LINUX_SPI_EEPROM_H */
