## Задание

* На основе модуля `axil2reg` сделать свой аналог AXI GPIO
* Проверить его работоспособность в системе c ZYNQ PS и 4 светодиодами под управлением Linux

## Выполнено

- Реализован AXI-Lite GPIO на базе `axil2reg`: `src/axil_gpio.sv`.
- Добавлены модули `axil2reg`: `src/axil2reg.sv`, `src/axil2reg_rd.sv`, `src/axil2reg_wr.sv`.
- Добавлен block-design проект Zynq PS + custom AXI GPIO: `project.tcl`.
- Добавлен тестовый userspace-скрипт для Linux: `blink.sh`.

## Запуск

- Сгенерировать проект: `make project`.
- Собрать битстрим и XSA: `make impl`.
- На Linux запустить `blink.sh` (адрес по умолчанию в скрипте: `0x43C00000`).
