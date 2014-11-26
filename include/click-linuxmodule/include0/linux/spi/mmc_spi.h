/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:41 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/spi/mmc_spi.h */
#ifndef __LINUX_SPI_MMC_SPI_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __LINUX_SPI_MMC_SPI_H

#include <linux/interrupt.h>

struct device;
struct mmc_host;

/* Put this in platform_data of a device being used to manage an MMC/SD
 * card slot.  (Modeled after PXA mmc glue; see that for usage examples.)
 *
 * REVISIT This is not a spi-specific notion.  Any card slot should be
 * able to handle it.  If the MMC core doesn't adopt this kind of notion,
 * switch the "struct device *" parameters over to "struct spi_device *".
 */
struct mmc_spi_platform_data {
	/* driver activation and (optional) card detect irq hookup */
	int (*init)(struct device *,
		irqreturn_t (*)(int, void *),
		void *);
	void (*exit)(struct device *, void *);

	/* sense switch on sd cards */
	int (*get_ro)(struct device *);

	/*
	 * If board does not use CD interrupts, driver can optimize polling
	 * using this function.
	 */
	int (*get_cd)(struct device *);

	/* Capabilities to pass into mmc core (e.g. MMC_CAP_NEEDS_POLL). */
	unsigned long caps;

	/* how long to debounce card detect, in msecs */
	u16 detect_delay;

	/* power management */
	u16 powerup_msecs;		/* delay of up to 250 msec */
	u32 ocr_mask;			/* available voltages */
	void (*setpower)(struct device *, unsigned int maskval);
};

#endif /* __LINUX_SPI_MMC_SPI_H */
