/**
*   @file    Lin_PBcfg.c
*   @implements Lin_PBcfg.c_Artifact
*   @version 1.0.5
*
*   @brief   AUTOSAR Lin - Brief file description (one line).
*   @details Detailed file description (can be multiple lines).
*
*   @addtogroup LIN
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.0 MCAL
*   Platform             : PA
*   Peripheral           : LINFlex
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
* on the significance of more than 31 characters. The used compilers use more than 31 chars for
* identifiers.
*
* @section Lin_PBcfg_c_REF_1
* Violates MISRA 2004 Required Rule 19.15, Precautions shall be taken
* in order to prevent the contents of a header file being included twice.
* This comes from the order of includes in the .c file and from
* include dependencies. As a safe approach, any file must include all
* its dependencies. Header files are already protected against double
* inclusions. The inclusion of MemMap.h is as per Autosar
* requirement MEMMAP003.
*
* @section Lin_PBcfg_c_REF_2
* Violates MISRA 2004 Advisory Rule 19.1, #include statements in a
* file should only be preceded by other preprocessor directives or
* comments. AUTOSAR imposes the specification of the sections in which
* certain parts of the driver must be placed.
*
* @section Lin_PBcfg_c_REF_3
* Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall
* be checked to ensure that 31 character signifiance and
* case sensitivity are supported for external identifiers.
* This violation is due to the requirement that requests to have
* a file version check.
*
* @section Lin_PBcfg_c_REF_4
* Violates MISRA 2004 Required Rule 9.2, "Lin_ChannelConfigType"
* structures are generated as independent structure and not
* as an array of structures.
* So there should not be braces in "Lin_ConfigType" structure.
*
* @section Lin_PBcfg_c_REF_6
* Violates MISRA 2004 Required Rule 8.10,
* All declarations and definitions of objects or functions at file scope shall have
* internal linkage unless external linkage is required.
* Structure shall be public as it is used by Reg_eSys_DSPI.h which may be sed outside DSPI module.
*
*/


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Std_Types.h"
#include "Lin_Cfg.h"

#if (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
#include "Dem.h"
#endif /* (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF) */

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @file           Lin_PBcfg.c
*/
#define LIN_VENDOR_ID_PBCFG_C                      43
/*
* @violates @ref Lin_PBcfg_c_REF_3 The compiler/linker shall be checked to
* ensure that 31 character signifiance and case sensitivity are supported for
* external identifiers.
*/
#define LIN_AR_RELEASE_MAJOR_VERSION_PBCFG_C       4
/*
* @violates @ref Lin_PBcfg_c_REF_3 The compiler/linker shall be checked to
* ensure that 31 character signifiance and case sensitivity are supported for
* external identifiers.
*/
#define LIN_AR_RELEASE_MINOR_VERSION_PBCFG_C       0
/*
* @violates @ref Lin_PBcfg_c_REF_3 The compiler/linker shall be checked to
* ensure that 31 character signifiance and case sensitivity are supported for
* external identifiers.
*/
#define LIN_AR_RELEASE_REVISION_VERSION_PBCFG_C    3
#define LIN_SW_MAJOR_VERSION_PBCFG_C               1
#define LIN_SW_MINOR_VERSION_PBCFG_C               0
#define LIN_SW_PATCH_VERSION_PBCFG_C               5

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and LIN header file are of the same vendor */
#if (LIN_VENDOR_ID_PBCFG_C != LIN_VENDOR_ID_CFG)
    #error "Lin_PBcfg.c and Lin_Cfg.h have different vendor ids"
#endif
/* Check if current file and LIN header file are of the same Autosar version */
#if ((LIN_AR_RELEASE_MAJOR_VERSION_PBCFG_C    != LIN_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (LIN_AR_RELEASE_MINOR_VERSION_PBCFG_C    != LIN_AR_RELEASE_MINOR_VERSION_CFG) || \
     (LIN_AR_RELEASE_REVISION_VERSION_PBCFG_C != LIN_AR_RELEASE_REVISION_VERSION_CFG) \
    )
    #error "AutoSar Version Numbers of Lin_PBcfg.c and Lin_Cfg.h are different"
