cmd_console-tools/reset.o := arm-unknown-linux-gnueabihf-gcc -Wp,-MD,console-tools/.reset.o.d   -std=gnu99 -Iinclude -Ilibbb  -include include/autoconf.h -D_GNU_SOURCE -DNDEBUG -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -DBB_VER='"1.36.1"'  -Wall -Wshadow -Wwrite-strings -Wundef -Wstrict-prototypes -Wunused -Wunused-parameter -Wunused-function -Wunused-value -Wmissing-prototypes -Wmissing-declarations -Wno-format-security -Wdeclaration-after-statement -Wold-style-definition -finline-limit=0 -fno-builtin-strlen -fomit-frame-pointer -ffunction-sections -fdata-sections -fno-guess-branch-probability -funsigned-char -static-libgcc -falign-functions=1 -falign-jumps=1 -falign-labels=1 -falign-loops=1 -fno-unwind-tables -fno-asynchronous-unwind-tables -fno-builtin-printf -Oz     -DKBUILD_BASENAME='"reset"'  -DKBUILD_MODNAME='"reset"' -c -o console-tools/reset.o console-tools/reset.c

deps_console-tools/reset.o := \
  console-tools/reset.c \
    $(wildcard include/config/reset.h) \
    $(wildcard include/config/stty.h) \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/stdc-predef.h \
  include/libbb.h \
    $(wildcard include/config/feature/shadowpasswds.h) \
    $(wildcard include/config/use/bb/shadow.h) \
    $(wildcard include/config/selinux.h) \
    $(wildcard include/config/feature/utmp.h) \
    $(wildcard include/config/locale/support.h) \
    $(wildcard include/config/use/bb/pwd/grp.h) \
    $(wildcard include/config/lfs.h) \
    $(wildcard include/config/feature/buffers/go/on/stack.h) \
    $(wildcard include/config/feature/buffers/go/in/bss.h) \
    $(wildcard include/config/extra/cflags.h) \
    $(wildcard include/config/variable/arch/pagesize.h) \
    $(wildcard include/config/feature/verbose.h) \
    $(wildcard include/config/feature/etc/services.h) \
    $(wildcard include/config/feature/ipv6.h) \
    $(wildcard include/config/feature/seamless/xz.h) \
    $(wildcard include/config/feature/seamless/lzma.h) \
    $(wildcard include/config/feature/seamless/bz2.h) \
    $(wildcard include/config/feature/seamless/gz.h) \
    $(wildcard include/config/feature/seamless/z.h) \
    $(wildcard include/config/float/duration.h) \
    $(wildcard include/config/feature/check/names.h) \
    $(wildcard include/config/feature/prefer/applets.h) \
    $(wildcard include/config/long/opts.h) \
    $(wildcard include/config/feature/pidfile.h) \
    $(wildcard include/config/feature/syslog.h) \
    $(wildcard include/config/feature/syslog/info.h) \
    $(wildcard include/config/warn/simple/msg.h) \
    $(wildcard include/config/feature/individual.h) \
    $(wildcard include/config/shell/ash.h) \
    $(wildcard include/config/shell/hush.h) \
    $(wildcard include/config/echo.h) \
    $(wildcard include/config/sleep.h) \
    $(wildcard include/config/printf.h) \
    $(wildcard include/config/test.h) \
    $(wildcard include/config/test1.h) \
    $(wildcard include/config/test2.h) \
    $(wildcard include/config/kill.h) \
    $(wildcard include/config/killall.h) \
    $(wildcard include/config/killall5.h) \
    $(wildcard include/config/chown.h) \
    $(wildcard include/config/ls.h) \
    $(wildcard include/config/xxx.h) \
    $(wildcard include/config/route.h) \
    $(wildcard include/config/feature/hwib.h) \
    $(wildcard include/config/desktop.h) \
    $(wildcard include/config/feature/crond/d.h) \
    $(wildcard include/config/feature/setpriv/capabilities.h) \
    $(wildcard include/config/run/init.h) \
    $(wildcard include/config/feature/securetty.h) \
    $(wildcard include/config/pam.h) \
    $(wildcard include/config/use/bb/crypt.h) \
    $(wildcard include/config/feature/adduser/to/group.h) \
    $(wildcard include/config/feature/del/user/from/group.h) \
    $(wildcard include/config/ioctl/hex2str/error.h) \
    $(wildcard include/config/feature/editing.h) \
    $(wildcard include/config/feature/editing/history.h) \
    $(wildcard include/config/feature/tab/completion.h) \
    $(wildcard include/config/feature/username/completion.h) \
    $(wildcard include/config/feature/editing/fancy/prompt.h) \
    $(wildcard include/config/feature/editing/savehistory.h) \
    $(wildcard include/config/feature/editing/vi.h) \
    $(wildcard include/config/feature/editing/save/on/exit.h) \
    $(wildcard include/config/pmap.h) \
    $(wildcard include/config/feature/show/threads.h) \
    $(wildcard include/config/feature/ps/additional/columns.h) \
    $(wildcard include/config/feature/topmem.h) \
    $(wildcard include/config/feature/top/smp/process.h) \
    $(wildcard include/config/pgrep.h) \
    $(wildcard include/config/pkill.h) \
    $(wildcard include/config/pidof.h) \
    $(wildcard include/config/sestatus.h) \
    $(wildcard include/config/unicode/support.h) \
    $(wildcard include/config/feature/mtab/support.h) \
    $(wildcard include/config/feature/clean/up.h) \
    $(wildcard include/config/feature/devfs.h) \
  include/platform.h \
    $(wildcard include/config/werror.h) \
    $(wildcard include/config/big/endian.h) \
    $(wildcard include/config/little/endian.h) \
    $(wildcard include/config/nommu.h) \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/lib/gcc/arm-unknown-linux-gnueabihf/13.3.0/include/limits.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/lib/gcc/arm-unknown-linux-gnueabihf/13.3.0/include/syslimits.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/limits.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/features.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/sys/cdefs.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/wordsize.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/gnu/stubs.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/gnu/stubs-hard.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/posix1_lim.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/local_lim.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/linux/limits.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/posix2_lim.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/xopen_lim.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/stdio_lim.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/byteswap.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/byteswap.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/types.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/typesizes.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/byteswap-16.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/endian.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/endian.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/lib/gcc/arm-unknown-linux-gnueabihf/13.3.0/include/stdint.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/stdint.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/wchar.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/lib/gcc/arm-unknown-linux-gnueabihf/13.3.0/include/stdbool.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/unistd.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/posix_opt.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/environments.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/lib/gcc/arm-unknown-linux-gnueabihf/13.3.0/include/stddef.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/confname.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/getopt.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/ctype.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/xlocale.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/dirent.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/dirent.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/errno.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/errno.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/linux/errno.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/asm/errno.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/asm-generic/errno.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/asm-generic/errno-base.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/fcntl.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/fcntl.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/fcntl-linux.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/uio.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/sys/types.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/time.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/sys/select.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/select.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/sigset.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/time.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/sys/sysmacros.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/pthreadtypes.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/stat.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/inttypes.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/netdb.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/netinet/in.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/sys/socket.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/sys/uio.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/socket.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/socket_type.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/sockaddr.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/asm/socket.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/asm-generic/socket.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/linux/posix_types.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/linux/stddef.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/asm/posix_types.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/asm-generic/posix_types.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/asm/bitsperlong.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/asm-generic/bitsperlong.h \
    $(wildcard include/config/64bit.h) \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/asm/sockios.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/asm-generic/sockios.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/in.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/rpc/netdb.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/siginfo.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/netdb.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/setjmp.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/setjmp.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/signal.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/signum.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/sigaction.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/sigcontext.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/asm/sigcontext.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/sigstack.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/sys/ucontext.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/sigthread.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/paths.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/stdio.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/libio.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/_G_config.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/wchar.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/lib/gcc/arm-unknown-linux-gnueabihf/13.3.0/include/stdarg.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/sys_errlist.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/stdlib.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/waitflags.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/waitstatus.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/alloca.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/stdlib-float.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/string.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/libgen.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/poll.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/sys/poll.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/poll.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/sys/ioctl.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/ioctls.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/asm/ioctls.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/asm-generic/ioctls.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/linux/ioctl.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/asm/ioctl.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/asm-generic/ioctl.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/ioctl-types.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/sys/ttydefaults.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/sys/mman.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/mman.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/sys/resource.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/resource.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/sys/stat.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/sys/time.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/sys/wait.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/termios.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/termios.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/timex.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/sys/param.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/param.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/linux/param.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/asm/param.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/asm-generic/param.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/pwd.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/grp.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/mntent.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/sys/statfs.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/statfs.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/utmp.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/utmp.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/utmpx.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/bits/utmpx.h \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/arpa/inet.h \
  include/pwd_.h \
  include/grp_.h \
  include/shadow_.h \
  include/xatonum.h \

console-tools/reset.o: $(deps_console-tools/reset.o)

$(deps_console-tools/reset.o):
