cmd_libbb/makedev.o := arm-unknown-linux-gnueabihf-gcc -Wp,-MD,libbb/.makedev.o.d   -std=gnu99 -Iinclude -Ilibbb  -include include/autoconf.h -D_GNU_SOURCE -DNDEBUG -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -DBB_VER='"1.36.1"'  -Wall -Wshadow -Wwrite-strings -Wundef -Wstrict-prototypes -Wunused -Wunused-parameter -Wunused-function -Wunused-value -Wmissing-prototypes -Wmissing-declarations -Wno-format-security -Wdeclaration-after-statement -Wold-style-definition -finline-limit=0 -fno-builtin-strlen -fomit-frame-pointer -ffunction-sections -fdata-sections -fno-guess-branch-probability -funsigned-char -static-libgcc -falign-functions=1 -falign-jumps=1 -falign-labels=1 -falign-loops=1 -fno-unwind-tables -fno-asynchronous-unwind-tables -fno-builtin-printf -Oz     -DKBUILD_BASENAME='"makedev"'  -DKBUILD_MODNAME='"makedev"' -c -o libbb/makedev.o libbb/makedev.c

deps_libbb/makedev.o := \
  libbb/makedev.c \
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/stdc-predef.h \
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
  /opt/homebrew/Cellar/arm-unknown-linux-gnueabihf/13.3.0/toolchain/arm-unknown-linux-gnueabihf/sysroot/usr/include/sys/sysmacros.h \

libbb/makedev.o: $(deps_libbb/makedev.o)

$(deps_libbb/makedev.o):
