# Быстрый старт: Linux с mul-dev

## Что нужно

1. **QEMU с mul-dev** — уже собран в `~/qemu/build/qemu-system-arm`
2. **ARM кросс-компилятор** — для сборки программ
3. **Linux kernel для ARM** — ядро для загрузки
4. **BusyBox** — минимальная userland

## Самый простой способ (с готовыми бинарниками)

### 1. Скачать готовые файлы

```bash
cd 07_linux_muldev
mkdir -p build

# Скачать готовый busybox для ARM (статический)
curl -L -o build/busybox \
  https://busybox.net/downloads/binaries/1.35.0-arm-linux-musleabi/busybox
chmod +x build/busybox
```

### 2. Для ядра Linux есть варианты:

**Вариант A: Использовать QEMU с опцией -kernel для ELF**
```bash
# Наш bare-metal test.elf из 07_qemu_muldev тоже работает!
cd ../07_qemu_muldev
make run-monitor
```

**Вариант B: Собрать минимальное ядро**
См. `BUILD_KERNEL.md`

**Вариант C: Использовать buildroot**
```bash
git clone https://github.com/buildroot/buildroot.git
cd buildroot
make qemu_arm_vexpress_defconfig
make
# Ядро: output/images/zImage
```

## Использование devmem (в BusyBox)

Когда Linux загрузится, можно использовать `devmem`:

```bash
# Записать множители
devmem 0x0b000000 32 5      # multiplier0 = 5
devmem 0x0b000004 32 7      # multiplier1 = 7

# Прочитать результат
devmem 0x0b000008 32        # result = 35 (0x23)
```

## Структура initramfs

```
initramfs/
├── bin/
│   ├── busybox        # Статический BusyBox
│   └── sh -> busybox  # Симлинки на busybox
├── sbin/
├── dev/               # devtmpfs монтируется сюда
├── proc/              # procfs
├── sys/               # sysfs
├── mul_test           # Наша тестовая программа
└── init               # Скрипт инициализации
```

## init скрипт

```bash
#!/bin/sh
mount -t proc proc /proc
mount -t sysfs sysfs /sys
mount -t devtmpfs devtmpfs /dev

# Тест mul-dev через devmem
devmem 0x0b000000 32 5
devmem 0x0b000004 32 7
echo "Result: $(devmem 0x0b000008 32)"

exec /bin/sh
```

## Запуск

```bash
~/qemu/build/qemu-system-arm -M virt -cpu cortex-a15 -m 256M \
    -kernel zImage \
    -initrd initramfs.cpio.gz \
    -append "console=ttyAMA0 rdinit=/init" \
    -nographic
```

## Проверка без полного Linux

Можно проверить mul-dev без полноценного Linux — через QEMU monitor:

```bash
cd ../07_qemu_muldev
make run-monitor

# В QEMU monitor:
(qemu) x/3wx 0x0b000000
# Покажет: 0x00000000 0x00000000 0x00000023
```

Это подтверждает, что устройство работает. Linux нужен только для удобного доступа из userspace.

