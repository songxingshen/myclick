cmd_/home/user/Documents/click-2.0.1/linuxmodule/ksyms.o := gcc -w  -W -Wall   -I/home/user/Documents/click-2.0.1/include/click-linuxmodule/include0  -I/usr/src/kernels/2.6.27.5-117.fc10.i686/arch/x86/include -include include/linux/autoconf.h -D__KERNEL__ -I/lib/modules/2.6.27.5-117.fc10.i686/build/include  -I/usr/src/kernels/2.6.27.5-117.fc10.i686/arch/x86/include -include include/linux/autoconf.h -Wall -Wundef  -Wno-trigraphs -fno-strict-aliasing   -Os -m32 -msoft-float -mregparm=3 -freg-struct-return -mpreferred-stack-boundary=2  -march=i686 -mtune=generic -ffreestanding -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -pipe -Wno-sign-compare -fno-asynchronous-unwind-tables -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -I/home/user/Documents/click-2.0.1/include/click-linuxmodule/include1 -I/home/user/Documents/click-2.0.1/include/click-linuxmodule/include2   -fno-stack-protector -fno-omit-frame-pointer -fno-optimize-sibling-calls -g   -DMODULE -DCLICK_LINUXMODULE -O2 -DHAVE_CONFIG_H -I/home/user/Documents/click-2.0.1/linuxmodule/../include -I/home/user/Documents/click-2.0.1/linuxmodule/../include -I/home/user/Documents/click-2.0.1/linuxmodule -I/home/user/Documents/click-2.0.1/linuxmodule/.. -Wp,-MD,/home/user/Documents/click-2.0.1/linuxmodule/.ksyms.o.d -c -o /home/user/Documents/click-2.0.1/linuxmodule/ksyms.o /home/user/Documents/click-2.0.1/linuxmodule/ksyms.c

