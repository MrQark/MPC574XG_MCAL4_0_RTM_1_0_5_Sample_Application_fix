/**
*   @file    Wdg_43_Instance1_LCfg.c
*   @version 1.0.5
*   @brief   AUTOSAR Wdg - contains the data exported by the watchodg module
*   @details Contains the information that will be exported by the module, as requested by Autosar.
*
*   @addtogroup  Wdg
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.0 MCAL
*   Platform             : PA
*   Peripheral           : Swt
*   Dependencies         : none
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
extern "C"{
#endif


/**
* @page misra_violations MISRA-C:2004 violations
*
* @section Wdg_43_Instance1_Lcfg_c_REF_1
*          Violates MISRA 2004 Required Rule 19.15, Precautions shall be taken in order to
*          prevent the contents of a header file being included twice. All header files are
*          protected against multiple inclusions.
*
* @section Wdg_43_Instance1_Lcfg_c_REF_2
*          Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall be checked to ensure
*          that 31 character significance and case sensitivity are supported for external identifiers.
*          The defines are validated.
* @section Wdg_43_Instance1_Lcfg_c_REF_3
*          Violates MISRA 2004 Required Rule 8.10, All declarations and definitions of objects or
*          functions at file scope shall have internal linkage unless external linkage is required.
*          The functions/variables are part of external configuration
*
* @section Wdg_43_Instance1_Lcfg_c_REF_4
*          Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements
*          and comments before '#include'. This is an Autosar requirement about
*          the memory management (Autosar requirement MEMMAP003).
*
* @section Wdg_43_Instance1_Lcfg_c_REF_5
*          Violates MISRA 2004 Required Rule 8.8, An external object or function shall be declared in
*          one and only one file. This is an callback function from a macrofile
*
* @section [global]
*          Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not rely 
*          on the significance of more than 31 characters. The used compilers use more than 31 chars 
*          for identifiers.
*
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
/**
* @file           Wdg_43_Instance1_Lcfg.c    
*/

#include "Wdg_Channel.h"
#if (WDG_TYPE == WDG_INTERNAL_MODULE)
    #include "Reg_eSys_Swt_defines.h"
#endif

#if (WDG_INSTANCE1 == STD_ON)

 
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @file           Wdg_43_Instance1_Lcfg.c    
*/
#define WDG_VENDOR_ID_LCFG_C                    43
#define WDG_AR_RELEASE_MAJOR_VERSION_LCFG_C     4
#define WDG_AR_RELEASE_MINOR_VERSION_LCFG_C     0
/** @violates @ref Wdg_43_Instance1_Lcfg_c_REF_2 MISRA 2004 Rule 1.4, The compiler/linker shall be checked to ensure
*  that 31 character significance and case sensitivity are supported for external identifiers. */
#define WDG_AR_RELEASE_REVISION_VERSION_LCFG_C  3
#define WDG_SW_MAJOR_VERSION_LCFG_C             1
#define WDG_SW_MINOR_VERSION_LCFG_C             0
#define WDG_SW_PATCH_VERSION_LCFG_C             5

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/

  /* Check if current file and Wdg header file are of the same vendor */
 #if (WDG_VENDOR_ID_LCFG_C != WDG_CHANNEL_VENDOR_ID)
     #error "Wdg_43_Instance1_Lcfg.c and Wdg_Channel.h have different vendor ids"
 #endif

 /* Check if source file and Wdg header file are of the same Autosar version */
 #if ((WDG_AR_RELEASE_MAJOR_VERSION_LCFG_C != WDG_CHANNEL_AR_RELEASE_MAJOR_VERSION) || \
      (WDG_AR_RELEASE_MINOR_VERSION_LCFG_C != WDG_CHANNEL_AR_RELEASE_MINOR_VERSION) || \
      (WDG_AR_RELEASE_REVISION_VERSION_LCFG_C != WDG_CHANNEL_AR_RELEASE_REVISION_VERSION))
     #error "AutoSar Version Numbers of Wdg_43_Instance1_Lcfg.c and Wdg_Channel.h are different"
 #endif
 /* Check if source file and Wdg header file are of the same Software version */
 #if ((WDG_SW_MAJOR_VERSION_LCFG_C != WDG_CHANNEL_SW_MAJOR_VERSION) || \
      (WDG_SW_MINOR_VERSION_LCFG_C != WDG_CHANNEL_SW_MINOR_VERSION) || \
      (WDG_SW_PATCH_VERSION_LCFG_C != WDG_CHANNEL_SW_PATCH_VERSION))
     #error "Software Version Numbers of Wdg_43_Instance1_Lcfg.c and Wdg_Channel.h are different"
 #endif

 #if (WDG_TYPE == WDG_INTERNAL_MODULE)
     /* Check if source file and Reg_eSys_Swt_defines header file are of the same vendor */
     #if (WDG_VENDOR_ID_LCFG_C != REG_ESYS_SWT_DEFINES_VENDOR_ID)
         #error "Wdg_43_Instance1_Lcfg.c and Reg_eSys_Swt_defines.h have different vendor ids"
     #endif

     /* Check if source file and Reg_eSys_Swt_defines header file are of the same Autosar version */
     #if ((WDG_AR_RELEASE_MAJOR_VERSION_LCFG_C != REG_ESYS_SWT_DEFINES_AR_RELEASE_MAJOR_VERSION) || \
          (WDG_AR_RELEASE_MINOR_VERSION_LCFG_C != REG_ESYS_SWT_DEFINES_AR_RELEASE_MINOR_VERSION) || \
          (WDG_AR_RELEASE_REVISION_VERSION_LCFG_C != REG_ESYS_SWT_DEFINES_AR_RELEASE_REVISION_VERSION))
         #error "AutoSar Version Numbers of Wdg_43_Instance1_Lcfg.c and Reg_eSys_Swt_defines.h are different"
     #endif

     /* Check if source file and Reg_eSys_Swt_defines header file are of the same Software version */
     #if ((WDG_SW_MAJOR_VERSION_LCFG_C != REG_ESYS_SWT_DEFINES_SW_MAJOR_VERSION) || \
          (WDG_SW_MINOR_VERSION_LCFG_C != REG_ESYS_SWT_DEFINES_SW_MINOR_VERSION) || \
          (WDG_SW_PATCH_VERSION_LCFG_C != REG_ESYS_SWT_DEFINES_SW_PATCH_VERSION))
         #error "Software Version Numbers of Wdg_43_Instance1_Lcfg.c and Reg_eSys_Swt_defines.h are different"
     #endif
 #endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================*/
