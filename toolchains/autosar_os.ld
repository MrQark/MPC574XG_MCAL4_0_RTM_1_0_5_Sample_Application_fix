/*==================================================================================================

   @file        autosar_flash.ld
   @version     1.0.5


   @brief       GHS Linker Command File for Internal FLASH for MPC5746M
   @details     GHS Linker Command File for Internal FLASH for MPC5746M.
                This file contains sample code only. It is not part of the production code deliverables
   Project      : AUTOSAR 4.0 MCAL
   Platform     : PA
   Peripheral   : 
   Dependencies : Base Det Dem Port Dio Mcu Rte Wdg WdgIf CanIf LinIf FrIf EcuM

   Autosar Version       : 4.0.3
   Autosar Revision      : ASR_REL_4_0_REV_0003
   Autosar Conf. Variant :
   Software Version      : 1.0.5
   Build Version         : MPC5746C_MCAL_1_0_5_RTM_ASR_REL_4_0_REV_0003_20171214
   
   This file contains sample code only. It is not part of the production code deliverables.

   (c) Copyright 2017 NXP
   All Rights Reserved.

===================================================================================================

Note: This linker command file to be used with MPC5746M device only.
==================================================================================================*/


MEMORY {
    /* 5748G - Flash 6.0 MB - 0x00F90000 - 0x0157FFFF */
    /* 5746C - Flash 3.0 MB - 0x00F90000 - 0x0127FFFF */
    
    flash_rsvd1         : ORIGIN = 0x00F90000, LENGTH = 0x70000
    flash_memory        : ORIGIN = 0x01000000, LENGTH = 0x270000
    flash_vec           : ORIGIN = 0x01270000, LENGTH = 0x1000
    flash_rsvd2         : ORIGIN = .,          LENGTH = 0

    /* 5748G - SRAM 768KB  : 0x40000000 - 0x400BFFFF */
    /* 5746C - SRAM 512KB  : 0x40000000 - 0x4007FFFF */
    ram_rsvd1               : ORIGIN = 0x20000000, LENGTH = 0
    int_sram                : ORIGIN = 0x40000000, LENGTH = 0x60B60
    res_ram                 : ORIGIN = 0x40060B60, LENGTH = 0x60 /* a reserved ram section needed by FLS driver */
    iram_stack              : ORIGIN = 0x40060BC0, LENGTH = 0x1000
    int_timers              : ORIGIN = 0x40061BC0, LENGTH = 0x0340
    int_results             : ORIGIN = 0x40061F00, LENGTH = 0x0100
    int_sram_no_cacheable   : ORIGIN = 0x40062000, LENGTH = 0x1E000
    ram_rsvd2           : ORIGIN = .,          LENGTH = 0

}

//
// Program layout for starting in ROM, copying data to RAM,
// and continuing to execute out of ROM.
//

