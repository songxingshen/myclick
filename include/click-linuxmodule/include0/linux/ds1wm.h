/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:37 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/ds1wm.h */
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
/* platform data for the DS1WM driver */

struct ds1wm_platform_data {
	int bus_shift;	    /* number of shifts needed to calculate the
			     * offset between DS1WM registers;
			     * e.g. on h5xxx and h2200 this is 2
			     * (registers aligned to 4-byte boundaries),
			     * while on hx4700 this is 1 */
	int active_high;
	void (*enable)(struct platform_device *pdev);
	void (*disable)(struct platform_device *pdev);
};
