## Задание

1. Интегрировать ускоритель матричного умножения в Zynq-7000 SoC
2. Разработать драйвер, позволяющий пользовательскому приложению умножать матрицы при помощи ускорителя

## Выполнено

- Добавлен AXI-Lite IP акселератора матричного умножения 4x4:
  - `src/syst_array_axil.sv`
  - `src/axil2reg_wr.sv`
- Добавлен Vivado BD для интеграции с Zynq PS: `project.tcl`.
- Добавлен Linux platform-драйвер с интерфейсом `/dev/syst_array`: `syst_array_drv.c`.
- Добавлен user-space тест с `ioctl(SA_IOC_MATMUL)`: `test_syst_array.c`.

## Регистры акселератора

- `0x00`: `CTRL` (`bit0=start`, `bit1=done`)
- `0x10..0x4C`: матрица `A` (16 слов)
- `0x50..0x8C`: матрица `B` (16 слов)
- `0x90..0xCC`: матрица `C` (16 слов, результат)

## Сборка и запуск драйвера

- Собрать модуль: `make`.
- Собрать тест: `make test`.
- После загрузки модуля (`insmod syst_array_drv.ko`) запустить `./test_syst_array`.

## Device Tree

- Узел должен иметь `compatible = "drec-fpga-intro,syst-array"` и MMIO-ресурс IP.