SECTIONS
{
//
// RAM SECTIONS
//
    /* OS stack area. This section shall be placed before application data area */
    .osstack                                    ABS : > int_sram
    .ramcode                           ALIGN(4) ABS : > int_sram   /* nedded to placing func in RAM */
    .PPC.EMB.sdata0                             ABS : > int_sram
    .PPC.EMB.sbss0                        CLEAR ABS : > .
   
    .sdabase                               ALIGN(8) : > .   
    .sdata                                          : > .
    .sbss                                           : > .
    .ossbss                                         : > .
    .data                                           : > .
    .mcal_data                                      : > .
    .bss                                            : > .
    .mcal_bss                                       : > .    
    // reserve space for .acfls_code_ram
    .acfls_code_ram                        ALIGN(4) : {. += SIZEOF(.acfls_code_rom);} > .
    // make sure the size of the reserved space is 4-bytes aligned     
    .acfls_code_ram_end                    ALIGN(4) : > .
    
    /* OS has no initialized osdata/ossdata; OS does not need clearing of osbss in startup code  */
    .osdata                                         : > .
    .osbss                                          : > .
    
    .stack                        ALIGN(16) PAD(1K) : > .
    .stack2                       ALIGN(16) PAD(1K) : > .
    .heap                         ALIGN(16)         : > .

    .mcal_bss_no_cacheable                          : > int_sram_no_cacheable
    .mcal_data_no_cacheable                         : > . 
    
                                                  
//
// ROM SECTIONS
//
    .rchwdata                                            : > flash_rsvd1
    /* Code and constant area (all code and constant sections shall be placed between .osbegincode and .osendcode sections) */
	.startup2     ALIGN(0x400)                      : >  flash_memory 
    .osbegincode                                    : > .
    .osrodata                                       : > .
    .ostext                                         : > .
    .oshook                                         : > .
    .text                                           : > .
    .vletext                                        : > .
    .mcal_text                                      : > .
    .syscall                                        : > .
    .rodata                                         : > .
    .sdata2                                         : > .
    .secinfo                                        : > .
    .fixaddr                                        : > .
    .fixtype                                        : > .


    .ROM.ramcode               ROM(.ramcode) ALIGN(0x10) : > .
    .ROM.PPC.EMB.sdata0        ROM(.PPC.EMB.sdata0) : > .
    .ROM.sdata                          ROM(.sdata) : > .
    .ROM.data                            ROM(.data) : > .
    .ROM.mcal_data                  ROM(.mcal_data) : > .
    .ROM.mcal_data_no_cacheable  ROM(.mcal_data_no_cacheable ) : > .
    .mcal_const_cfg                                 : > .
    .mcal_const                                     : > .    
    .acfls_code_rom                        ALIGN(4) : > .
    .ossrodata                                      : > .
    .appcode                                        : > .
    .osendcode                                      : > .
    /* Startup code of the second core. It shall be aligned at least on 1k */


    /* Interrupt vectors area */
    .vects        ALIGN(4K)         : > flash_vec

/*
    .isrvectbl_core                   ALIGN(0x1000) : > flash_vec
    .isrvectbl                        ALIGN(0x1000) : > .
*/
//
// These special symbols mark the bounds of RAM and ROM memory.
// They are used by the MULTI debugger.
//
    __ghs_ramstart      = MEMADDR(ram_rsvd1);
    __ghs_ramend        = MEMENDADDR(ram_rsvd2);
    __ghs_romstart      = MEMADDR(flash_rsvd1);
    __ghs_romend        = MEMENDADDR(flash_rsvd2);

    __IV_ADDR           = MEMADDR(flash_vec);
    
    INT_SRAM_START      = ADDR(int_sram);
    INT_SRAM_SIZE       = 0x80000/64;                     // Init 64 bytes at a time
    SBSS_SRAM_START     = ADDR(.sbss);
    SBSS_SRAM_SIZE      = (SIZEOF(.sbss)+3)/4;            // Init 4 bytes at a time
    BSS_SRAM_START      = ADDR(.bss);
    BSS_SRAM_SIZE       = (SIZEOF(.bss)+SIZEOF(.mcal_bss)+3)/4;   // Init 4 bytes at a time
    SDATA_RW_START      = _SDA_BASE_;
    SDATA_RO_START      = _SDA2_BASE_;
    
    BSS_NO_CACHEABLE_SRAM_START      = ADDR(.mcal_bss_no_cacheable);
    BSS_NO_CACHEABLE_SRAM_SIZE       = (SIZEOF(.mcal_bss_no_cacheable)+3)/4;

    RC_RAMCODE_SRC =  ADDR(.ROM.ramcode);
    RC_RAMCODE_DEST = ADDR(.ramcode);
    RC_RAMCODE_SIZE = (SIZEOF(.ROM.ramcode)+3) / 4;         // Copy 4 bytes at a time
    
    RC_PPC_SDATA2_SRC   = ADDR(.ROM.PPC.EMB.sdata0);
    RC_PPC_SDATA2_DEST  = ADDR(.PPC.EMB.sdata0);
    RC_PPC_SDATA2_SIZE  = (SIZEOF(.ROM.PPC.EMB.sdata0)+3)/4; // Copy 4 bytes at a time
    RC_SDATA_SRC        = ADDR(.ROM.sdata);
    RC_SDATA_DEST       = ADDR(.sdata);
    RC_SDATA_SIZE       = (SIZEOF(.ROM.sdata)+3)/4;          // Copy 4 bytes at a time
    RC_DATA_SRC         = ADDR(.ROM.data);
    RC_DATA_DEST        = ADDR(.data);
    RC_DATA_SIZE        = (SIZEOF(.ROM.data)+3)/4 + (SIZEOF(.ROM.mcal_data)+3)/4;  //Copy 4 bytes at a time

    /* generate symbols used in start-up code to init .mcal_data_no_cacheable section */
    RC_DATA_NO_CACHEABLE_SRC    = ADDR(.ROM.mcal_data_no_cacheable) ;
    RC_DATA_NO_CACHEABLE_DEST   = ADDR(.mcal_data_no_cacheable);
    RC_DATA_NO_CACHEABLE_SIZE   = (SIZEOF(.ROM.mcal_data_no_cacheable)+3) / 4;
    
/*
    __SP_INIT           = ADDR(iram_stack) + SIZEOF(iram_stack);
    __SP_END            = ADDR(iram_stack);
    __STACK_SIZE        = SIZEOF(iram_stack);
*/

    _stack_addr = addr(.stack)+sizeof(.stack);
    _stack_end  = addr(.stack);
    _heap_addr  = addr(.heap);
    _heap_end   = addr(.heap)+sizeof(.heap);


    __SP_INIT = _stack_addr;
    __SP_END  = _stack_end;
    __STACK_SIZE = sizeof(.stack);

    OS_MAIN_STACK_MAX   = _stack_addr;
    OS_MAIN_STACK_MIN   = _stack_end;

        /* Stack for second core */
    OS2_MAIN_STACK_MAX = addr(.stack2)+sizeof(.stack2);
    OS2_MAIN_STACK_MIN  = addr(.stack2);

    
    __RAM_NO_CACHEABLE_START      = ADDR(int_sram_no_cacheable);
    __RAM_NO_CACHEABLE_END        = ADDR(int_sram_no_cacheable)+0x1DFFF;
    __RAM_CACHEABLE_START         = ADDR(int_sram);
    __RAM_CACHEABLE_END           = ADDR(int_sram)+0x61FFF;

    /* Fls module access code support */    
    Fls_ACEraseRomStart         = ADDR(.acfls_code_rom);
    Fls_ACEraseRomEnd           = ADDR(.acfls_code_rom) + SIZEOF(.acfls_code_rom);
    Fls_ACEraseSize             = (SIZEOF(.acfls_code_rom)+3) / 4; /* Copy 4 bytes at a time*/

    Fls_ACWriteRomStart         = ADDR(.acfls_code_rom);
    Fls_ACWriteRomEnd           = ADDR(.acfls_code_rom) + SIZEOF(.acfls_code_rom);
    Fls_ACWriteSize             = (SIZEOF(.acfls_code_rom)+3) / 4; /* Copy 4 bytes at a time*/
    
    _ERASE_FUNC_ADDRESS_        = ADDR(.acfls_code_ram);
    _WRITE_FUNC_ADDRESS_        = ADDR(.acfls_code_ram);

    /* 2 symbols for ORTI support    */
    _OsOrtiStart      = _stack_addr;
    _OsOrtiStackStart = _stack_end;

}
