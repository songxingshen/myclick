/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:34 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/media/soc_camera_platform.h */
#ifndef __SOC_CAMERA_H__
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __SOC_CAMERA_H__

#include <linux/videodev2.h>

struct soc_camera_platform_info {
	int iface;
	char *format_name;
	unsigned long format_depth;
	struct v4l2_pix_format format;
	unsigned long bus_param;
	int (*set_capture)(struct soc_camera_platform_info *info, int enable);
};

#endif /* __SOC_CAMERA_H__ */
