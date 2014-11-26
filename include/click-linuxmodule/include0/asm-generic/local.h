/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:34 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm-generic/local.h */
#ifndef _ASM_GENERIC_LOCAL_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_GENERIC_LOCAL_H

#include <linux/percpu.h>
#include <linux/hardirq.h>
#include <asm/atomic.h>
#include <asm/types.h>

/*
 * A signed long type for operations which are atomic for a single CPU.
 * Usually used in combination with per-cpu variables.
 *
 * This is the default implementation, which uses atomic_long_t.  Which is
 * rather pointless.  The whole point behind local_t is that some processors
 * can perform atomic adds and subtracts in a manner which is atomic wrt IRQs
 * running on this CPU.  local_t allows exploitation of such capabilities.
 */

/* Implement in terms of atomics. */

/* Don't use typedef: don't want them to be mixed with atomic_t's. */
typedef struct
{
	atomic_long_t a;
} local_t;

#define LOCAL_INIT(i)	{ ATOMIC_LONG_INIT(i) }

#define local_read(l)	atomic_long_read(&(l)->a)
#define local_set(l,i)	atomic_long_set((&(l)->a),(i))
#define local_inc(l)	atomic_long_inc(&(l)->a)
#define local_dec(l)	atomic_long_dec(&(l)->a)
#define local_add(i,l)	atomic_long_add((i),(&(l)->a))
#define local_sub(i,l)	atomic_long_sub((i),(&(l)->a))

#define local_sub_and_test(i, l) atomic_long_sub_and_test((i), (&(l)->a))
#define local_dec_and_test(l) atomic_long_dec_and_test(&(l)->a)
#define local_inc_and_test(l) atomic_long_inc_and_test(&(l)->a)
#define local_add_negative(i, l) atomic_long_add_negative((i), (&(l)->a))
#define local_add_return(i, l) atomic_long_add_return((i), (&(l)->a))
#define local_sub_return(i, l) atomic_long_sub_return((i), (&(l)->a))
#define local_inc_return(l) atomic_long_inc_return(&(l)->a)

#define local_cmpxchg(l, o, n) atomic_long_cmpxchg((&(l)->a), (o), (n))
#define local_xchg(l, n) atomic_long_xchg((&(l)->a), (n))
#define local_add_unless(l, a, u) atomic_long_add_unless((&(l)->a), (a), (u))
#define local_inc_not_zero(l) atomic_long_inc_not_zero(&(l)->a)

/* Non-atomic variants, ie. preemption disabled and won't be touched
 * in interrupt, etc.  Some archs can optimize this case well. */
#define __local_inc(l)		local_set((l), local_read(l) + 1)
#define __local_dec(l)		local_set((l), local_read(l) - 1)
#define __local_add(i,l)	local_set((l), local_read(l) + (i))
#define __local_sub(i,l)	local_set((l), local_read(l) - (i))

/* Use these for per-cpu local_t variables: on some archs they are
 * much more efficient than these naive implementations.  Note they take
 * a variable (eg. mystruct.foo), not an address.
 */
#define cpu_local_read(l)	local_read(&__get_cpu_var(l))
#define cpu_local_set(l, i)	local_set(&__get_cpu_var(l), (i))
#define cpu_local_inc(l)	local_inc(&__get_cpu_var(l))
#define cpu_local_dec(l)	local_dec(&__get_cpu_var(l))
#define cpu_local_add(i, l)	local_add((i), &__get_cpu_var(l))
#define cpu_local_sub(i, l)	local_sub((i), &__get_cpu_var(l))

/* Non-atomic increments, ie. preemption disabled and won't be touched
 * in interrupt, etc.  Some archs can optimize this case well.
 */
#define __cpu_local_inc(l)	__local_inc(&__get_cpu_var(l))
#define __cpu_local_dec(l)	__local_dec(&__get_cpu_var(l))
#define __cpu_local_add(i, l)	__local_add((i), &__get_cpu_var(l))
#define __cpu_local_sub(i, l)	__local_sub((i), &__get_cpu_var(l))

#endif /* _ASM_GENERIC_LOCAL_H */
