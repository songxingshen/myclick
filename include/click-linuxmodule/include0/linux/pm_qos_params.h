/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:37 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/linux/pm_qos_params.h */
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
/* interface for the pm_qos_power infrastructure of the linux kernel.
 *
 * Mark Gross <mgross@linux.intel.com>
 */
#include <linux/list.h>
#include <linux/notifier.h>
#include <linux/miscdevice.h>

#define PM_QOS_RESERVED 0
#define PM_QOS_CPU_DMA_LATENCY 1
#define PM_QOS_NETWORK_LATENCY 2
#define PM_QOS_NETWORK_THROUGHPUT 3

#define PM_QOS_NUM_CLASSES 4
#define PM_QOS_DEFAULT_VALUE -1

int pm_qos_add_requirement(int qos, char *name, s32 value);
int pm_qos_update_requirement(int qos, char *name, s32 new_value);
void pm_qos_remove_requirement(int qos, char *name);

int pm_qos_requirement(int qos);

int pm_qos_add_notifier(int qos, struct notifier_block *notifier);
int pm_qos_remove_notifier(int qos, struct notifier_block *notifier);

