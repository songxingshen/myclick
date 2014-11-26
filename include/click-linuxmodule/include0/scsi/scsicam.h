/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:33 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/scsi/scsicam.h */
/*
 * scsicam.h - SCSI CAM support functions, use for HDIO_GETGEO, etc.
 *
 * Copyright 1993, 1994 Drew Eckhardt
 *      Visionary Computing 
 *      (Unix and Linux consulting and custom programming)
 *      drew@Colorado.EDU
 *	+1 (303) 786-7975
 *
 * For more information, please consult the SCSI-CAM draft.
 */

#ifndef SCSICAM_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define SCSICAM_H
extern int scsicam_bios_param (struct block_device *bdev, sector_t capacity, int *ip);
extern int scsi_partsize(unsigned char *buf, unsigned long capacity,
           unsigned int  *cyls, unsigned int *hds, unsigned int *secs);
extern unsigned char *scsi_bios_ptable(struct block_device *bdev);
#endif /* def SCSICAM_H */
