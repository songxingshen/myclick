cmd_/home/user/Documents/click-2.0.1/linuxmodule/in_cksum.o := gcc -w  -W -Wall   -I/home/user/Documents/click-2.0.1/include/click-linuxmodule/include0  -I/usr/src/kernels/2.6.27.5-117.fc10.i686/arch/x86/include -include include/linux/autoconf.h -D__KERNEL__ -I/lib/modules/2.6.27.5-117.fc10.i686/build/include  -I/usr/src/kernels/2.6.27.5-117.fc10.i686/arch/x86/include -include include/linux/autoconf.h -Wall -Wundef  -Wno-trigraphs -fno-strict-aliasing   -Os -m32 -msoft-float -mregparm=3 -freg-struct-return -mpreferred-stack-boundary=2  -march=i686 -mtune=generic -ffreestanding -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -pipe -Wno-sign-compare -fno-asynchronous-unwind-tables -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -I/home/user/Documents/click-2.0.1/include/click-linuxmodule/include1 -I/home/user/Documents/click-2.0.1/include/click-linuxmodule/include2   -fno-stack-protector -fno-omit-frame-pointer -fno-optimize-sibling-calls -g   -DMODULE -DCLICK_LINUXMODULE -O2 -DHAVE_CONFIG_H -I/home/user/Documents/click-2.0.1/linuxmodule/../include -I/home/user/Documents/click-2.0.1/linuxmodule/../include -I/home/user/Documents/click-2.0.1/linuxmodule -I/home/user/Documents/click-2.0.1/linuxmodule/.. -Wp,-MD,/home/user/Documents/click-2.0.1/linuxmodule/.in_cksum.o.d -c -o /home/user/Documents/click-2.0.1/linuxmodule/in_cksum.o /home/user/Documents/click-2.0.1/linuxmodule/../lib/in_cksum.c

deps_/home/user/Documents/click-2.0.1/linuxmodule/in_cksum.o := \
  /home/user/Documents/click-2.0.1/linuxmodule/../lib/in_cksum.c \
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
  /home/user/Documents/click-2.0.1/linuxmodule/../include/clicknet/ip.h \
  /home/user/Documents/click-2.0.1/linuxmodule/../include/click/cxxprotect.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/net/checksum.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/errno.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/errno.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/errno.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/errno-base.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/byteorder.h \
    $(wildcard include/config/x86/bswap.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/byteorder/little_endian.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/byteorder/swab.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/byteorder/generic.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/uaccess.h \
    $(wildcard include/config/x86/wp/works/ok.h) \
    $(wildcard include/config/x86/intel/usercopy.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/thread_info.h \
    $(wildcard include/config/compat.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/bitops.h \
    $(wildcard include/config/generic/find/first/bit.h) \
    $(wildcard include/config/generic/find/next/bit.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/bitops.h \
    $(wildcard include/config/x86/cmov.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/alternative.h \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/paravirt.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/asm.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/cpufeature.h \
    $(wildcard include/config/x86/invlpg.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/required-features.h \
    $(wildcard include/config/x86/minimum/cpu/family.h) \
    $(wildcard include/config/math/emulation.h) \
    $(wildcard include/config/x86/pae.h) \
    $(wildcard include/config/x86/cmpxchg64.h) \
    $(wildcard include/config/x86/use/3dnow.h) \
    $(wildcard include/config/x86/p6/nop.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/bitops/sched.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/bitops/hweight.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/bitops/fls64.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/bitops/ext2-non-atomic.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/bitops/le.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/bitops/minix.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/thread_info.h \
    $(wildcard include/config/debug/stack/usage.h) \
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
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/paravirt.h \
    $(wildcard include/config/x86/local/apic.h) \
    $(wildcard include/config/highpte.h) \
    $(wildcard include/config/paravirt/debug.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/cpumask.h \
    $(wildcard include/config/hotplug/cpu.h) \
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
    $(wildcard include/config/generic/bug.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/div64.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
    $(wildcard include/config/base/small.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/bitmap.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/kmap_types.h \
    $(wildcard include/config/debug/highmem.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/desc_defs.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/memory_model.h \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/sparsemem.h) \
    $(wildcard include/config/out/of/line/pfn/to/page.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/page.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/processor.h \
    $(wildcard include/config/x86/vsmp.h) \
    $(wildcard include/config/x86/ht.h) \
    $(wildcard include/config/x86/debugctlmsr.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/processor-flags.h \
    $(wildcard include/config/vm86.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/vm86.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/ptrace.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/ptrace-abi.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/ds.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/init.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/hotplug.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/segment.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/math_emu.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/sigcontext.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/current.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/percpu.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm-generic/percpu.h \
    $(wildcard include/config/debug/preempt.h) \
    $(wildcard include/config/have/setup/per/cpu/area.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/system.h \
    $(wildcard include/config/ia32/emulation.h) \
    $(wildcard include/config/x86/ppro/fence.h) \
    $(wildcard include/config/x86/oostore.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/cmpxchg.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/cmpxchg_32.h \
    $(wildcard include/config/x86/cmpxchg.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/nops.h \
    $(wildcard include/config/mk7.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
    $(wildcard include/config/x86.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/irqflags.h \
    $(wildcard include/config/debug/lock/alloc.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/msr.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/msr-index.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/personality.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/cache.h \
    $(wildcard include/config/arch/has/cache/line/size.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/cache.h \
    $(wildcard include/config/x86/l1/cache/shift.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/prefetch.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/uaccess_32.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/checksum.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/checksum_32.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/in6.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/in.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/socket.h \
    $(wildcard include/config/proc/fs.h) \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/socket.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/asm/sockios.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/sockios.h \
  /home/user/Documents/click-2.0.1/include/click-linuxmodule/include0/linux/uio.h \
  /home/user/Documents/click-2.0.1/linuxmodule/../include/click/cxxunprotect.h \

/home/user/Documents/click-2.0.1/linuxmodule/in_cksum.o: $(deps_/home/user/Documents/click-2.0.1/linuxmodule/in_cksum.o)

$(deps_/home/user/Documents/click-2.0.1/linuxmodule/in_cksum.o):
