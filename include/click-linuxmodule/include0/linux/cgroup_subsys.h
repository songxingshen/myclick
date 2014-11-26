/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:36 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/cgroup_subsys.h */
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
/* Add subsystem definitions of the form SUBSYS(<name>) in this
 * file. Surround each one by a line of comment markers so that
 * patches don't collide
 */

/* */

/* */

#ifdef CONFIG_CPUSETS
SUBSYS(cpuset)
#endif

/* */

#ifdef CONFIG_CGROUP_DEBUG
SUBSYS(debug)
#endif

/* */

#ifdef CONFIG_CGROUP_NS
SUBSYS(ns)
#endif

/* */

#ifdef CONFIG_CGROUP_SCHED
SUBSYS(cpu_cgroup)
#endif

/* */

#ifdef CONFIG_CGROUP_CPUACCT
SUBSYS(cpuacct)
#endif

/* */

#ifdef CONFIG_CGROUP_MEM_RES_CTLR
SUBSYS(mem_cgroup)
#endif

/* */

#ifdef CONFIG_CGROUP_DEVICE
SUBSYS(devices)
#endif

/* */
