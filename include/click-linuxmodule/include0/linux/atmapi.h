/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:39 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/atmapi.h */
/* atmapi.h - ATM API user space/kernel compatibility */
 
/* Written 1999,2000 by Werner Almesberger, EPFL ICA */
 

#ifndef _LINUX_ATMAPI_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _LINUX_ATMAPI_H

#if defined(__sparc__) || defined(__ia64__)
/* such alignment is not required on 32 bit sparcs, but we can't
   figure that we are on a sparc64 while compiling user-space programs. */
#define __ATM_API_ALIGN	__attribute__((aligned(8)))
#else
#define __ATM_API_ALIGN
#endif


/*
 * Opaque type for kernel pointers. Note that _ is never accessed. We need
 * the struct in order hide the array, so that we can make simple assignments
 * instead of being forced to use memcpy. It also improves error reporting for
 * code that still assumes that we're passing unsigned longs.
 *
 * Convention: NULL pointers are passed as a field of all zeroes.
 */
 
typedef struct { unsigned char _[8]; } __ATM_API_ALIGN atm_kptr_t;

#endif