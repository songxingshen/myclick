/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/dcookies.h */
/*
 * dcookies.h
 *
 * Persistent cookie-path mappings
 *
 * Copyright 2002 John Levon <levon@movementarian.org>
 */

#ifndef DCOOKIES_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define DCOOKIES_H
 

#ifdef CONFIG_PROFILING
 
#include <linux/dcache.h>
#include <linux/path.h>
#include <linux/types.h>
 
struct dcookie_user;
 
/**
 * dcookie_register - register a user of dcookies
 *
 * Register as a dcookie user. Returns %NULL on failure.
 */
struct dcookie_user * dcookie_register(void);

/**
 * dcookie_unregister - unregister a user of dcookies
 *
 * Unregister as a dcookie user. This may invalidate
 * any dcookie values returned from get_dcookie().
 */
void dcookie_unregister(struct dcookie_user * user);
  
/**
 * get_dcookie - acquire a dcookie
 *
 * Convert the given dentry/vfsmount pair into
 * a cookie value.
 *
 * Returns -EINVAL if no living task has registered as a
 * dcookie user.
 *
 * Returns 0 on success, with *cookie filled in
 */
int get_dcookie(struct path *path, unsigned long *cookie);

#else

static inline struct dcookie_user * dcookie_register(void)
{
	return NULL;
}

static inline void dcookie_unregister(struct dcookie_user * user)
{
	return;
}

static inline int get_dcookie(struct path *path, unsigned long *cookie)
{
	return -ENOSYS;
}

#endif /* CONFIG_PROFILING */

#endif /* DCOOKIES_H */