#if (WDG_LINKTIME_SUPPORT == STD_ON)

#define WDG_START_SEC_CODE
 /**
 * @brief Include Memory mapping specification
 * @violates @ref Wdg_43_Instance1_Lcfg_c_REF_1 MISRA 2004 Required Rule 19.15, precautions to prevent the contents
 *                of a header file being included twice
 * @violates @ref Wdg_43_Instance1_Lcfg_c_REF_4 MISRA 2004 Required Rule 19.1, only preprocessor statements
 *                and comments before '#include'
 */
#include "MemMap.h"

/**
 * @brief Callback function from plugin.m
 * @violates @ref Wdg_43_Instance1_Lcfg_c_REF_5 MISRA 2004 Required Rule 8.8, An external object or function shall be declared in
 * one and only one file. This is an callback function from a macrofile
 */



#define WDG_STOP_SEC_CODE
 /**
 * @brief Include Memory mapping specification
 * @violates @ref Wdg_43_Instance1_Lcfg_c_REF_1 MISRA 2004 Required Rule 19.15, precautions to prevent the contents
 *                of a header file being included twice
 * @violates @ref Wdg_43_Instance1_Lcfg_c_REF_4 MISRA 2004 Required Rule 19.1, only preprocessor statements
 *                and comments before '#include'
 */
#include "MemMap.h"
/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/
#define WDG_START_SEC_CONFIG_DATA_UNSPECIFIED
 /**
 * @brief Include Memory mapping specification
 * @violates @ref Wdg_43_Instance1_Lcfg_c_REF_1 MISRA 2004 Required Rule 19.15, precautions to prevent the contents
 *                of a header file being included twice
 * @violates @ref Wdg_43_Instance1_Lcfg_c_REF_4 MISRA 2004 Required Rule 19.1, only preprocessor statements
 *                and comments before '#include'
 */
#include "MemMap.h"

/**
 * @brief Callback function from plugin.m
 * @violates @ref Wdg_43_Instance1_Lcfg_c_REF_5 MISRA 2004 Required Rule 8.8, An external object or function shall be declared in
 * one and only one file. This is an callback function from a macrofile
 */



/** @violates @ref Wdg_43_Instance1_Lcfg_c_REF_3  MISRA 2004 Required Rule 8.10, All declarations and definitions of objects or
 *   functions at file scope shall have internal linkage unless external linkage is required. 
 */
CONST(Wdg_Swt_ConfigType, WDG_CONST) Wdg_Swt_OffModeSettings_Instance1=
{
        (uint32)(SWT_MAP_ENABLE_8BITS_U32 | SWT_WDG_DISABLED_U32 | SWT_WDG_SOFT_LOCK_U32),
        (uint32)0x00000100,   /*Timeout config*/
        (uint32)0x00000000,  /* Window config */
        (uint32)0x00000000,  /* Initial key value*/
        (uint32)128        /* Internal clock frequency*/
};




#define WDG_STOP_SEC_CONFIG_DATA_UNSPECIFIED
 /**
 * @brief Include Memory mapping specification
 * @violates @ref Wdg_43_Instance1_Lcfg_c_REF_1 MISRA 2004 Required Rule 19.15, precautions to prevent the contents
 *                of a header file being included twice
 * @violates @ref Wdg_43_Instance1_Lcfg_c_REF_4 MISRA 2004 Required Rule 19.1, only preprocessor statements
 *                and comments before '#include'
 */
#include "MemMap.h"

#endif

/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

#endif /* #if WDG_INSTANCE1 == STD_ON*/
#ifdef __cplusplus
}
#endif

/** @} */