#endif
/* Check if current file and LIN header file are of the same Software version */
#if ((LIN_SW_MAJOR_VERSION_PBCFG_C != LIN_SW_MAJOR_VERSION_CFG) || \
     (LIN_SW_MINOR_VERSION_PBCFG_C != LIN_SW_MINOR_VERSION_CFG) || \
     (LIN_SW_PATCH_VERSION_PBCFG_C != LIN_SW_PATCH_VERSION_CFG) \
    )
    #error "Software Version Numbers of Lin_PBcfg.c and Lin_Cfg.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
  #if ((LIN_AR_RELEASE_MAJOR_VERSION_PBCFG_C != STD_AR_RELEASE_MAJOR_VERSION) || \
       (LIN_AR_RELEASE_MINOR_VERSION_PBCFG_C != STD_AR_RELEASE_MINOR_VERSION) \
      )
    #error "AutoSar Version Numbers of Lin_PBCfg.c and Std_Types.h are different"
  #endif
  #if (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
    /* Check if current file and Dem.h header file are of the same Autosar version */
    #if ((LIN_AR_RELEASE_MAJOR_VERSION_PBCFG_C != DEM_AR_RELEASE_MAJOR_VERSION) || \
         (LIN_AR_RELEASE_MINOR_VERSION_PBCFG_C != DEM_AR_RELEASE_MINOR_VERSION) \
        )
        #error "AutoSar Version Numbers of Lin_PBcfg.c and Dem.h are different"
    #endif
  #endif /* (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF) */
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
#define LIN_START_SEC_CONFIG_DATA_UNSPECIFIED
/**
* @violates @ref Lin_PBcfg_c_REF_1 #include statements in a file should
* only be preceded by other preprocessor directives or comments.
*/
#include "MemMap.h"


#if (LIN_PRECOMPILE_SUPPORT == STD_OFF)


/**
* @brief          Configuration for Lin Channel 0 - Configuration:
*                 LinGlobalConfig_0.
*
* @api
*/
/*
* @violates @ref Lin_PBcfg_c_REF_6 All declarations and definitions of objects or functions at file scope shall have internal linkage unless external linkage is required.
*/
CONST(Lin_ChannelConfigType,LIN_CONST) Lin_LinChannel_0_C0=
{
    (uint8)0U,     /* Lin Channel ID */
    LinHWCh_1,            /* Lin Hardware channel*/
    
     (uint8)STD_ON,              /*Enable Dual_Clock_Mode */
    0x0002080dU,               /* Baudrate 9600 ; Baudrate difference = 0.8333333333333712 */
    0x00010407U,               /* Alternate Baudrate 9600 ; Baudrate difference = 0.4166666666666856 */

    (uint16)STD_OFF,               /* Wakeup support disabled */
    (EcuM_WakeupSourceType)((uint32)1U<<(uint32)0U), /* Wakeup Source transmitted to the Ecu State Manager (used only when Wakeup Support is true) */
    0x03U                /* BreakLength = BL_13 bits */
};
/*
* @section Lin_PBcfg_c_REF_4
* Violates MISRA 2004 Required Rule 9.2, "Lin_ChannelConfigType"
* structures are generated as independent structure and not
* as an array of structures.
* So there should not be braces in "Lin_ConfigType" structure.
*/


/**
* @brief          Lin Configuration data for LinGlobalConfig_0.
*
* @api
*/
/*
* @violates @ref Lin_PBcfg_c_REF_6 All declarations and definitions of objects or functions at
* file scope shall have internal linkage unless external linkage is required.
*/
CONST(Lin_ConfigType,LIN_CONST)LinGlobalConfig_0 =
{
    /**
     * @brief   DEM error parameters
     */
#if (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)

    { (uint32)STD_ON, DemConf_DemEventParameter_LIN_E_TIMEOUT}, /* LIN_E_TIMEOUT parameters*/
                
#endif /* LIN_DISABLE_DEM_REPORT_ERROR_STATUS== STD_OFF */

     /**
     * @brief   Number of configured hardware channels
     */
    1U,
    {

        /**
        * @brief   Configuration for Lin Channel 0.
        */
                
        &Lin_LinChannel_0_C0
                    
    }
};

#endif /* LIN_PRECOMPILE_SUPPORT == STD_OFF */


#define LIN_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/**
* @violates @ref Lin_PBcfg_c_REF_1 #include statements in a file should
* only be preceded by other preprocessor directives or comments.
* @violates @ref Lin_PBcfg_c_REF_2 Precautions shall be taken in
*                order to prevent the contents of a header file being
*                included twice.
*/
#include "MemMap.h"

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/


/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/



#ifdef __cplusplus
}
#endif

/** @} */
