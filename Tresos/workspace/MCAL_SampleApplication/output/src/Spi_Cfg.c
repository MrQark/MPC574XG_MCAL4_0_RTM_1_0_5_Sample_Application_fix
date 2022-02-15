/*====================================================================================================
*   @file    Spi_Cfg.c
*   @implements Spi_Cfg.c_Artifact
*   @version 1.0.5
*
*   @brief   AUTOSAR Spi - Pre-Compile (PC) configuration data code template.
*   @details Code template for Pre-Compile(PC) configuration file generation.
*
*   @addtogroup [SPI_MODULE]
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.0 MCAL
*   Platform             : PA
*   Peripheral           : DSPI
*   Dependencies         : 
*
*   Autosar Version      : 4.0.3
*   Autosar Revision     : ASR_REL_4_0_REV_0003
*   Autosar Conf.Variant :
*   SW Version           : 1.0.5
*   Build Version        : MPC574XG_MCAL_1_0_5_RTM_ASR_REL_4_0_REV_0003_20171215
*
*   (c) Copyright (c) 2006-2016 Freescale Semiconductor, Inc. 
*       Copyright 2017 NXP.
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/

#ifdef __cplusplus
extern "C"
{
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section [global]
* Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not rely
* on the significance of more than 31 characters.
*
* @section Spi_Cfg_c_REF_1
* Violates MISRA 2004 Advisory Rule 19.1,
* #include statements in a file should only be preceded by other preprocessor directives or comments.
* AUTOSAR imposes the specification of the sections in which certain parts of the driver must be placed.
*
* @section Spi_Cfg_c_REF_2
* Violates MISRA 2004 Required Rule 19.15,
* Precautions shall be taken in order to prevent the contents of a header file being included twice.
* This comes from the order of includes in the .c file and from include dependencies. As a safe
* approach, any file must include all its dependencies. Header files are already protected against
* double inclusions. The inclusion of MemMap.h is as per Autosar requirement MEMMAP003.
*
* @section Spi_Cfg_c_REF_3
* Violates MISRA 2004 Required Rule 1.4,
* The compiler/linker shall be checked to ensure that 31 character signifiance and case sensitivity are
* supported for external identifiers.
* This violation is due to the requirement that requests to have a file version check.
*
* @section Spi_Cfg_c_REF_4
* Violates MISRA 2004 Required Rule 8.10, All declarations and definitions of objects or functions
* at file scope shall
* have internal linkage unless external linkage is required.
* State variables may be used by LLD layer.
*
*/


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "Spi.h"
#include "Reg_eSys_DSPI.h"

#if (SPI_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
#include "Dem.h"
#endif /* SPI_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF */

#if (SPI_CONFIG_VARIANT == SPI_VARIANT_PRECOMPILE)

/*==================================================================================================
*                                         LOCAL MACROS
==================================================================================================*/

/*
* @violates @ref Spi_Cfg_c_REF_3 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/

#define SPI_MODULE_ID_CFG_C                        83
#define SPI_VENDOR_ID_CFG_C                        43
/*
* @violates @ref Spi_Cfg_c_REF_3 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
#define SPI_AR_RELEASE_MAJOR_VERSION_CFG_C         4
/*
* @violates @ref Spi_Cfg_c_REF_3 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
#define SPI_AR_RELEASE_MINOR_VERSION_CFG_C         0
/*
* @violates @ref Spi_Cfg_c_REF_3 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
#define SPI_AR_RELEASE_REVISION_VERSION_CFG_C      3
#define SPI_SW_MAJOR_VERSION_CFG_C                 1
#define SPI_SW_MINOR_VERSION_CFG_C                 0
#define SPI_SW_PATCH_VERSION_CFG_C                 5

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/


/* Check if current file and SPI header file are of the same vendor */
#if (SPI_VENDOR_ID_CFG_C != SPI_VENDOR_ID)
    #error "Spi_Cfg.c and Spi.h have different vendor ids"
