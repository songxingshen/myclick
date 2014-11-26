/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:34 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/sound/pt2258.h */
/*
 *   ALSA Driver for the PT2258 volume controller.
 *
 *	Copyright (c) 2006  Jochen Voss <voss@seehuhn.de>
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 *
 */      

#ifndef __SOUND_PT2258_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __SOUND_PT2258_H

struct snd_pt2258 {
	struct snd_card *card;
	struct snd_i2c_bus *i2c_bus;
	struct snd_i2c_device *i2c_dev;

	unsigned char volume[6];
	int mute;
};

extern int snd_pt2258_reset(struct snd_pt2258 *pt);
extern int snd_pt2258_build_controls(struct snd_pt2258 *pt);

#endif /* __SOUND_PT2258_H */
