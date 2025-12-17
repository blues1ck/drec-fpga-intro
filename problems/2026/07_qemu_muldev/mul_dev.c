/*
 * QEMU Multiplier Device
 * 
 * A simple MMIO device that multiplies two 32-bit numbers.
 * Register map:
 *   0x00: Multiplier 0 (write-only)
 *   0x04: Multiplier 1 (write-only)
 *   0x08: Result (read-only)
 */

#include "qemu/osdep.h"
#include "hw/sysbus.h"
#include "qemu/module.h"
#include "qom/object.h"
#include "hw/qdev-properties.h"
#include "exec/address-spaces.h"
#include "hw/misc/mul_dev.h"

static uint64_t mul_dev_read(void *opaque, hwaddr addr, unsigned int size)
{
    MulDevState *s = (MulDevState *)opaque;
    uint64_t val = 0;

    switch (addr) {
    case MUL_DEV_REG_MULTIPLIER0:
        /* Multiplier 0 is write-only, reading returns 0 */
        val = 0;
        break;
    case MUL_DEV_REG_MULTIPLIER1:
        /* Multiplier 1 is write-only, reading returns 0 */
        val = 0;
        break;
    case MUL_DEV_REG_RESULT:
        /* Compute and return the multiplication result */
        s->result = s->multiplier0 * s->multiplier1;
        val = s->result;
        break;
    default:
        /* Unmapped address, return 0 */
        val = 0;
        break;
    }

    return val;
}

static void mul_dev_write(void *opaque, hwaddr addr, uint64_t val, unsigned int size)
{
    MulDevState *s = (MulDevState *)opaque;

    switch (addr) {
    case MUL_DEV_REG_MULTIPLIER0:
        /* Store first multiplier */
        s->multiplier0 = (uint32_t)val;
        /* Result is computed on read, but we invalidate it here */
        s->result = s->multiplier0 * s->multiplier1;
        break;
    case MUL_DEV_REG_MULTIPLIER1:
        /* Store second multiplier */
        s->multiplier1 = (uint32_t)val;
        /* Result is computed on read, but we invalidate it here */
        s->result = s->multiplier0 * s->multiplier1;
        break;
    case MUL_DEV_REG_RESULT:
        /* Result register is read-only, ignore writes */
        break;
    default:
        /* Unmapped address, ignore */
        break;
    }
}

static const MemoryRegionOps mul_dev_ops = {
    .read = mul_dev_read,
    .write = mul_dev_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .valid = {
        .min_access_size = 4,
        .max_access_size = 4,
    },
};

static void mul_dev_realize(DeviceState *dev, Error **errp)
{
    MulDevState *s = MUL_DEV(dev);
    SysBusDevice *sbd = SYS_BUS_DEVICE(dev);

    memory_region_init_io(&s->iomem, OBJECT(s), &mul_dev_ops, s,
                          TYPE_MUL_DEV, MUL_DEV_REG_SIZE);
    sysbus_init_mmio(sbd, &s->iomem);

    /* Initialize multipliers to zero */
    s->multiplier0 = 0;
    s->multiplier1 = 0;
    s->result = 0;
}

static void mul_dev_reset(DeviceState *dev)
{
    MulDevState *s = MUL_DEV(dev);

    s->multiplier0 = 0;
    s->multiplier1 = 0;
    s->result = 0;
}

static void mul_dev_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->realize = mul_dev_realize;
    dc->reset = mul_dev_reset;
    set_bit(DEVICE_CATEGORY_MISC, dc->categories);
}

static const TypeInfo mul_dev_info = {
    .name          = TYPE_MUL_DEV,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MulDevState),
    .class_init    = mul_dev_class_init,
};

static void mul_dev_register_types(void)
{
    type_register_static(&mul_dev_info);
}

type_init(mul_dev_register_types);