#endif
/* Check if current file and SPI header file are of the same Autosar version */
#if ((SPI_AR_RELEASE_MAJOR_VERSION_CFG_C    != SPI_AR_RELEASE_MAJOR_VERSION) || \
     (SPI_AR_RELEASE_MINOR_VERSION_CFG_C    != SPI_AR_RELEASE_MINOR_VERSION) || \
     (SPI_AR_RELEASE_REVISION_VERSION_CFG_C != SPI_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Spi_Cfg.c and Spi.h are different"
#endif
/* Check if current file and SPI header file are of the same Software version */
#if ((SPI_SW_MAJOR_VERSION_CFG_C != SPI_SW_MAJOR_VERSION) || \
     (SPI_SW_MINOR_VERSION_CFG_C != SPI_SW_MINOR_VERSION) || \
     (SPI_SW_PATCH_VERSION_CFG_C != SPI_SW_PATCH_VERSION))
    #error "Software Version Numbers of Spi_Cfg.c and Spi.h are different"
#endif

/* Check if current file and Reg_eSys_DSPI.h file are of the same vendor */
#if (SPI_VENDOR_ID_CFG_C != SPI_VENDOR_ID_REGFLEX)
    #error "Spi_Cfg.c and Reg_eSys_DSPI.h have different vendor ids"
#endif
/* Check if current file and Reg_eSys_DSPI.h file are of the same Autosar version */
#if ((SPI_AR_RELEASE_MAJOR_VERSION_CFG_C    != SPI_AR_RELEASE_MAJOR_VERSION_REGFLEX) || \
     (SPI_AR_RELEASE_MINOR_VERSION_CFG_C    != SPI_AR_RELEASE_MINOR_VERSION_REGFLEX) || \
     (SPI_AR_RELEASE_REVISION_VERSION_CFG_C != SPI_AR_RELEASE_REVISION_VERSION_REGFLEX))
    #error "AutoSar Version Numbers of Spi_Cfg.c and Reg_eSys_DSPI.h are different"
#endif
/* Check if current file and Reg_eSys_DSPI.h file are of the same Software version */
#if ((SPI_SW_MAJOR_VERSION_CFG_C != SPI_SW_MAJOR_VERSION_REGFLEX) || \
     (SPI_SW_MINOR_VERSION_CFG_C != SPI_SW_MINOR_VERSION_REGFLEX) || \
     (SPI_SW_PATCH_VERSION_CFG_C != SPI_SW_PATCH_VERSION_REGFLEX))
    #error "Software Version Numbers of Spi_Cfg.c and Reg_eSys_DSPI.h are different"
#endif
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
#if (SPI_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
/* Check if current file and Dem.h file are of the same Autosar version */
#if ((SPI_AR_RELEASE_MAJOR_VERSION_CFG_C    != DEM_AR_RELEASE_MAJOR_VERSION) || \
     (SPI_AR_RELEASE_MINOR_VERSION_CFG_C    != DEM_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Spi_Cfg.c and Dem.h are different"
#endif
#endif /* SPI_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF */
#endif


/*==================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/


/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/


/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
#define SPI_START_SEC_CODE
/*
* @violates @ref Spi_Cfg_c_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_Cfg_c_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
#include "MemMap.h"



extern void Spi_Job0_EndNotification(void); /* End Notification for Job 'SpiJob_0' */
extern void Spi_Seq0_EndNotification(void); /* End Notification for Sequence 'SpiSequence_0' */


#define SPI_STOP_SEC_CODE
/*
* @violates @ref Spi_Cfg_c_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_Cfg_c_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
#include "MemMap.h"


/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
#if ((SPI_DMA_USED == STD_ON) && \
    ((SPI_LEVEL_DELIVERED == LEVEL1) || (SPI_LEVEL_DELIVERED == LEVEL2)))
    /*
    * @violates @ref Spi_Cfg_c_REF_3 The compiler/linker shall be checked to ensure that 31 character
    * signifiance and case sensitivity are supported for external identifiers.
    */
    #define SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
#else
    #define SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED
#endif /* ((SPI_DMA_USED == STD_ON) && ((SPI_LEVEL_DELIVERED == LEVEL1) ||
        (SPI_LEVEL_DELIVERED == LEVEL2))) */

