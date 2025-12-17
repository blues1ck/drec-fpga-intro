/* Linker script for bare-metal test program */

ENTRY(_start)

MEMORY
{
    /* Standard kernel load address for ARM virt machine */
    RAM : ORIGIN = 0x40010000, LENGTH = 0x10000000
}

SECTIONS
{
    .text : {
        *(.text)
    } > RAM
    
    .data : {
        *(.data)
    } > RAM
    
    .bss : {
        *(.bss)
    } > RAM
}

