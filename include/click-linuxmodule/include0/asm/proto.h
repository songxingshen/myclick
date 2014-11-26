/* created by click/linuxmodule/fixincludes.pl on Tue Nov 25 22:39:35 2014 */
/* from /lib/modules/2.6.27.5-117.fc10.i686/build/include/asm/proto.h */
#ifndef _ASM_X8664_PROTO_H
#if defined(__cplusplus) && !CLICK_CXX_PROTECTED
# error "missing #include <click/cxxprotect.h>"
#endif
#define _ASM_X8664_PROTO_H 1

#include <asm/ldt.h>

/* misc architecture specific prototypes */

extern void early_idt_handler(void);

extern void system_call(void);
extern void syscall_init(void);

extern void ia32_syscall(void);
extern void ia32_cstar_target(void);
extern void ia32_sysenter_target(void);

extern void syscall32_cpu_init(void);

extern void check_efer(void);

#ifdef CONFIG_X86_BIOS_REBOOT
extern int reboot_force;
#else
static const int reboot_force = 0;
#endif

long do_arch_prctl(struct task_struct *task, int code, unsigned long addr);

#define round_up(x, y) (((x) + (y) - 1) & ~((y) - 1))
#define round_down(x, y) ((x) & ~((y) - 1))

#endif