/*
* @violates @ref Spi_Cfg_c_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_Cfg_c_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
#include "MemMap.h"



/*  Buffers Descriptors for EB Channels (if any) */
/* Allocate Buffers for IB Channels (if any) */
static VAR(Spi_DataType, SPI_VAR) BufferTX_PCSpiChannel_0[8];
static VAR(Spi_DataType, SPI_VAR) BufferRX_PCSpiChannel_0[8];


#if ((SPI_DMA_USED == STD_ON) && \
    ((SPI_LEVEL_DELIVERED == LEVEL1) || (SPI_LEVEL_DELIVERED == LEVEL2)))
    /*
    * @violates @ref Spi_Cfg_c_REF_3 The compiler/linker shall be checked to ensure that 31 character
    * signifiance and case sensitivity are supported for external identifiers.
    */
    #define SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED_NO_CACHEABLE
#else
    #define SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#endif /* ((SPI_DMA_USED == STD_ON) && ((SPI_LEVEL_DELIVERED == LEVEL1) ||
        (SPI_LEVEL_DELIVERED == LEVEL2))) */

/*
* @violates @ref Spi_Cfg_c_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_Cfg_c_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
#include "MemMap.h"

#define SPI_START_SEC_VAR_INIT_UNSPECIFIED
/*
* @violates @ref Spi_Cfg_c_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_Cfg_c_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
#include "MemMap.h"



/*  Buffers Descriptors for IB Channels (if any) */
static VAR(Spi_BufferDescriptorType, SPI_VAR) Buffer_PCSpiChannel_0 =
{
    BufferTX_PCSpiChannel_0,
    BufferRX_PCSpiChannel_0
};


#define SPI_STOP_SEC_VAR_INIT_UNSPECIFIED
/*
* @violates @ref Spi_Cfg_c_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_Cfg_c_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
#include "MemMap.h"
/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
#define SPI_START_SEC_CONFIG_DATA_UNSPECIFIED
/*
* @violates @ref Spi_Cfg_c_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_Cfg_c_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
#include "MemMap.h"



/* SpiChannelConfig_PC Channel Configuration of SpiDriver_0*/
static CONST(Spi_ChannelConfigType, SPI_CONST) SpiChannelConfig_PC[1] =
{
    {
        /* SpiChannel_0*/
        IB,
        (Spi_DataType)255U,
        8U,
        &Buffer_PCSpiChannel_0,
        &Spi_aSpiChannelState[0]
    }


};



/* Channel to Job Assignment */

static CONST(Spi_ChannelType, SPI_CONST) SpiJob_0_ChannelAssignment_PC[1] = {SpiConf_SpiChannel_SpiChannel_0};



