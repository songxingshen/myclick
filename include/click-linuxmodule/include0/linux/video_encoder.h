/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:36 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/video_encoder.h */
#ifndef _LINUX_VIDEO_ENCODER_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_VIDEO_ENCODER_H

struct video_encoder_capability { /* this name is too long */
	__u32	flags;
#define	VIDEO_ENCODER_PAL	1	/* can encode PAL signal */
#define	VIDEO_ENCODER_NTSC	2	/* can encode NTSC */
#define	VIDEO_ENCODER_SECAM	4	/* can encode SECAM */
#define	VIDEO_ENCODER_CCIR	16	/* CCIR-601 pixel rate (720 pixels per line) instead of square pixel rate */
	int	inputs;			/* number of inputs */
	int	outputs;		/* number of outputs */
};

#define	ENCODER_GET_CAPABILITIES _IOR('e', 1, struct video_encoder_capability)
#define	ENCODER_SET_NORM	_IOW('e', 2, int)
#define	ENCODER_SET_INPUT	_IOW('e', 3, int)	/* 0 <= input < #inputs */
#define	ENCODER_SET_OUTPUT	_IOW('e', 4, int)	/* 0 <= output < #outputs */
#define	ENCODER_ENABLE_OUTPUT	_IOW('e', 5, int)	/* boolean output enable control */


#endif