deps_/home/user/Documents/click-2.0.1/linuxmodule/ksyms.o := \
  /home/user/Documents/click-2.0.1/linuxmodule/ksyms.c \
  /home/user/Documents/click-2.0.1/linuxmodule/../include/click/config.h \
    $(wildcard include/config/h.h) \
  /home/user/Documents/click-2.0.1/linuxmodule/../include/click/config-linuxmodule.h \
    $(wildcard include/config/linuxmodule/h.h) \
    $(wildcard include/config/linuxmodule/symbols/only.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/version.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/types.h \
    $(wildcard include/config/x86/32.h) \
    $(wildcard include/config/x86/64.h) \
    $(wildcard include/config/highmem64g.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/int-ll64.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbd.h) \
    $(wildcard include/config/lsf.h) \
    $(wildcard include/config/resources/64bit.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/posix_types.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/stddef.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/compiler.h \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/compiler-gcc4.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/posix_types.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/posix_types_32.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/module.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/kallsyms.h) \
    $(wildcard include/config/markers.h) \
    $(wildcard include/config/module/unload.h) \
    $(wildcard include/config/sysfs.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/poison.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/prefetch.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/processor.h \
    $(wildcard include/config/x86/vsmp.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/x86/ht.h) \
    $(wildcard include/config/paravirt.h) \
    $(wildcard include/config/x86/debugctlmsr.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/processor-flags.h \
    $(wildcard include/config/vm86.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/vm86.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/ptrace.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/ptrace-abi.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/ds.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/init.h \
    $(wildcard include/config/hotplug.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/segment.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/math_emu.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/sigcontext.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/current.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/percpu.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/percpu.h \
    $(wildcard include/config/debug/preempt.h) \
    $(wildcard include/config/have/setup/per/cpu/area.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
    $(wildcard include/config/base/small.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/cpufeature.h \
    $(wildcard include/config/x86/invlpg.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/required-features.h \
    $(wildcard include/config/x86/minimum/cpu/family.h) \
    $(wildcard include/config/math/emulation.h) \
    $(wildcard include/config/x86/pae.h) \
    $(wildcard include/config/x86/cmpxchg64.h) \
    $(wildcard include/config/x86/cmov.h) \
    $(wildcard include/config/x86/use/3dnow.h) \
    $(wildcard include/config/x86/p6/nop.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/bitops.h \
    $(wildcard include/config/generic/find/first/bit.h) \
    $(wildcard include/config/generic/find/next/bit.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/bitops.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/alternative.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/asm.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/bitops/sched.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/bitops/hweight.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/bitops/fls64.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/bitops/ext2-non-atomic.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/bitops/le.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/byteorder.h \
    $(wildcard include/config/x86/bswap.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/byteorder/little_endian.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/byteorder/swab.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/byteorder/generic.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/bitops/minix.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/system.h \
    $(wildcard include/config/ia32/emulation.h) \
    $(wildcard include/config/x86/ppro/fence.h) \
    $(wildcard include/config/x86/oostore.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/cmpxchg.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/cmpxchg_32.h \
    $(wildcard include/config/x86/cmpxchg.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/nops.h \
    $(wildcard include/config/mk7.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/spinlock/sleep.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/numa.h) \
  /usr/lib/gcc/i386-redhat-linux/4.3.2/include/stdarg.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/linkage.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/linkage.h \
    $(wildcard include/config/x86/alignment/16.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/typecheck.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/ratelimit.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/param.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/param.h \
    $(wildcard include/config/hz.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/debug/bugverbose.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/bug.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/div64.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
    $(wildcard include/config/x86.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/irqflags.h \
    $(wildcard include/config/debug/lock/alloc.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/paravirt.h \
    $(wildcard include/config/x86/local/apic.h) \
    $(wildcard include/config/highpte.h) \
    $(wildcard include/config/paravirt/debug.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/page.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/const.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/page_32.h \
    $(wildcard include/config/highmem4g.h) \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/4kstacks.h) \
    $(wildcard include/config/hugetlb/page.h) \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/x86/3dnow.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/string.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/string.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/string_32.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/pgtable-nopmd.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/pgtable-nopud.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/memory_model.h \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/sparsemem.h) \
    $(wildcard include/config/out/of/line/pfn/to/page.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/page.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/cpumask.h \
    $(wildcard include/config/hotplug/cpu.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/bitmap.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/kmap_types.h \
    $(wildcard include/config/debug/highmem.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/desc_defs.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/msr.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/msr-index.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/errno.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/errno.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/errno-base.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/personality.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/cache.h \
    $(wildcard include/config/arch/has/cache/line/size.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/cache.h \
    $(wildcard include/config/x86/l1/cache/shift.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/stat.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/stat.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/time.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/seqlock.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/spinlock.h \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/generic/lockbreak.h) \
    $(wildcard include/config/preempt.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/preempt.h \
    $(wildcard include/config/preempt/notifiers.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/thread_info.h \
    $(wildcard include/config/compat.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/thread_info.h \
    $(wildcard include/config/debug/stack/usage.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/stringify.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/bottom_half.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/spinlock_types.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/spinlock_types.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/lockdep.h \
    $(wildcard include/config/lockdep.h) \
    $(wildcard include/config/lock/stat.h) \
    $(wildcard include/config/generic/hardirqs.h) \
    $(wildcard include/config/prove/locking.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/spinlock.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/atomic.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/atomic_32.h \
    $(wildcard include/config/m386.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/atomic.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/rwlock.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/spinlock_api_smp.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/math64.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/kmod.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/gfp.h \
    $(wildcard include/config/zone/dma.h) \
    $(wildcard include/config/zone/dma32.h) \
    $(wildcard include/config/highmem.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/mmzone.h \
    $(wildcard include/config/force/max/zoneorder.h) \
    $(wildcard include/config/memory/hotplug.h) \
    $(wildcard include/config/arch/populates/node/map.h) \
    $(wildcard include/config/flat/node/mem/map.h) \
    $(wildcard include/config/have/memory/present.h) \
    $(wildcard include/config/need/node/memmap/size.h) \
    $(wildcard include/config/need/multiple/nodes.h) \
    $(wildcard include/config/have/arch/early/pfn/to/nid.h) \
    $(wildcard include/config/sparsemem/extreme.h) \
    $(wildcard include/config/nodes/span/other/nodes.h) \
    $(wildcard include/config/holes/in/zone.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/wait.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/numa.h \
    $(wildcard include/config/nodes/shift.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/nodemask.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/pageblock-flags.h \
    $(wildcard include/config/hugetlb/page/size/variable.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/bounds.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/memory_hotplug.h \
    $(wildcard include/config/have/arch/nodedata/extension.h) \
    $(wildcard include/config/memory/hotremove.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/notifier.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/errno.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/mutex.h \
    $(wildcard include/config/debug/mutexes.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/rwsem.h \
    $(wildcard include/config/rwsem/generic/spinlock.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/rwsem.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/srcu.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/topology.h \
    $(wildcard include/config/sched/smt.h) \
    $(wildcard include/config/sched/mc.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/smp.h \
    $(wildcard include/config/use/generic/smp/helpers.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/smp.h \
    $(wildcard include/config/x86/io/apic.h) \
    $(wildcard include/config/x86/32/smp.h) \
    $(wildcard include/config/x86/64/smp.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/mpspec.h \
    $(wildcard include/config/x86/numaq.h) \
    $(wildcard include/config/mca.h) \
    $(wildcard include/config/eisa.h) \
    $(wildcard include/config/x86/mpparse.h) \
    $(wildcard include/config/acpi.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/mpspec_def.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include1/mach_mpspec.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/apic.h \
    $(wildcard include/config/x86/good/apic.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/pm.h \
    $(wildcard include/config/pm/sleep.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/delay.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/delay.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/fixmap.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/fixmap_32.h \
    $(wildcard include/config/x86/visws/apic.h) \
    $(wildcard include/config/x86/f00f/bug.h) \
    $(wildcard include/config/x86/cyclone/timer.h) \
    $(wildcard include/config/pci/mmconfig.h) \
    $(wildcard include/config/provide/ohci1394/dma/init.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/acpi.h \
    $(wildcard include/config/acpi/numa.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/acpi/pdc_intel.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/numa.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/numa_32.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/mmu.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/apicdef.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/io_apic.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/pda.h \
    $(wildcard include/config/cc/stackprotector.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include1/mach_apicdef.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/genapic.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/genapic_32.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/topology.h \
    $(wildcard include/config/debug/per/cpu/maps.h) \
    $(wildcard include/config/x86/64/acpi/numa.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/topology.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/elf.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/elf-em.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/elf.h \
    $(wildcard include/config/compat/vdso.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/user.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/user_32.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/auxvec.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/vdso.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/desc.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/ldt.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/mm_types.h \
    $(wildcard include/config/split/ptlock/cpus.h) \
    $(wildcard include/config/cgroup/mem/res/ctlr.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/mm/owner.h) \
    $(wildcard include/config/proc/fs.h) \
    $(wildcard include/config/mmu/notifier.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/auxvec.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/prio_tree.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/rbtree.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/completion.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/kobject.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/sysfs.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/kref.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/moduleparam.h \
    $(wildcard include/config/alpha.h) \
    $(wildcard include/config/ia64.h) \
    $(wildcard include/config/ppc64.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/marker.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/local.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/percpu.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/slab.h \
    $(wildcard include/config/slab/debug.h) \
    $(wildcard include/config/debug/objects.h) \
    $(wildcard include/config/slub.h) \
    $(wildcard include/config/slob.h) \
    $(wildcard include/config/debug/slab.h) \
    $(wildcard include/config/slabinfo.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/slub_def.h \
    $(wildcard include/config/slub/stats.h) \
    $(wildcard include/config/slub/debug.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/workqueue.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/timer.h \
    $(wildcard include/config/timer/stats.h) \
    $(wildcard include/config/debug/objects/timers.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/ktime.h \
    $(wildcard include/config/ktime/scalar.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/jiffies.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/timex.h \
    $(wildcard include/config/no/hz.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/timex.h \
    $(wildcard include/config/x86/elan.h) \
    $(wildcard include/config/x86/rdc321x.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/tsc.h \
    $(wildcard include/config/x86/tsc.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/debugobjects.h \
    $(wildcard include/config/debug/objects/free.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/module.h \
    $(wildcard include/config/m486.h) \
    $(wildcard include/config/m586.h) \
    $(wildcard include/config/m586tsc.h) \
    $(wildcard include/config/m586mmx.h) \
    $(wildcard include/config/mcore2.h) \
    $(wildcard include/config/m686.h) \
    $(wildcard include/config/mpentiumii.h) \
    $(wildcard include/config/mpentiumiii.h) \
    $(wildcard include/config/mpentiumm.h) \
    $(wildcard include/config/mpentium4.h) \
    $(wildcard include/config/mk6.h) \
    $(wildcard include/config/mk8.h) \
    $(wildcard include/config/mcrusoe.h) \
    $(wildcard include/config/mefficeon.h) \
    $(wildcard include/config/mwinchipc6.h) \
    $(wildcard include/config/mwinchip2.h) \
    $(wildcard include/config/mwinchip3d.h) \
    $(wildcard include/config/mcyrixiii.h) \
    $(wildcard include/config/mviac3/2.h) \
    $(wildcard include/config/mviac7.h) \
    $(wildcard include/config/mgeodegx1.h) \
    $(wildcard include/config/mgeode/lx.h) \

/home/user/Documents/click-2.0.1/linuxmodule/ksyms.o: $(deps_/home/user/Documents/click-2.0.1/linuxmodule/ksyms.o)

$(deps_/home/user/Documents/click-2.0.1/linuxmodule/ksyms.o):