static CONST(Spi_JobConfigType, SPI_CONST) SpiJobConfig_PC[1] =
{
    {
        /* SpiJob_0 */
        (Spi_ChannelType)1u,
        SpiJob_0_ChannelAssignment_PC, /* List of Channels */
        &Spi_Job0_EndNotification, /* End Notification */
        NULL_PTR, /* Start Notification */
        (sint8)0, /* Priority */
        &Spi_aSpiJobState[0], /* JobState instance */
        CSIB0, /* HWUnit index */
        DSPI_0_OFFSET, /* DSPI device HW unit offset */
       /* External Device Settings */
                SPI_SpiExternalDevice_0, /* External Device */
        {
                                                                                                
          {
            /* Normal Mode */
            (uint32)(DSPI_CTAR_CPOL_HIGH_U32 | /* Clock Polarity (Idle State) */
                            DSPI_CTAR_CPHA_LEADING_U32 | /* Clock Phase */
            DSPI_CTAR_PCSCLK_5_U32 | DSPI_CTAR_SCSCLK_8_U32 | /* TimeCs2Clk: Should=1000ns, Is=1000, Error=0.0% */
            DSPI_CTAR_PASC_5_U32 | DSPI_CTAR_SASC_8_U32 | /* TimeClk2Cs: Should=1000ns, Is=1000, Error=0.0% */
            DSPI_CTAR_PDT_1_U32 | DSPI_CTAR_SDT_256_U32 | /* TimeCs2Cs: Should=6400ns, Is=6400, Error=0.0% */
            DSPI_CTAR_PBR_2_U32 | DSPI_CTAR_SBR_2048_U32 | DSPI_CTAR_DBR_0_U32), /* Baudrate: Should=10000.0, Is=9765, Error=-2.34% */
            /* Alternate Mode */
            (uint32)(DSPI_CTAR_CPOL_HIGH_U32 | /* Clock Polarity (Idle State) */
                        DSPI_CTAR_CPHA_LEADING_U32 | /* Clock Phase */
            DSPI_CTAR_PCSCLK_5_U32 | DSPI_CTAR_SCSCLK_8_U32 | /* TimeCs2Clk: Should=1000ns, Is=1000, Error=0.0% */
            DSPI_CTAR_PASC_5_U32 | DSPI_CTAR_SASC_8_U32 | /* TimeClk2Cs: Should=1000ns, Is=1000, Error=0.0% */
            DSPI_CTAR_PDT_1_U32 | DSPI_CTAR_SDT_256_U32 | /* TimeCs2Cs: Should=6400ns, Is=6400, Error=0.0% */
            DSPI_CTAR_PBR_2_U32 | DSPI_CTAR_SBR_2048_U32 | DSPI_CTAR_DBR_0_U32 ) /* Baudrate: Should=10000.0, Is=9765, Error=-2.34% */
          },   


                (uint32)(DSPI_CMD_PCS0_U32 | /* Chip Select Pin Via Peripheral Engine*/     
                    DSPI_CMD_CONTINOUS_TRUE_U32),/* Continuous chip select */

                    (uint32)0u  /* Chip select polarity */
        }
            }

};



/* Job to Sequence Assignment */
static CONST(Spi_JobType, SPI_CONST) SpiSequence_0_JobAssignment_PC[1] = {SpiConf_SpiJob_SpiJob_0};



static CONST(Spi_SequenceConfigType, SPI_CONST) SpiSequenceConfig_PC[1] =
{
    {  /* SpiSequence_0 */

        (Spi_JobType)1u,
        SpiSequence_0_JobAssignment_PC, /* List of Jobs */
        &Spi_Seq0_EndNotification, /* End Notification */
                (uint8)FALSE /* Interruptible */
    }


};



/* DspiChannelAttributesConfig_PC Channel Attribute Configuration of SpiDriver_0*/
static CONST(Spi_Ipw_ChannelAttributesConfigType, SPI_CONST) DspiChannelAttributesConfig_PC[1] =
{
    {(uint32)(DSPI_CMD_MSB_U32 | DSPI_CMD_WIDTH_8_U32)}


};




