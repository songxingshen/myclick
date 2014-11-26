/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:38 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/page-isolation.h */
#ifndef __LINUX_PAGEISOLATION_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define __LINUX_PAGEISOLATION_H

/*
 * Changes migrate type in [start_pfn, end_pfn) to be MIGRATE_ISOLATE.
 * If specified range includes migrate types other than MOVABLE,
 * this will fail with -EBUSY.
 *
 * For isolating all pages in the range finally, the caller have to
 * free all pages in the range. test_page_isolated() can be used for
 * test it.
 */
extern int
start_isolate_page_range(unsigned long start_pfn, unsigned long end_pfn);

/*
 * Changes MIGRATE_ISOLATE to MIGRATE_MOVABLE.
 * target range is [start_pfn, end_pfn)
 */
extern int
undo_isolate_page_range(unsigned long start_pfn, unsigned long end_pfn);

/*
 * test all pages in [start_pfn, end_pfn)are isolated or not.
 */
extern int
test_pages_isolated(unsigned long start_pfn, unsigned long end_pfn);

/*
 * Internal funcs.Changes pageblock's migrate type.
 * Please use make_pagetype_isolated()/make_pagetype_movable().
 */
extern int set_migratetype_isolate(struct page *page);
extern void unset_migratetype_isolate(struct page *page);


#endif
