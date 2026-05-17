# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "")
  file(REMOVE_RECURSE
  "/home/ilya/drec-fpga-intro/problems/2026/09_ps7_axil_led/vitis/zynq_platform/zynq_fsbl/zynq_fsbl_bsp/include/diskio.h"
  "/home/ilya/drec-fpga-intro/problems/2026/09_ps7_axil_led/vitis/zynq_platform/zynq_fsbl/zynq_fsbl_bsp/include/ff.h"
  "/home/ilya/drec-fpga-intro/problems/2026/09_ps7_axil_led/vitis/zynq_platform/zynq_fsbl/zynq_fsbl_bsp/include/ffconf.h"
  "/home/ilya/drec-fpga-intro/problems/2026/09_ps7_axil_led/vitis/zynq_platform/zynq_fsbl/zynq_fsbl_bsp/include/sleep.h"
  "/home/ilya/drec-fpga-intro/problems/2026/09_ps7_axil_led/vitis/zynq_platform/zynq_fsbl/zynq_fsbl_bsp/include/xilffs.h"
  "/home/ilya/drec-fpga-intro/problems/2026/09_ps7_axil_led/vitis/zynq_platform/zynq_fsbl/zynq_fsbl_bsp/include/xilffs_config.h"
  "/home/ilya/drec-fpga-intro/problems/2026/09_ps7_axil_led/vitis/zynq_platform/zynq_fsbl/zynq_fsbl_bsp/include/xilrsa.h"
  "/home/ilya/drec-fpga-intro/problems/2026/09_ps7_axil_led/vitis/zynq_platform/zynq_fsbl/zynq_fsbl_bsp/include/xiltimer.h"
  "/home/ilya/drec-fpga-intro/problems/2026/09_ps7_axil_led/vitis/zynq_platform/zynq_fsbl/zynq_fsbl_bsp/include/xtimer_config.h"
  "/home/ilya/drec-fpga-intro/problems/2026/09_ps7_axil_led/vitis/zynq_platform/zynq_fsbl/zynq_fsbl_bsp/lib/libxilffs.a"
  "/home/ilya/drec-fpga-intro/problems/2026/09_ps7_axil_led/vitis/zynq_platform/zynq_fsbl/zynq_fsbl_bsp/lib/libxilrsa.a"
  "/home/ilya/drec-fpga-intro/problems/2026/09_ps7_axil_led/vitis/zynq_platform/zynq_fsbl/zynq_fsbl_bsp/lib/libxiltimer.a"
  )
endif()