/* DspiDeviceAttributesConfig_PC Device Attribute Configuration of SpiDriver_0*/
static CONST(Spi_Ipw_DeviceAttributesConfigType, SPI_CONST) DspiDeviceAttributesConfig_PC[1] =
{
    {  /* SpiExternalDevice_0 */
                                                                                                
        
          {
            /* Normal Mode */
            (uint32)(DSPI_CTAR_CPOL_HIGH_U32 | /* Clock Polarity (Idle State) */
                            DSPI_CTAR_CPHA_LEADING_U32 | /* Clock Phase */
            DSPI_CTAR_PCSCLK_5_U32 | DSPI_CTAR_SCSCLK_8_U32 | /* TimeCs2Clk: Should=1000ns, Is=1000, Error=0.0% */
            DSPI_CTAR_PASC_5_U32 | DSPI_CTAR_SASC_8_U32 | /* TimeClk2Cs: Should=1000ns, Is=1000, Error=0.0% */
            DSPI_CTAR_PDT_1_U32 | DSPI_CTAR_SDT_256_U32 | /* TimeCs2Cs: Should=6400ns, Is=6400, Error=0.0% */
            DSPI_CTAR_PBR_2_U32 | DSPI_CTAR_SBR_2048_U32 | DSPI_CTAR_DBR_0_U32), /* Baudrate: Should=10000.0, Is=9765, Error=-2.34% */
            /* Alternate Mode */
            (uint32)(DSPI_CTAR_CPOL_HIGH_U32 | /* Clock Polarity (Idle State) */
                        DSPI_CTAR_CPHA_LEADING_U32 | /* Clock Phase */
            DSPI_CTAR_PCSCLK_5_U32 | DSPI_CTAR_SCSCLK_8_U32 | /* TimeCs2Clk: Should=1000ns, Is=1000, Error=0.0% */
            DSPI_CTAR_PASC_5_U32 | DSPI_CTAR_SASC_8_U32 | /* TimeClk2Cs: Should=1000ns, Is=1000, Error=0.0% */
            DSPI_CTAR_PDT_1_U32 | DSPI_CTAR_SDT_256_U32 | /* TimeCs2Cs: Should=6400ns, Is=6400, Error=0.0% */
            DSPI_CTAR_PBR_2_U32 | DSPI_CTAR_SBR_2048_U32 | DSPI_CTAR_DBR_0_U32 ) /* Baudrate: Should=10000.0, Is=9765, Error=-2.34% */
          },   


                (uint32)(DSPI_CMD_PCS0_U32 | /* Chip Select Pin Via Peripheral Engine*/     
                    DSPI_CMD_CONTINOUS_TRUE_U32),/* Continuous chip select */

                    (uint32)0u  /* Chip select polarity */


    }
};




/* SpiAttributesConfig_PC Attribute Configuration of SpiDriver_0 */
static CONST(Spi_AttributesConfigType, SPI_CONST) SpiAttributesConfig_PC = {
    DspiChannelAttributesConfig_PC,
    DspiDeviceAttributesConfig_PC
};



/* Array of DSPI Unit configurations */
static CONST(Spi_HWUnitConfigType, SPI_CONST) HWUnitConfig_PC[SPI_MAX_HWUNIT] =
{

    { DSPI_0_OFFSET, (uint8)6u, (uint8)SPI_MASTER , SPI_PHYUNIT_ASYNC_U32 }
};




/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/




/*
* @violates @ref Spi_Cfg_c_REF_4 All declarations 
* and definitions of objects or functions at file scope shall have internal linkage unless external linkage is required.
*/
/* SpiDriver_0 Configuration */
CONST(Spi_ConfigType, SPI_CONST) SpiDriverConfig_PC =
{
    1u,
    0u,
    0u,
    0u,
    SpiChannelConfig_PC,
    SpiJobConfig_PC,
    SpiSequenceConfig_PC,
    &SpiAttributesConfig_PC,
    HWUnitConfig_PC
    /**
    * @brief   DEM error parameters
    */
#if (SPI_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
    ,{ (uint32)STD_OFF, (uint32)0U}/* SPI_E_HARDWARE_ERROR parameters*/ 

#endif /* SPI_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF */  


};


#define SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/*
* @violates @ref Spi_Cfg_c_REF_1 #include statements in a file should only be preceded
*        by other preprocessor directives or comments.
* @violates @ref Spi_Cfg_c_REF_2 Precautions shall be taken in order to prevent the contents
*        of a header file being included twice.
*/
#include "MemMap.h"

#endif  /* (SPI_CONFIG_VARIANT == SPI_VARIANT_PRECOMPILE) */

#ifdef __cplusplus
}
#endif

/** @} */

