#ifndef MUL_DEV_H
#define MUL_DEV_H

#include "hw/sysbus.h"
#include "qom/object.h"

#define TYPE_MUL_DEV "mul-dev"
OBJECT_DECLARE_SIMPLE_TYPE(MulDevState, MUL_DEV)

#define MUL_DEV_REG_MULTIPLIER0  0x00  // Register for first multiplier
#define MUL_DEV_REG_MULTIPLIER1  0x04  // Register for second multiplier
#define MUL_DEV_REG_RESULT       0x08  // Register for result (read-only)
#define MUL_DEV_REG_SIZE         0x0C  // Total size of register space

struct MulDevState {
    SysBusDevice parent_obj;
    MemoryRegion iomem;
    uint32_t multiplier0;
    uint32_t multiplier1;
    uint32_t result;
};

#endif /* MUL_DEV_H */

