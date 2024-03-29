/**
* @file    Port_PBcfg.c
* @implements Port_PBcfg.c_Artifact
*
* @version 1.0.5
* @brief   AUTOSAR Port - PORT driver configuration.
* @details This file contains the PORT driver postbuild configuration.
*
* @addtogroup  Port
* @{
*/
/*=================================================================================================
*   Project              : AUTOSAR 4.0 MCAL
*   Platform             : PA
*   Peripheral           : SIUL2
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
=================================================================================================*/
/*=================================================================================================
=================================================================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section PORT_PBCFG_REF_1
* Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements and comments before #include'. 
* MemMap.h is included after each section define in order to set the current memory section as defined by AUTOSAR.
*
* @section PORT_PBCFG_REF_2
* Violates MISRA 2004 Required Rule 19.15, Precautions shall be taken in order to prevent the
* contents of a header being included twice.
* This violation is not fixed since the inclusion of MemMap.h is as per Autosar requirement MEMMAP003.
*
* @section PORT_PBCFG_REF_3
* Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall be checked to ensure that 31
* character significance and case sensitivity are supported for external identifiers. 
* The used compilers/linkers allow more than 31 characters significance for external identifiers.
*
* @section PORT_PBCFG_REF_4
* Violates MISRA 2004 Required Rule 8.10, All declarations and definitions of objects or 
* functions at file scope shall have internal linkage unless external linkage is required. 
* This warning appears when defining functions or objects that will be used by the upper layers.
*
* @section [global]
* Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not rely 
* on the significance of more than 31 characters. The used compilers use more than 31 chars for
* identifiers.
*/

/*=================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
=================================================================================================*/

#include "Port.h"

#if (STD_OFF == PORT_PRECOMPILE_SUPPORT)
    

/*=================================================================================================
*                              SOURCE FILE VERSION INFORMATION
=================================================================================================*/
/**
* @brief Parameters that shall be published within the Port driver header file and also in the
*        module's description file
* @details The integration of incompatible files shall be avoided.
*
*/
#define PORT_VENDOR_ID_PBCFG_C                       43
/*
* @violates @ref PORT_PBCFG_REF_3 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
#define PORT_AR_RELEASE_MAJOR_VERSION_PBCFG_C        4
/*
* @violates @ref PORT_PBCFG_REF_3 The compiler/linker shall be checked to ensure that 31 character
* signifiance and case sensitivity are supported for external identifiers.
*/
#define PORT_AR_RELEASE_MINOR_VERSION_PBCFG_C        0

/** @violates @ref PORT_PBCFG_REF_3 MISRA 2004 Rule 1.4, The compiler/linker shall be checked to
*   ensure that 31 character significance and case sensitivity are supported for external
*   identifiers.
*/
#define PORT_AR_RELEASE_REVISION_VERSION_PBCFG_C     3
#define PORT_SW_MAJOR_VERSION_PBCFG_C                1
#define PORT_SW_MINOR_VERSION_PBCFG_C                0
#define PORT_SW_PATCH_VERSION_PBCFG_C                5

/*=================================================================================================
*                                     FILE VERSION CHECKS
=================================================================================================*/

/* Check if Port_PBcfg.c and Port.h are of the same vendor */
#if (PORT_VENDOR_ID_PBCFG_C != PORT_VENDOR_ID)
    #error "Port_PBcfg.c and Port.h have different vendor ids"
#endif
/* Check if Port_PBcfg.c and Port.h are of the same Autosar version */
#if ((PORT_AR_RELEASE_MAJOR_VERSION_PBCFG_C    != PORT_AR_RELEASE_MAJOR_VERSION) || \
     (PORT_AR_RELEASE_MINOR_VERSION_PBCFG_C    != PORT_AR_RELEASE_MINOR_VERSION) || \
     (PORT_AR_RELEASE_REVISION_VERSION_PBCFG_C != PORT_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Port_PBcfg.c and Port.h are different"
#endif

/* Check if Port_PBcfg.c and Port.h are of the same software version */
#if ((PORT_SW_MAJOR_VERSION_PBCFG_C != PORT_SW_MAJOR_VERSION) || \
     (PORT_SW_MINOR_VERSION_PBCFG_C != PORT_SW_MINOR_VERSION) || \
     (PORT_SW_PATCH_VERSION_PBCFG_C != PORT_SW_PATCH_VERSION)    \
    )
    #error "Software Version Numbers of Port_PBcfg.c and Port.h are different"
#endif

/*=================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=================================================================================================*/


/*=================================================================================================
*                                       LOCAL MACROS
=================================================================================================*/


/*=================================================================================================
*                                      LOCAL CONSTANTS
=================================================================================================*/

#define PORT_START_SEC_CONFIG_DATA_16
/** @violates @ref PORT_PBCFG_REF_2 Repeated include file MemMap.h */
#include "MemMap.h"


#if (PORT_MAX_UNUSED_PADS_0_U16 != 0U)

static CONST(uint16, PORT_CONST) Port_au16NoUnUsedPadsArrayDefault_0[PORT_MAX_UNUSED_PADS_0_U16]=
{
    (uint16)0,
    (uint16)2,
    (uint16)3,
    (uint16)4,
    (uint16)5,
    (uint16)6,
    (uint16)7,
    (uint16)8,
    (uint16)9,
    (uint16)10,
    (uint16)11,
    (uint16)16,
    (uint16)17,
    (uint16)18,
    (uint16)19,
    (uint16)21,
    (uint16)22,
    (uint16)23,
    (uint16)24,
    (uint16)25,
    (uint16)26,
    (uint16)27,
    (uint16)28,
    (uint16)29,
    (uint16)30,
    (uint16)31,
    (uint16)34,
    (uint16)35,
    (uint16)36,
    (uint16)37,
    (uint16)42,
    (uint16)43,
    (uint16)44,
    (uint16)45,
    (uint16)46,
    (uint16)47,
    (uint16)48,
    (uint16)49,
    (uint16)50,
    (uint16)51,
    (uint16)52,
    (uint16)53,
    (uint16)54,
    (uint16)55,
    (uint16)56,
    (uint16)57,
    (uint16)58,
    (uint16)59,
    (uint16)60,
    (uint16)61,
    (uint16)62,
    (uint16)63,
    (uint16)64,
    (uint16)65,
    (uint16)66,
    (uint16)67,
    (uint16)68,
    (uint16)69,
    (uint16)70,
    (uint16)71,
    (uint16)72,
    (uint16)73,
    (uint16)74,
    (uint16)75,
    (uint16)76,
    (uint16)77,
    (uint16)78,
    (uint16)79,
    (uint16)80,
    (uint16)81,
    (uint16)82,
    (uint16)83,
    (uint16)84,
    (uint16)85,
    (uint16)86,
    (uint16)87,
    (uint16)88,
    (uint16)89,
    (uint16)90,
    (uint16)91,
    (uint16)92,
    (uint16)93,
    (uint16)94,
    (uint16)95,
    (uint16)96,
    (uint16)97,
    (uint16)98,
    (uint16)102,
    (uint16)103,
    (uint16)104,
    (uint16)105,
    (uint16)106,
    (uint16)107,
    (uint16)108,
    (uint16)109,
    (uint16)110,
    (uint16)111,
    (uint16)112,
    (uint16)113,
    (uint16)114,
    (uint16)115,
    (uint16)116,
    (uint16)117,
    (uint16)118,
    (uint16)119,
    (uint16)120,
    (uint16)123,
    (uint16)124,
    (uint16)125,
    (uint16)126,
    (uint16)127,
    (uint16)128,
    (uint16)129,
    (uint16)130,
    (uint16)131,
    (uint16)132,
    (uint16)133,
    (uint16)134,
    (uint16)135,
    (uint16)136,
    (uint16)137,
    (uint16)138,
    (uint16)139,
    (uint16)140,
    (uint16)141,
    (uint16)142,
    (uint16)143,
    (uint16)144,
    (uint16)145,
    (uint16)146,
    (uint16)147,
    (uint16)148
};
#endif

#define PORT_STOP_SEC_CONFIG_DATA_16
/**
* @violates @ref PORT_PBCFG_REF_1 only preprocessor statements and comments before '#include'
* @violates @ref PORT_PBCFG_REF_2 Repeated include file MemMap.h
*/
#include "MemMap.h"


#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
/** @violates @ref PORT_PBCFG_REF_1 only preprocessor statements and comments before '#include' */
/** @violates @ref PORT_PBCFG_REF_2 Repeated include file MemMap.h */
#include "MemMap.h"


/**
 * @brief Default Configuration for Pins not initialized
 */

static CONST(Port_Siul2_UnUsedPinConfigType, PORT_CONST) Port_UnUsedPin_0 =
{
    /**
    * @note: Configuration of Default pin
    */
    (uint32)0x00080000, (uint8)0
    
};

/**
* @brief Pin default configuration data for configPB_0
*/
static CONST(Port_Siul2_PinConfigType, PORT_CONST) Port_aPinConfigDefaultPB_0[PORT_MAX_CONFIGURED_PADS_0_U16]=
{
    {(Port_InternalPinIdType)15, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)FALSE},
    {(Port_InternalPinIdType)38, (uint32)0x00000001, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)FALSE},
    {(Port_InternalPinIdType)13, (uint32)0x10000001, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)FALSE},
    {(Port_InternalPinIdType)12, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)FALSE},
    {(Port_InternalPinIdType)39, (uint32)0x00080000, (uint8)1, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)FALSE},
    {(Port_InternalPinIdType)1, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)TRUE, (boolean)FALSE, (boolean)FALSE},
    {(Port_InternalPinIdType)40, (uint32)0x00000001, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)FALSE},
    {(Port_InternalPinIdType)41, (uint32)0x00080000, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)FALSE},
    {(Port_InternalPinIdType)99, (uint32)0x02000000, (uint8)1, (uint8)1, (boolean)TRUE, (boolean)FALSE, (boolean)FALSE},
    {(Port_InternalPinIdType)100, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)FALSE, (boolean)FALSE},
    {(Port_InternalPinIdType)14, (uint32)0x00000003, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)FALSE},
    {(Port_InternalPinIdType)101, (uint32)0x02000000, (uint8)0, (uint8)1, (boolean)TRUE, (boolean)FALSE, (boolean)FALSE},
    {(Port_InternalPinIdType)20, (uint32)0x00400000, (uint8)2, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)FALSE},
    {(Port_InternalPinIdType)32, (uint32)0x10080001, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)FALSE},
    {(Port_InternalPinIdType)33, (uint32)0x10000001, (uint8)0, (uint8)1, (boolean)FALSE, (boolean)FALSE, (boolean)FALSE},
    {(Port_InternalPinIdType)121, (uint32)0x00080001, (uint8)0, (uint8)0, (boolean)FALSE, (boolean)FALSE, (boolean)FALSE},
    {(Port_InternalPinIdType)122, (uint32)0x12080001, (uint8)0, (uint8)2, (boolean)FALSE, (boolean)FALSE, (boolean)FALSE}
};

/**
* @brief Pad selection default configuration for configPB_0
*/
static CONST(Port_Siul2_PadSelConfigType, PORT_CONST) Port_aPadSelConfigDefaultPB_0[PORT_NMBR_INMUX_REGS_U16]=
{
    (uint32)0x00000000,
    (uint32)0x00000003,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000000,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000000,
    (uint32)0x00000001,
    (uint32)0x00000002,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000001,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0xFFFFFFFFU,
    (uint32)0xFFFFFFFFU,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000,
    (uint32)0x00000000
    ,(uint32)0x00000000
};

#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/**
* @violates @ref PORT_PBCFG_REF_1 only preprocessor statements and comments before '#include'
* @violates @ref PORT_PBCFG_REF_2 Repeated include file MemMap.h
*/
#include "MemMap.h"
/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/


/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/

#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
/** @violates @ref PORT_PBCFG_REF_1 only preprocessor statements and comments before '#include' */
/** @violates @ref PORT_PBCFG_REF_2 Repeated include file MemMap.h */
#include "MemMap.h"


/**
* @brief This table contains all the Configured Port Pin parameters and the
*        number of Port Pins configured by the tool for the post-build mode PortConfigSet_0
* @violates @ref PORT_PBCFG_REF_4 Violates MISRA 2004 Required Rule 8.10
*/
CONST(Port_ConfigType, PORT_CONST) PortConfigSet_0 =
{
    PORT_MAX_CONFIGURED_PADS_0_U16,
    PORT_MAX_UNUSED_PADS_0_U16,
 
#if (PORT_MAX_UNUSED_PADS_0_U16 != 0U)
    Port_au16NoUnUsedPadsArrayDefault_0,
#else
    NULL_PTR,
#endif
    &Port_UnUsedPin_0,
    Port_aPinConfigDefaultPB_0,
    Port_aPadSelConfigDefaultPB_0
};
#if (STD_ON == PORT_SET_PIN_MODE_API)
/**
* @brief Port INOUT settings data
*/
CONST(Port_InoutSettingType,PORT_CONST) Port_aPadFunctInoutMuxSettings[PORT_INOUT_TABLE_NUM_ENTRIES_U16] = 
{

  /* Inout settings for pad PORT0:      {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_0_X_IN_OUT input func */
  {0U, 17U, 0U, 2U}, 
  /* EMIOS0_E0UC_13_H_IN_OUT input func */
  {0U, 19U, 13U, 2U}, 
  /* Inout settings for pad PORT1:      {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_1_G_IN_OUT input func */
  {1U, 17U, 1U, 2U}, 
  /* Inout settings for pad PORT2:      {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_2_G_IN_OUT input func */
  {2U, 17U, 2U, 2U}, 
  /* Inout settings for pad PORT3:      {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_3_G_IN_OUT input func */
  {3U, 17U, 3U, 2U}, 
  /* Inout settings for pad PORT4:      {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_4_G_IN_OUT input func */
  {4U, 17U, 4U, 2U}, 
  /* EMIOS0_E0UC_24_X_IN_OUT input func */
  {4U, 19U, 24U, 5U}, 
  /* Inout settings for pad PORT5:      {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_5_G_IN_OUT input func */
  {5U, 17U, 5U, 2U}, 
  /* Inout settings for pad PORT6:      {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_6_G_IN_OUT input func */
  {6U, 17U, 6U, 2U}, 
  /* Inout settings for pad PORT7:      {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_7_G_IN_OUT input func */
  {7U, 17U, 7U, 2U}, 
  /* Inout settings for pad PORT8:      {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_8_X_IN_OUT input func */
  {8U, 17U, 8U, 2U}, 
  /* EMIOS0_E0UC_14_H_IN_OUT input func */
  {8U, 18U, 14U, 2U}, 
  /* Inout settings for pad PORT9:      {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_9_H_IN_OUT input func */
  {9U, 17U, 9U, 2U}, 
  /* Inout settings for pad PORT10:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_10_H_IN_OUT input func */
  {10U, 17U, 10U, 2U}, 
  /* IIC_0_SDA0_IN_OUT input func */
  {10U, 18U, 266U, 1U}, 
  /* Inout settings for pad PORT11:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_11_H_IN_OUT input func */
  {11U, 17U, 11U, 2U}, 
  /* IIC_0_SCL0_IN_OUT input func */
  {11U, 18U, 265U, 1U}, 
  /* Inout settings for pad PORT12:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_28_Y_IN_OUT input func */
  {12U, 17U, 28U, 2U}, 
  /* EMIOS0_E0UC_26_Y_IN_OUT input func */
  {12U, 19U, 26U, 4U}, 
  /* Inout settings for pad PORT13:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_29_Y_IN_OUT input func */
  {13U, 18U, 29U, 2U}, 
  /* EMIOS0_E0UC_25_Y_IN_OUT input func */
  {13U, 19U, 25U, 4U}, 
  /* Inout settings for pad PORT14:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* DSPI_0_dSCLK_IN_OUT input func */
  {14U, 17U, 289U, 1U}, 
  /* EMIOS0_E0UC_0_X_IN_OUT input func */
  {14U, 19U, 0U, 3U}, 
  /* EMIOS0_E0UC_23_X_IN_OUT input func */
  {14U, 20U, 23U, 5U}, 
  /* Inout settings for pad PORT15:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* DSPI_0_dSCLK_IN_OUT input func */
  {15U, 18U, 289U, 2U}, 
  /* EMIOS0_E0UC_1_G_IN_OUT input func */
  {15U, 19U, 1U, 3U}, 
  /* EMIOS0_E0UC_21_Y_IN_OUT input func */
  {15U, 20U, 21U, 3U}, 
  /* Inout settings for pad PORT16:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_30_Y_IN_OUT input func */
  {16U, 18U, 30U, 2U}, 
  /* EMIOS0_E0UC_4_G_IN_OUT input func */
  {16U, 20U, 4U, 5U}, 
  /* Inout settings for pad PORT17:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_31_Y_IN_OUT input func */
  {17U, 17U, 31U, 2U}, 
  /* EMIOS0_E0UC_5_G_IN_OUT input func */
  {17U, 18U, 5U, 4U}, 
  /* Inout settings for pad PORT18:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* IIC_0_SDA0_IN_OUT input func */
  {18U, 18U, 266U, 2U}, 
  /* EMIOS0_E0UC_30_Y_IN_OUT input func */
  {18U, 19U, 30U, 3U}, 
  /* Inout settings for pad PORT19:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_31_Y_IN_OUT input func */
  {19U, 17U, 31U, 3U}, 
  /* IIC_0_SCL0_IN_OUT input func */
  {19U, 18U, 265U, 2U}, 
  /* EMIOS0_E0UC_8_X_IN_OUT input func */
  {19U, 19U, 8U, 3U}, 
  /* Inout settings for pad PORT26:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* SAI0_SAI0_SYNC_IN_OUT input func */
  {26U, 20U, 490U, 1U}, 
  /* EMIOS0_E0UC_29_Y_IN_OUT input func */
  {26U, 21U, 29U, 4U}, 
  /* Inout settings for pad PORT27:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_3_G_IN_OUT input func */
  {27U, 17U, 3U, 3U}, 
  /* Inout settings for pad PORT28:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_4_G_IN_OUT input func */
  {28U, 17U, 4U, 3U}, 
  /* Inout settings for pad PORT29:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_5_G_IN_OUT input func */
  {29U, 17U, 5U, 3U}, 
  /* Inout settings for pad PORT30:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_6_G_IN_OUT input func */
  {30U, 17U, 6U, 3U}, 
  /* Inout settings for pad PORT31:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_7_G_IN_OUT input func */
  {31U, 17U, 7U, 3U}, 
  /* Inout settings for pad PORT34:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* DSPI_1_dSCLK_IN_OUT input func */
  {34U, 17U, 292U, 1U}, 
  /* Inout settings for pad PORT36:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_31_Y_IN_OUT input func */
  {36U, 17U, 67U, 2U}, 
  /* Inout settings for pad PORT38:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_28_Y_IN_OUT input func */
  {38U, 18U, 64U, 2U}, 
  /* EMIOS0_E0UC_17_Y_IN_OUT input func */
  {38U, 19U, 17U, 3U}, 
  /* Inout settings for pad PORT39:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_29_Y_IN_OUT input func */
  {39U, 17U, 65U, 2U}, 
  /* EMIOS0_E0UC_18_Y_IN_OUT input func */
  {39U, 19U, 18U, 3U}, 
  /* Inout settings for pad PORT40:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_3_G_IN_OUT input func */
  {40U, 18U, 3U, 4U}, 
  /* Inout settings for pad PORT41:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_7_G_IN_OUT input func */
  {41U, 17U, 7U, 4U}, 
  /* Inout settings for pad PORT43:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_1_G_IN_OUT input func */
  {43U, 18U, 1U, 5U}, 
  /* Inout settings for pad PORT44:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_12_H_IN_OUT input func */
  {44U, 17U, 12U, 2U}, 
  /* Inout settings for pad PORT45:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_13_H_IN_OUT input func */
  {45U, 17U, 13U, 3U}, 
  /* Inout settings for pad PORT46:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_14_H_IN_OUT input func */
  {46U, 17U, 14U, 3U}, 
  /* DSPI_2_dSCLK_IN_OUT input func */
  {46U, 18U, 295U, 1U}, 
  /* Inout settings for pad PORT47:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_15_H_IN_OUT input func */
  {47U, 17U, 15U, 2U}, 
  /* Inout settings for pad PORT60:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_24_X_IN_OUT input func */
  {60U, 18U, 24U, 2U}, 
  /* Inout settings for pad PORT61:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_25_Y_IN_OUT input func */
  {61U, 18U, 25U, 2U}, 
  /* ENET0_ENET0_TMR0_IN_OUT input func */
  {61U, 19U, 329U, 1U}, 
  /* Inout settings for pad PORT62:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_26_Y_IN_OUT input func */
  {62U, 18U, 26U, 2U}, 
  /* Inout settings for pad PORT63:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_27_Y_IN_OUT input func */
  {63U, 18U, 27U, 2U}, 
  /* Inout settings for pad PORT64:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_16_X_IN_OUT input func */
  {64U, 17U, 16U, 2U}, 
  /* IIC_1_SCL1_IN_OUT input func */
  {64U, 18U, 267U, 1U}, 
  /* Inout settings for pad PORT65:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_17_Y_IN_OUT input func */
  {65U, 17U, 17U, 2U}, 
  /* IIC_1_SDA1_IN_OUT input func */
  {65U, 19U, 268U, 1U}, 
  /* Inout settings for pad PORT66:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_18_Y_IN_OUT input func */
  {66U, 17U, 18U, 2U}, 
  /* Inout settings for pad PORT67:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_19_Y_IN_OUT input func */
  {67U, 17U, 19U, 2U}, 
  /* Inout settings for pad PORT68:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_20_Y_IN_OUT input func */
  {68U, 17U, 20U, 2U}, 
  /* DSPI_1_dSCLK_IN_OUT input func */
  {68U, 18U, 292U, 2U}, 
  /* Inout settings for pad PORT69:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_21_Y_IN_OUT input func */
  {69U, 17U, 21U, 2U}, 
  /* Inout settings for pad PORT70:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_22_X_IN_OUT input func */
  {70U, 17U, 22U, 2U}, 
  /* Inout settings for pad PORT71:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_23_X_IN_OUT input func */
  {71U, 17U, 23U, 2U}, 
  /* Inout settings for pad PORT72:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_22_X_IN_OUT input func */
  {72U, 18U, 22U, 3U}, 
  /* IIC_2_SDA2_IN_OUT input func */
  {72U, 20U, 270U, 1U}, 
  /* Inout settings for pad PORT73:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_23_X_IN_OUT input func */
  {73U, 17U, 23U, 3U}, 
  /* IIC_2_SCL2_IN_OUT input func */
  {73U, 18U, 269U, 1U}, 
  /* Inout settings for pad PORT74:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_30_Y_IN_OUT input func */
  {74U, 19U, 66U, 2U}, 
  /* IIC_3_SDA3_IN_OUT input func */
  {74U, 20U, 272U, 1U}, 
  /* Inout settings for pad PORT75:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_24_X_IN_OUT input func */
  {75U, 17U, 24U, 3U}, 
  /* IIC_3_SCL3_IN_OUT input func */
  {75U, 20U, 271U, 1U}, 
  /* Inout settings for pad PORT76:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_19_Y_IN_OUT input func */
  {76U, 17U, 55U, 2U}, 
  /* Inout settings for pad PORT77:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_20_Y_IN_OUT input func */
  {77U, 18U, 56U, 2U}, 
  /* Inout settings for pad PORT78:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* DSPI_2_dSCLK_IN_OUT input func */
  {78U, 17U, 295U, 2U}, 
  /* EMIOS1_E1UC_21_Y_IN_OUT input func */
  {78U, 18U, 57U, 2U}, 
  /* Inout settings for pad PORT79:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_22_X_IN_OUT input func */
  {79U, 18U, 58U, 2U}, 
  /* SPI_2_SCLK_2_IN_OUT input func */
  {79U, 19U, 307U, 1U}, 
  /* Inout settings for pad PORT80:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_10_H_IN_OUT input func */
  {80U, 17U, 10U, 3U}, 
  /* SAI0_SAI0_MCLK_IN_OUT input func */
  {80U, 23U, 489U, 1U}, 
  /* Inout settings for pad PORT81:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_11_H_IN_OUT input func */
  {81U, 17U, 11U, 3U}, 
  /* SAI0_SAI0_BCLK_IN_OUT input func */
  {81U, 20U, 488U, 1U}, 
  /* Inout settings for pad PORT82:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_12_H_IN_OUT input func */
  {82U, 17U, 12U, 3U}, 
  /* SAI0_SAI0_D3_IN_OUT input func */
  {82U, 20U, 494U, 1U}, 
  /* Inout settings for pad PORT83:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_13_H_IN_OUT input func */
  {83U, 17U, 13U, 4U}, 
  /* SAI0_SAI0_D2_IN_OUT input func */
  {83U, 20U, 493U, 1U}, 
  /* Inout settings for pad PORT84:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_14_H_IN_OUT input func */
  {84U, 17U, 14U, 4U}, 
  /* SAI0_SAI0_D1_IN_OUT input func */
  {84U, 20U, 492U, 1U}, 
  /* Inout settings for pad PORT85:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_22_X_IN_OUT input func */
  {85U, 17U, 22U, 4U}, 
  /* SAI0_SAI0_D0_IN_OUT input func */
  {85U, 20U, 491U, 1U}, 
  /* Inout settings for pad PORT86:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_23_X_IN_OUT input func */
  {86U, 17U, 23U, 4U}, 
  /* SAI1_SAI1_SYNC_IN_OUT input func */
  {86U, 20U, 497U, 1U}, 
  /* EMIOS0_E0UC_30_Y_IN_OUT input func */
  {86U, 21U, 30U, 5U}, 
  /* Inout settings for pad PORT87:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* SPI_0_SCLK_0_IN_OUT input func */
  {87U, 17U, 301U, 1U}, 
  /* SAI1_SAI1_MCLK_IN_OUT input func */
  {87U, 22U, 496U, 1U}, 
  /* Inout settings for pad PORT88:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_15_H_IN_OUT input func */
  {88U, 20U, 15U, 3U}, 
  /* Inout settings for pad PORT89:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_1_H_IN_OUT input func */
  {89U, 17U, 37U, 2U}, 
  /* EMIOS0_E0UC_14_H_IN_OUT input func */
  {89U, 19U, 14U, 5U}, 
  /* Inout settings for pad PORT90:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_2_H_IN_OUT input func */
  {90U, 19U, 38U, 2U}, 
  /* EMIOS0_E0UC_19_Y_IN_OUT input func */
  {90U, 20U, 19U, 3U}, 
  /* FCCU_EOUT0_IN_OUT input func */
  {90U, 21U, 65535U, 0U}, 
  /* Inout settings for pad PORT91:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_3_H_IN_OUT input func */
  {91U, 18U, 39U, 2U}, 
  /* EMIOS0_E0UC_20_Y_IN_OUT input func */
  {91U, 19U, 20U, 3U}, 
  /* Inout settings for pad PORT92:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_25_Y_IN_OUT input func */
  {92U, 17U, 61U, 2U}, 
  /* EMIOS0_E0UC_16_X_IN_OUT input func */
  {92U, 19U, 16U, 3U}, 
  /* FCCU_EOUT1_IN_OUT input func */
  {92U, 20U, 65535U, 0U}, 
  /* Inout settings for pad PORT93:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_26_Y_IN_OUT input func */
  {93U, 17U, 62U, 2U}, 
  /* EMIOS0_E0UC_22_X_IN_OUT input func */
  {93U, 18U, 22U, 5U}, 
  /* Inout settings for pad PORT94:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_27_Y_IN_OUT input func */
  {94U, 18U, 63U, 2U}, 
  /* ENET0_MII_RMII_0_MDIO_IN_OUT input func */
  {94U, 20U, 450U, 1U}, 
  /* Inout settings for pad PORT95:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_4_H_IN_OUT input func */
  {95U, 17U, 40U, 2U}, 
  /* Inout settings for pad PORT96:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_23_X_IN_OUT input func */
  {96U, 18U, 59U, 2U}, 
  /* Inout settings for pad PORT97:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_24_X_IN_OUT input func */
  {97U, 17U, 60U, 2U}, 
  /* ENET0_MII_RMII_0_TX_CLK_IN_OUT input func */
  {97U, 18U, 449U, 1U}, 
  /* Inout settings for pad PORT98:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_11_H_IN_OUT input func */
  {98U, 17U, 47U, 2U}, 
  /* Inout settings for pad PORT99:     {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_12_H_IN_OUT input func */
  {99U, 17U, 48U, 2U}, 
  /* Inout settings for pad PORT100:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_13_H_IN_OUT input func */
  {100U, 17U, 49U, 2U}, 
  /* DSPI_3_dSCLK_IN_OUT input func */
  {100U, 18U, 298U, 1U}, 
  /* Inout settings for pad PORT101:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_14_H_IN_OUT input func */
  {101U, 17U, 50U, 2U}, 
  /* EMIOS0_E0UC_2_G_IN_OUT input func */
  {101U, 18U, 2U, 4U}, 
  /* Inout settings for pad PORT102:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_15_H_IN_OUT input func */
  {102U, 17U, 51U, 2U}, 
  /* EMIOS0_E0UC_3_G_IN_OUT input func */
  {102U, 20U, 3U, 6U}, 
  /* Inout settings for pad PORT103:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_16_X_IN_OUT input func */
  {103U, 17U, 52U, 2U}, 
  /* EMIOS1_E1UC_30_Y_IN_OUT input func */
  {103U, 18U, 66U, 3U}, 
  /* Inout settings for pad PORT104:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_17_Y_IN_OUT input func */
  {104U, 17U, 53U, 2U}, 
  /* Inout settings for pad PORT105:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_18_Y_IN_OUT input func */
  {105U, 17U, 54U, 2U}, 
  /* DSPI_2_dSCLK_IN_OUT input func */
  {105U, 18U, 295U, 3U}, 
  /* EMIOS0_E0UC_0_X_IN_OUT input func */
  {105U, 19U, 0U, 5U}, 
  /* Inout settings for pad PORT106:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_24_X_IN_OUT input func */
  {106U, 17U, 24U, 4U}, 
  /* EMIOS1_E1UC_31_Y_IN_OUT input func */
  {106U, 18U, 67U, 3U}, 
  /* Inout settings for pad PORT107:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_25_Y_IN_OUT input func */
  {107U, 17U, 25U, 3U}, 
  /* Inout settings for pad PORT108:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_26_Y_IN_OUT input func */
  {108U, 17U, 26U, 3U}, 
  /* Inout settings for pad PORT109:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_27_Y_IN_OUT input func */
  {109U, 17U, 27U, 3U}, 
  /* SPI_0_SCLK_0_IN_OUT input func */
  {109U, 18U, 301U, 2U}, 
  /* Inout settings for pad PORT110:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_0_X_IN_OUT input func */
  {110U, 17U, 36U, 2U}, 
  /* Inout settings for pad PORT111:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_1_H_IN_OUT input func */
  {111U, 17U, 37U, 3U}, 
  /* Inout settings for pad PORT112:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_2_H_IN_OUT input func */
  {112U, 17U, 38U, 3U}, 
  /* Inout settings for pad PORT113:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_3_H_IN_OUT input func */
  {113U, 17U, 39U, 3U}, 
  /* Inout settings for pad PORT114:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_4_H_IN_OUT input func */
  {114U, 17U, 40U, 3U}, 
  /* DSPI_1_dSCLK_IN_OUT input func */
  {114U, 18U, 292U, 3U}, 
  /* Inout settings for pad PORT115:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_5_H_IN_OUT input func */
  {115U, 17U, 41U, 2U}, 
  /* Inout settings for pad PORT116:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_6_H_IN_OUT input func */
  {116U, 17U, 42U, 2U}, 
  /* IIC_3_SCL3_IN_OUT input func */
  {116U, 19U, 271U, 2U}, 
  /* Inout settings for pad PORT117:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_7_H_IN_OUT input func */
  {117U, 17U, 43U, 2U}, 
  /* IIC_3_SDA3_IN_OUT input func */
  {117U, 18U, 272U, 2U}, 
  /* Inout settings for pad PORT118:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_8_X_IN_OUT input func */
  {118U, 17U, 44U, 2U}, 
  /* SPI_3_SCLK_3_IN_OUT input func */
  {118U, 18U, 310U, 1U}, 
  /* Inout settings for pad PORT119:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_9_H_IN_OUT input func */
  {119U, 17U, 45U, 2U}, 
  /* Inout settings for pad PORT120:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_10_H_IN_OUT input func */
  {120U, 17U, 46U, 2U}, 
  /* Inout settings for pad PORT122:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* DCI_TMS_IN_OUT input func */
  {122U, 17U, 65535U, 0U}, 
  /* Inout settings for pad PORT123:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_5_H_IN_OUT input func */
  {123U, 19U, 41U, 3U}, 
  /* Inout settings for pad PORT124:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* DSPI_3_dSCLK_IN_OUT input func */
  {124U, 17U, 298U, 2U}, 
  /* EMIOS1_E1UC_25_Y_IN_OUT input func */
  {124U, 19U, 61U, 3U}, 
  /* Inout settings for pad PORT125:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_26_Y_IN_OUT input func */
  {125U, 19U, 62U, 3U}, 
  /* FCCU_EOUT1_IN_OUT input func */
  {125U, 20U, 65535U, 0U}, 
  /* Inout settings for pad PORT126:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* SPI_0_SCLK_0_IN_OUT input func */
  {126U, 17U, 301U, 3U}, 
  /* EMIOS1_E1UC_27_Y_IN_OUT input func */
  {126U, 19U, 63U, 3U}, 
  /* Inout settings for pad PORT127:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_17_Y_IN_OUT input func */
  {127U, 19U, 53U, 3U}, 
  /* FCCU_EOUT0_IN_OUT input func */
  {127U, 20U, 65535U, 0U}, 
  /* Inout settings for pad PORT128:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_28_Y_IN_OUT input func */
  {128U, 17U, 28U, 3U}, 
  /* IIC_1_SDA1_IN_OUT input func */
  {128U, 19U, 268U, 2U}, 
  /* Inout settings for pad PORT129:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_29_Y_IN_OUT input func */
  {129U, 17U, 29U, 3U}, 
  /* IIC_1_SCL1_IN_OUT input func */
  {129U, 18U, 267U, 2U}, 
  /* Inout settings for pad PORT130:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_30_Y_IN_OUT input func */
  {130U, 17U, 30U, 4U}, 
  /* IIC_2_SDA2_IN_OUT input func */
  {130U, 19U, 270U, 2U}, 
  /* Inout settings for pad PORT131:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_31_Y_IN_OUT input func */
  {131U, 17U, 31U, 4U}, 
  /* IIC_2_SCL2_IN_OUT input func */
  {131U, 18U, 269U, 2U}, 
  /* Inout settings for pad PORT132:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_28_Y_IN_OUT input func */
  {132U, 17U, 64U, 3U}, 
  /* Inout settings for pad PORT133:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_29_Y_IN_OUT input func */
  {133U, 17U, 65U, 3U}, 
  /* SPI_0_SCLK_0_IN_OUT input func */
  {133U, 18U, 301U, 4U}, 
  /* Inout settings for pad PORT134:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_30_Y_IN_OUT input func */
  {134U, 17U, 66U, 4U}, 
  /* Inout settings for pad PORT135:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_31_Y_IN_OUT input func */
  {135U, 17U, 67U, 4U}, 
  /* Inout settings for pad PORT139:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* ENET0_ENET0_TMR1_IN_OUT input func */
  {139U, 18U, 330U, 1U}, 
  /* Inout settings for pad PORT142:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* SAI2_SAI2_D0_IN_OUT input func */
  {142U, 17U, 505U, 2U}, 
  /* Inout settings for pad PORT143:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* SAI2_SAI2_MCLK_IN_OUT input func */
  {143U, 19U, 503U, 2U}, 
  /* Inout settings for pad PORT144:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* SAI2_SAI2_SYNC_IN_OUT input func */
  {144U, 19U, 504U, 2U}, 
  /* Inout settings for pad PORT145:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* SAI2_SAI2_BCLK_IN_OUT input func */
  {145U, 18U, 502U, 1U}, 
  /* Inout settings for pad PORT146:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* SAI1_SAI1_D0_IN_OUT input func */
  {146U, 20U, 498U, 1U}, 
  /* Inout settings for pad PORT147:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* SAI1_SAI1_BCLK_IN_OUT input func */
  {147U, 20U, 495U, 1U}, 
  /* Inout settings for pad PORT148:    {MSCR, MODE, INMUX reg, PADSEL val} */
  /* SPI_1_SCLK_1_IN_OUT input func */
  {148U, 17U, 304U, 1U}, 
  /* EMIOS1_E1UC_18_Y_IN_OUT input func */
  {148U, 18U, 54U, 3U}

};

/**
* @brief Port INPUT INMUX settings data
*/
CONST(Port_InMuxSettingType,PORT_CONST) Port_aPadFunctInMuxSettings[327]=
{

  /* INMUX settings for pad not available:  */
  { NO_INPUTMUX_U16, 0U},
  /* INMUX settings for pad PORT0:      {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_0_X_IN input func */
  {0U, 2U}, 
  /* EMIOS0_E0UC_13_H_IN input func */
  {13U, 2U}, 
  /* FlexCAN_1_RX input func */
  {189U, 1U}, 
  /* INMUX settings for pad PORT1:      {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_1_G_IN input func */
  {1U, 2U}, 
  /* FlexCAN_3_RX input func */
  {191U, 1U}, 
  /* INMUX settings for pad PORT2:      {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_2_G_IN input func */
  {2U, 2U}, 
  /* INMUX settings for pad PORT3:      {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_3_G_IN input func */
  {3U, 2U}, 
  /* SIUL2_EIRQ0 input func */
  {144U, 1U}, 
  /* ENET0_MII_0_RX_CLK input func */
  {448U, 1U}, 
  /* INMUX settings for pad PORT4:      {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_4_G_IN input func */
  {4U, 2U}, 
  /* LIN_5_LIN5RX input func */
  {205U, 1U}, 
  /* DSPI_1_dSS input func */
  {293U, 1U}, 
  /* EMIOS0_E0UC_24_X_IN input func */
  {24U, 5U}, 
  /* INMUX settings for pad PORT5:      {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_5_G_IN input func */
  {5U, 2U}, 
  /* INMUX settings for pad PORT6:      {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_6_G_IN input func */
  {6U, 2U}, 
  /* SIUL2_EIRQ1 input func */
  {145U, 1U}, 
  /* LIN_4_LIN4RX input func */
  {204U, 1U}, 
  /* INMUX settings for pad PORT7:      {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_7_G_IN input func */
  {7U, 2U}, 
  /* SIUL2_EIRQ2 input func */
  {146U, 1U}, 
  /* ENET0_MII_0_RXD_2 input func */
  {453U, 1U}, 
  /* INMUX settings for pad PORT8:      {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_8_X_IN input func */
  {8U, 2U}, 
  /* EMIOS0_E0UC_14_H_IN input func */
  {14U, 2U}, 
  /* SIUL2_EIRQ3 input func */
  {147U, 1U}, 
  /* LIN_3_LIN3RX input func */
  {203U, 1U}, 
  /* ENET0_MII_RMII_0_RXD_1 input func */
  {452U, 1U}, 
  /* INMUX settings for pad PORT9:      {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_9_H_IN input func */
  {9U, 2U}, 
  /* ENET0_MII_RMII_0_RXD_0 input func */
  {451U, 1U}, 
  /* INMUX settings for pad PORT10:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_10_H_IN input func */
  {10U, 2U}, 
  /* IIC_0_SDA0_IN input func */
  {266U, 1U}, 
  /* DSPI_1_dSIN input func */
  {291U, 1U}, 
  /* ENET0_MII_0_COL input func */
  {456U, 1U}, 
  /* INMUX settings for pad PORT11:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_11_H_IN input func */
  {11U, 2U}, 
  /* SIUL2_EIRQ16 input func */
  {160U, 1U}, 
  /* LIN_2_LIN2RX input func */
  {202U, 1U}, 
  /* IIC_0_SCL0_IN input func */
  {265U, 1U}, 
  /* ENET0_MII_RMII_0_RX_ER input func */
  {455U, 1U}, 
  /* INMUX settings for pad PORT12:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_28_Y_IN input func */
  {28U, 2U}, 
  /* SIUL2_EIRQ17 input func */
  {161U, 1U}, 
  /* DSPI_0_dSIN input func */
  {288U, 1U}, 
  /* EMIOS0_E0UC_26_Y_IN input func */
  {26U, 4U}, 
  /* GLITCH_FILTER0_INP input func */
  {506U, 1U}, 
  /* INMUX settings for pad PORT13:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_29_Y_IN input func */
  {29U, 2U}, 
  /* EMIOS0_E0UC_25_Y_IN input func */
  {25U, 4U}, 
  /* GLITCH_FILTER0_INP input func */
  {506U, 3U}, 
  /* INMUX settings for pad PORT14:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_0_X_IN input func */
  {0U, 3U}, 
  /* SIUL2_EIRQ4 input func */
  {148U, 1U}, 
  /* DSPI_0_dSCLK_IN input func */
  {289U, 1U}, 
  /* DSPI_0_dSS input func */
  {290U, 1U}, 
  /* EMIOS0_E0UC_23_X_IN input func */
  {23U, 5U}, 
  /* INMUX settings for pad PORT15:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_1_G_IN input func */
  {1U, 3U}, 
  /* FlexCAN_0_RX input func */
  {188U, 1U}, 
  /* DSPI_0_dSCLK_IN input func */
  {289U, 2U}, 
  /* DSPI_0_dSS input func */
  {290U, 2U}, 
  /* EMIOS0_E0UC_21_Y_IN input func */
  {21U, 3U}, 
  /* INMUX settings for pad PORT16:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_30_Y_IN input func */
  {30U, 2U}, 
  /* EMIOS0_E0UC_4_G_IN input func */
  {4U, 5U}, 
  /* GLITCH_FILTER1_INP input func */
  {507U, 1U}, 
  /* INMUX settings for pad PORT17:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_31_Y_IN input func */
  {31U, 2U}, 
  /* FlexCAN_0_RX input func */
  {188U, 2U}, 
  /* LIN_0_LIN0RX input func */
  {200U, 1U}, 
  /* EMIOS0_E0UC_5_G_IN input func */
  {5U, 4U}, 
  /* GLITCH_FILTER1_INP input func */
  {507U, 4U}, 
  /* INMUX settings for pad PORT18:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_30_Y_IN input func */
  {30U, 3U}, 
  /* IIC_0_SDA0_IN input func */
  {266U, 2U}, 
  /* GLITCH_FILTER1_INP input func */
  {507U, 2U}, 
  /* INMUX settings for pad PORT19:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_31_Y_IN input func */
  {31U, 3U}, 
  /* LIN_0_LIN0RX input func */
  {200U, 2U}, 
  /* IIC_0_SCL0_IN input func */
  {265U, 2U}, 
  /* EMIOS0_E0UC_8_X_IN input func */
  {8U, 3U}, 
  /* GLITCH_FILTER1_INP input func */
  {507U, 5U}, 
  /* INMUX settings for pad PORT26:     {INMUX reg, PADSEL val} */
  /* FlexCAN_6_RX input func */
  {194U, 1U}, 
  /* SAI0_SAI0_SYNC_IN input func */
  {490U, 1U}, 
  /* EMIOS0_E0UC_29_Y_IN input func */
  {29U, 4U}, 
  /* INMUX settings for pad PORT27:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_3_G_IN input func */
  {3U, 3U}, 
  /* DSPI_0_dSS input func */
  {290U, 3U}, 
  /* INMUX settings for pad PORT28:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_4_G_IN input func */
  {4U, 3U}, 
  /* INMUX settings for pad PORT29:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_5_G_IN input func */
  {5U, 3U}, 
  /* INMUX settings for pad PORT30:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_6_G_IN input func */
  {6U, 3U}, 
  /* INMUX settings for pad PORT31:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_7_G_IN input func */
  {7U, 3U}, 
  /* INMUX settings for pad PORT34:     {INMUX reg, PADSEL val} */
  /* SIUL2_EIRQ5 input func */
  {149U, 1U}, 
  /* DSPI_1_dSCLK_IN input func */
  {292U, 1U}, 
  /* INMUX settings for pad PORT35:     {INMUX reg, PADSEL val} */
  /* SIUL2_EIRQ6 input func */
  {150U, 1U}, 
  /* FlexCAN_1_RX input func */
  {189U, 2U}, 
  /* FlexCAN_4_RX input func */
  {192U, 1U}, 
  /* DSPI_1_dSS input func */
  {293U, 2U}, 
  /* INMUX settings for pad PORT36:     {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_31_Y_IN input func */
  {67U, 2U}, 
  /* SIUL2_EIRQ18 input func */
  {162U, 1U}, 
  /* FlexCAN_3_RX input func */
  {191U, 2U}, 
  /* DSPI_1_dSIN input func */
  {291U, 2U}, 
  /* GLITCH_FILTER3_INP input func */
  {509U, 5U}, 
  /* INMUX settings for pad PORT37:     {INMUX reg, PADSEL val} */
  /* SIUL2_EIRQ7 input func */
  {151U, 1U}, 
  /* INMUX settings for pad PORT38:     {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_28_Y_IN input func */
  {64U, 2U}, 
  /* EMIOS0_E0UC_17_Y_IN input func */
  {17U, 3U}, 
  /* GLITCH_FILTER2_INP input func */
  {508U, 1U}, 
  /* INMUX settings for pad PORT39:     {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_29_Y_IN input func */
  {65U, 2U}, 
  /* LIN_1_LIN1RX input func */
  {201U, 1U}, 
  /* EMIOS0_E0UC_18_Y_IN input func */
  {18U, 3U}, 
  /* GLITCH_FILTER2_INP input func */
  {508U, 4U}, 
  /* INMUX settings for pad PORT40:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_3_G_IN input func */
  {3U, 4U}, 
  /* INMUX settings for pad PORT41:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_7_G_IN input func */
  {7U, 4U}, 
  /* LIN_2_LIN2RX input func */
  {202U, 2U}, 
  /* INMUX settings for pad PORT43:     {INMUX reg, PADSEL val} */
  /* FlexCAN_1_RX input func */
  {189U, 3U}, 
  /* FlexCAN_4_RX input func */
  {192U, 2U}, 
  /* EMIOS0_E0UC_1_G_IN input func */
  {1U, 5U}, 
  /* INMUX settings for pad PORT44:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_12_H_IN input func */
  {12U, 2U}, 
  /* SIUL2_EIRQ19 input func */
  {163U, 1U}, 
  /* DSPI_2_dSIN input func */
  {294U, 1U}, 
  /* INMUX settings for pad PORT45:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_13_H_IN input func */
  {13U, 3U}, 
  /* INMUX settings for pad PORT46:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_14_H_IN input func */
  {14U, 3U}, 
  /* SIUL2_EIRQ8 input func */
  {152U, 1U}, 
  /* DSPI_2_dSCLK_IN input func */
  {295U, 1U}, 
  /* INMUX settings for pad PORT47:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_15_H_IN input func */
  {15U, 2U}, 
  /* SIUL2_EIRQ20 input func */
  {164U, 1U}, 
  /* DSPI_2_dSS input func */
  {296U, 1U}, 
  /* FlexCAN_4_RX input func */
  {192U, 7U}, 
  /* INMUX settings for pad PORT60:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_24_X_IN input func */
  {24U, 2U}, 
  /* INMUX settings for pad PORT61:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_25_Y_IN input func */
  {25U, 2U}, 
  /* DSPI_1_dSS input func */
  {293U, 3U}, 
  /* ENET0_ENET0_TMR0_IN input func */
  {329U, 1U}, 
  /* INMUX settings for pad PORT62:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_26_Y_IN input func */
  {26U, 2U}, 
  /* INMUX settings for pad PORT63:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_27_Y_IN input func */
  {27U, 2U}, 
  /* INMUX settings for pad PORT64:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_16_X_IN input func */
  {16U, 2U}, 
  /* FlexCAN_5_RX input func */
  {193U, 1U}, 
  /* LIN_11_LIN11RX input func */
  {211U, 1U}, 
  /* IIC_1_SCL1_IN input func */
  {267U, 1U}, 
  /* INMUX settings for pad PORT65:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_17_Y_IN input func */
  {17U, 2U}, 
  /* IIC_1_SDA1_IN input func */
  {268U, 1U}, 
  /* INMUX settings for pad PORT66:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_18_Y_IN input func */
  {18U, 2U}, 
  /* SIUL2_EIRQ21 input func */
  {165U, 1U}, 
  /* DSPI_1_dSIN input func */
  {291U, 3U}, 
  /* INMUX settings for pad PORT67:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_19_Y_IN input func */
  {19U, 2U}, 
  /* FlexRay_FR_A_RX input func */
  {224U, 1U}, 
  /* INMUX settings for pad PORT68:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_20_Y_IN input func */
  {20U, 2U}, 
  /* SIUL2_EIRQ9 input func */
  {153U, 1U}, 
  /* DSPI_1_dSCLK_IN input func */
  {292U, 2U}, 
  /* INMUX settings for pad PORT69:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_21_Y_IN input func */
  {21U, 2U}, 
  /* FlexRay_FR_B_RX input func */
  {225U, 1U}, 
  /* DSPI_1_dSS input func */
  {293U, 4U}, 
  /* INMUX settings for pad PORT70:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_22_X_IN input func */
  {22U, 2U}, 
  /* SIUL2_EIRQ22 input func */
  {166U, 1U}, 
  /* INMUX settings for pad PORT71:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_23_X_IN input func */
  {23U, 2U}, 
  /* SIUL2_EIRQ23 input func */
  {167U, 1U}, 
  /* INMUX settings for pad PORT72:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_22_X_IN input func */
  {22U, 3U}, 
  /* IIC_2_SDA2_IN input func */
  {270U, 1U}, 
  /* INMUX settings for pad PORT73:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_23_X_IN input func */
  {23U, 3U}, 
  /* FlexCAN_2_RX input func */
  {190U, 1U}, 
  /* FlexCAN_3_RX input func */
  {191U, 3U}, 
  /* IIC_2_SCL2_IN input func */
  {269U, 1U}, 
  /* INMUX settings for pad PORT74:     {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_30_Y_IN input func */
  {66U, 2U}, 
  /* SIUL2_EIRQ10 input func */
  {154U, 1U}, 
  /* IIC_3_SDA3_IN input func */
  {272U, 1U}, 
  /* GLITCH_FILTER3_INP input func */
  {509U, 1U}, 
  /* INMUX settings for pad PORT75:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_24_X_IN input func */
  {24U, 3U}, 
  /* LIN_3_LIN3RX input func */
  {203U, 2U}, 
  /* IIC_3_SCL3_IN input func */
  {271U, 1U}, 
  /* INMUX settings for pad PORT76:     {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_19_Y_IN input func */
  {55U, 2U}, 
  /* SIUL2_EIRQ11 input func */
  {155U, 1U}, 
  /* DSPI_2_dSIN input func */
  {294U, 2U}, 
  /* ENET0_MII_0_CRS input func */
  {458U, 1U}, 
  /* INMUX settings for pad PORT77:     {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_20_Y_IN input func */
  {56U, 2U}, 
  /* ENET0_MII_0_RXD_3 input func */
  {454U, 1U}, 
  /* INMUX settings for pad PORT78:     {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_21_Y_IN input func */
  {57U, 2U}, 
  /* SIUL2_EIRQ12 input func */
  {156U, 1U}, 
  /* DSPI_2_dSCLK_IN input func */
  {295U, 2U}, 
  /* INMUX settings for pad PORT79:     {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_22_X_IN input func */
  {58U, 2U}, 
  /* DSPI_2_dSS input func */
  {296U, 2U}, 
  /* SPI_2_SCLK_2_IN input func */
  {307U, 1U}, 
  /* INMUX settings for pad PORT80:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_10_H_IN input func */
  {10U, 3U}, 
  /* SAI0_SAI0_MCLK_IN input func */
  {489U, 1U}, 
  /* INMUX settings for pad PORT81:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_11_H_IN input func */
  {11U, 3U}, 
  /* SAI0_SAI0_BCLK_IN input func */
  {488U, 1U}, 
  /* INMUX settings for pad PORT82:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_12_H_IN input func */
  {12U, 3U}, 
  /* DSPI_2_dSS input func */
  {296U, 3U}, 
  /* SAI0_SAI0_D3_IN input func */
  {494U, 1U}, 
  /* GLITCH_FILTER0_INP input func */
  {506U, 5U}, 
  /* INMUX settings for pad PORT83:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_13_H_IN input func */
  {13U, 4U}, 
  /* SAI0_SAI0_D2_IN input func */
  {493U, 1U}, 
  /* GLITCH_FILTER1_INP input func */
  {507U, 7U}, 
  /* INMUX settings for pad PORT84:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_14_H_IN input func */
  {14U, 4U}, 
  /* SAI0_SAI0_D1_IN input func */
  {492U, 1U}, 
  /* GLITCH_FILTER2_INP input func */
  {508U, 7U}, 
  /* INMUX settings for pad PORT85:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_22_X_IN input func */
  {22U, 4U}, 
  /* SAI0_SAI0_D0_IN input func */
  {491U, 1U}, 
  /* GLITCH_FILTER3_INP input func */
  {509U, 9U}, 
  /* INMUX settings for pad PORT86:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_23_X_IN input func */
  {23U, 4U}, 
  /* SAI1_SAI1_SYNC_IN input func */
  {497U, 1U}, 
  /* EMIOS0_E0UC_30_Y_IN input func */
  {30U, 5U}, 
  /* INMUX settings for pad PORT87:     {INMUX reg, PADSEL val} */
  /* SPI_0_SCLK_0_IN input func */
  {301U, 1U}, 
  /* SAI1_SAI1_MCLK_IN input func */
  {496U, 1U}, 
  /* INMUX settings for pad PORT88:     {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_15_H_IN input func */
  {15U, 3U}, 
  /* INMUX settings for pad PORT89:     {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_1_H_IN input func */
  {37U, 2U}, 
  /* FlexCAN_2_RX input func */
  {190U, 2U}, 
  /* FlexCAN_3_RX input func */
  {191U, 4U}, 
  /* EMIOS0_E0UC_14_H_IN input func */
  {14U, 5U}, 
  /* INMUX settings for pad PORT90:     {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_2_H_IN input func */
  {38U, 2U}, 
  /* EMIOS0_E0UC_19_Y_IN input func */
  {19U, 3U}, 
  /* INMUX settings for pad PORT91:     {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_3_H_IN input func */
  {39U, 2U}, 
  /* LIN_4_LIN4RX input func */
  {204U, 2U}, 
  /* EMIOS0_E0UC_20_Y_IN input func */
  {20U, 3U}, 
  /* INMUX settings for pad PORT92:     {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_25_Y_IN input func */
  {61U, 2U}, 
  /* EMIOS0_E0UC_16_X_IN input func */
  {16U, 3U}, 
  /* INMUX settings for pad PORT93:     {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_26_Y_IN input func */
  {62U, 2U}, 
  /* LIN_5_LIN5RX input func */
  {205U, 2U}, 
  /* EMIOS0_E0UC_22_X_IN input func */
  {22U, 5U}, 
  /* INMUX settings for pad PORT94:     {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_27_Y_IN input func */
  {63U, 2U}, 
  /* ENET0_MII_RMII_0_MDIO_IN input func */
  {450U, 1U}, 
  /* INMUX settings for pad PORT95:     {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_4_H_IN input func */
  {40U, 2U}, 
  /* SIUL2_EIRQ13 input func */
  {157U, 1U}, 
  /* FlexCAN_1_RX input func */
  {189U, 4U}, 
  /* FlexCAN_4_RX input func */
  {192U, 3U}, 
  /* ENET0_MII_RMII_0_RX_DV input func */
  {457U, 1U}, 
  /* INMUX settings for pad PORT96:     {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_23_X_IN input func */
  {59U, 2U}, 
  /* INMUX settings for pad PORT97:     {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_24_X_IN input func */
  {60U, 2U}, 
  /* SIUL2_EIRQ14 input func */
  {158U, 1U}, 
  /* FlexCAN_5_RX input func */
  {193U, 2U}, 
  /* ENET0_MII_RMII_0_TX_CLK_IN input func */
  {449U, 1U}, 
  /* INMUX settings for pad PORT98:     {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_11_H_IN input func */
  {47U, 2U}, 
  /* INMUX settings for pad PORT99:     {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_12_H_IN input func */
  {48U, 2U}, 
  /* FlexCAN_7_RX input func */
  {195U, 1U}, 
  /* DSPI_3_dSS input func */
  {299U, 1U}, 
  /* INMUX settings for pad PORT100:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_13_H_IN input func */
  {49U, 2U}, 
  /* DSPI_3_dSCLK_IN input func */
  {298U, 1U}, 
  /* INMUX settings for pad PORT101:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_14_H_IN input func */
  {50U, 2U}, 
  /* LIN_10_LIN10RX input func */
  {210U, 1U}, 
  /* DSPI_3_dSIN input func */
  {297U, 1U}, 
  /* EMIOS0_E0UC_2_G_IN input func */
  {2U, 4U}, 
  /* INMUX settings for pad PORT102:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_15_H_IN input func */
  {51U, 2U}, 
  /* EMIOS0_E0UC_3_G_IN input func */
  {3U, 6U}, 
  /* INMUX settings for pad PORT103:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_16_X_IN input func */
  {52U, 2U}, 
  /* EMIOS1_E1UC_30_Y_IN input func */
  {66U, 3U}, 
  /* LIN_6_LIN6RX input func */
  {206U, 1U}, 
  /* GLITCH_FILTER3_INP input func */
  {509U, 2U}, 
  /* INMUX settings for pad PORT104:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_17_Y_IN input func */
  {53U, 2U}, 
  /* SIUL2_EIRQ15 input func */
  {159U, 1U}, 
  /* DSPI_2_dSS input func */
  {296U, 4U}, 
  /* INMUX settings for pad PORT105:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_18_Y_IN input func */
  {54U, 2U}, 
  /* FlexCAN_7_RX input func */
  {195U, 2U}, 
  /* LIN_7_LIN7RX input func */
  {207U, 1U}, 
  /* DSPI_2_dSCLK_IN input func */
  {295U, 3U}, 
  /* EMIOS0_E0UC_0_X_IN input func */
  {0U, 5U}, 
  /* INMUX settings for pad PORT106:    {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_24_X_IN input func */
  {24U, 4U}, 
  /* EMIOS1_E1UC_31_Y_IN input func */
  {67U, 3U}, 
  /* SPI_0_SIN_0 input func */
  {300U, 1U}, 
  /* GLITCH_FILTER3_INP input func */
  {509U, 6U}, 
  /* INMUX settings for pad PORT107:    {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_25_Y_IN input func */
  {25U, 3U}, 
  /* SPI_0_SS_0 input func */
  {302U, 1U}, 
  /* SPI_2_SS_2 input func */
  {308U, 1U}, 
  /* INMUX settings for pad PORT108:    {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_26_Y_IN input func */
  {26U, 3U}, 
  /* INMUX settings for pad PORT109:    {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_27_Y_IN input func */
  {27U, 3U}, 
  /* SPI_0_SCLK_0_IN input func */
  {301U, 2U}, 
  /* INMUX settings for pad PORT110:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_0_X_IN input func */
  {36U, 2U}, 
  /* SPI_2_SIN_2 input func */
  {306U, 1U}, 
  /* INMUX settings for pad PORT111:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_1_H_IN input func */
  {37U, 3U}, 
  /* LIN_8_LIN8RX input func */
  {208U, 1U}, 
  /* INMUX settings for pad PORT112:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_2_H_IN input func */
  {38U, 3U}, 
  /* DSPI_1_dSIN input func */
  {291U, 4U}, 
  /* INMUX settings for pad PORT113:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_3_H_IN input func */
  {39U, 3U}, 
  /* INMUX settings for pad PORT114:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_4_H_IN input func */
  {40U, 3U}, 
  /* DSPI_1_dSCLK_IN input func */
  {292U, 3U}, 
  /* INMUX settings for pad PORT115:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_5_H_IN input func */
  {41U, 2U}, 
  /* DSPI_1_dSS input func */
  {293U, 5U}, 
  /* INMUX settings for pad PORT116:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_6_H_IN input func */
  {42U, 2U}, 
  /* IIC_3_SCL3_IN input func */
  {271U, 2U}, 
  /* INMUX settings for pad PORT117:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_7_H_IN input func */
  {43U, 2U}, 
  /* IIC_3_SDA3_IN input func */
  {272U, 2U}, 
  /* SPI_3_SIN_3 input func */
  {309U, 1U}, 
  /* INMUX settings for pad PORT118:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_8_X_IN input func */
  {44U, 2U}, 
  /* SPI_3_SCLK_3_IN input func */
  {310U, 1U}, 
  /* INMUX settings for pad PORT119:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_9_H_IN input func */
  {45U, 2U}, 
  /* SPI_3_SS_3 input func */
  {311U, 1U}, 
  /* INMUX settings for pad PORT120:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_10_H_IN input func */
  {46U, 2U}, 
  /* INMUX settings for pad PORT123:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_5_H_IN input func */
  {41U, 3U}, 
  /* SPI_0_SS_0 input func */
  {302U, 2U}, 
  /* INMUX settings for pad PORT124:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_25_Y_IN input func */
  {61U, 3U}, 
  /* DSPI_3_dSCLK_IN input func */
  {298U, 2U}, 
  /* INMUX settings for pad PORT125:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_26_Y_IN input func */
  {62U, 3U}, 
  /* DSPI_3_dSS input func */
  {299U, 2U}, 
  /* INMUX settings for pad PORT126:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_27_Y_IN input func */
  {63U, 3U}, 
  /* SPI_0_SCLK_0_IN input func */
  {301U, 3U}, 
  /* FCCU_EIN_ERR input func */
  {501U, 1U}, 
  /* INMUX settings for pad PORT127:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_17_Y_IN input func */
  {53U, 3U}, 
  /* INMUX settings for pad PORT128:    {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_28_Y_IN input func */
  {28U, 3U}, 
  /* IIC_1_SDA1_IN input func */
  {268U, 2U}, 
  /* GLITCH_FILTER0_INP input func */
  {506U, 2U}, 
  /* INMUX settings for pad PORT129:    {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_29_Y_IN input func */
  {29U, 3U}, 
  /* LIN_8_LIN8RX input func */
  {208U, 2U}, 
  /* IIC_1_SCL1_IN input func */
  {267U, 2U}, 
  /* GLITCH_FILTER0_INP input func */
  {506U, 4U}, 
  /* INMUX settings for pad PORT130:    {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_30_Y_IN input func */
  {30U, 4U}, 
  /* IIC_2_SDA2_IN input func */
  {270U, 2U}, 
  /* GLITCH_FILTER1_INP input func */
  {507U, 3U}, 
  /* INMUX settings for pad PORT131:    {INMUX reg, PADSEL val} */
  /* EMIOS0_E0UC_31_Y_IN input func */
  {31U, 4U}, 
  /* LIN_9_LIN9RX input func */
  {209U, 1U}, 
  /* IIC_2_SCL2_IN input func */
  {269U, 2U}, 
  /* GLITCH_FILTER1_INP input func */
  {507U, 6U}, 
  /* INMUX settings for pad PORT132:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_28_Y_IN input func */
  {64U, 3U}, 
  /* GLITCH_FILTER2_INP input func */
  {508U, 2U}, 
  /* INMUX settings for pad PORT133:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_29_Y_IN input func */
  {65U, 3U}, 
  /* SPI_0_SCLK_0_IN input func */
  {301U, 4U}, 
  /* GLITCH_FILTER2_INP input func */
  {508U, 5U}, 
  /* INMUX settings for pad PORT134:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_30_Y_IN input func */
  {66U, 4U}, 
  /* SPI_0_SS_0 input func */
  {302U, 3U}, 
  /* SPI_1_SS_1 input func */
  {305U, 1U}, 
  /* SPI_2_SS_2 input func */
  {308U, 2U}, 
  /* GLITCH_FILTER3_INP input func */
  {509U, 3U}, 
  /* INMUX settings for pad PORT135:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_31_Y_IN input func */
  {67U, 4U}, 
  /* GLITCH_FILTER3_INP input func */
  {509U, 7U}, 
  /* INMUX settings for pad PORT139:    {INMUX reg, PADSEL val} */
  /* DSPI_3_dSIN input func */
  {297U, 2U}, 
  /* ENET0_ENET0_TMR1_IN input func */
  {330U, 1U}, 
  /* INMUX settings for pad PORT140:    {INMUX reg, PADSEL val} */
  /* DSPI_2_dSS input func */
  {296U, 5U}, 
  /* DSPI_3_dSS input func */
  {299U, 3U}, 
  /* INMUX settings for pad PORT142:    {INMUX reg, PADSEL val} */
  /* SPI_0_SIN_0 input func */
  {300U, 2U}, 
  /* SAI2_SAI2_D0_IN input func */
  {505U, 2U}, 
  /* INMUX settings for pad PORT143:    {INMUX reg, PADSEL val} */
  /* SPI_0_SS_0 input func */
  {302U, 4U}, 
  /* SAI2_SAI2_MCLK_IN input func */
  {503U, 2U}, 
  /* INMUX settings for pad PORT144:    {INMUX reg, PADSEL val} */
  /* SAI2_SAI2_SYNC_IN input func */
  {504U, 2U}, 
  /* INMUX settings for pad PORT145:    {INMUX reg, PADSEL val} */
  /* SPI_1_SIN_1 input func */
  {303U, 1U}, 
  /* SAI2_SAI2_BCLK_IN input func */
  {502U, 1U}, 
  /* INMUX settings for pad PORT146:    {INMUX reg, PADSEL val} */
  /* SPI_1_SS_1 input func */
  {305U, 2U}, 
  /* SPI_2_SS_2 input func */
  {308U, 3U}, 
  /* SPI_3_SS_3 input func */
  {311U, 2U}, 
  /* SAI1_SAI1_D0_IN input func */
  {498U, 1U}, 
  /* INMUX settings for pad PORT147:    {INMUX reg, PADSEL val} */
  /* SAI1_SAI1_BCLK_IN input func */
  {495U, 1U}, 
  /* INMUX settings for pad PORT148:    {INMUX reg, PADSEL val} */
  /* EMIOS1_E1UC_18_Y_IN input func */
  {54U, 3U}, 
  /* SPI_1_SCLK_1_IN input func */
  {304U, 1U}, 
  /* FCCU_EIN_ERR input func */
  {501U, 2U}

};

#endif

#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/**
* @violates @ref PORT_PBCFG_REF_1 only preprocessor statements and comments before '#include'
* @violates @ref PORT_PBCFG_REF_2 Repeated include file MemMap.h
*/
#include "MemMap.h"

#define PORT_START_SEC_CONFIG_DATA_16
/** @violates @ref PORT_PBCFG_REF_1 only preprocessor statements and comments before '#include' */
/** @violates @ref PORT_PBCFG_REF_2 Repeated include file MemMap.h */
#include "MemMap.h"

#if (STD_ON == PORT_SET_PIN_MODE_API)
/**
* @brief Port Pin description data
*/
CONST (uint16, PORT_CONST) Port_au16PinDescription[24][10] =
{


/*  Mode PORT_GPIO_MODE: */
{
/* Pads   0 ...  15 : PORT0_GPIO |
PORT1_GPIO |
PORT2_GPIO |
PORT3_GPIO |
PORT4_GPIO |
PORT5_GPIO |
PORT6_GPIO |
PORT7_GPIO |
PORT8_GPIO |
PORT9_GPIO |
PORT10_GPIO |
PORT11_GPIO |
PORT12_GPIO |
PORT13_GPIO |
PORT14_GPIO |
PORT15_GPIO */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  16 ...  31 : PORT16_GPIO |
PORT17_GPIO |
PORT18_GPIO |
PORT19_GPIO |
PORT26_GPIO |
PORT27_GPIO |
PORT28_GPIO |
PORT29_GPIO |
PORT30_GPIO |
PORT31_GPIO */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  32 ...  47 : PORT32_GPIO |
PORT33_GPIO |
PORT34_GPIO |
PORT35_GPIO |
PORT36_GPIO |
PORT37_GPIO |
PORT38_GPIO |
PORT39_GPIO |
PORT40_GPIO |
PORT41_GPIO |
PORT42_GPIO |
PORT43_GPIO |
PORT44_GPIO |
PORT45_GPIO |
PORT46_GPIO |
PORT47_GPIO */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  48 ...  63 : PORT60_GPIO |
PORT61_GPIO |
PORT62_GPIO |
PORT63_GPIO */
  (uint16)( SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  64 ...  79 : PORT64_GPIO |
PORT65_GPIO |
PORT66_GPIO |
PORT67_GPIO |
PORT68_GPIO |
PORT69_GPIO |
PORT70_GPIO |
PORT71_GPIO |
PORT72_GPIO |
PORT73_GPIO |
PORT74_GPIO |
PORT75_GPIO |
PORT76_GPIO |
PORT77_GPIO |
PORT78_GPIO |
PORT79_GPIO */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  80 ...  95 : PORT80_GPIO |
PORT81_GPIO |
PORT82_GPIO |
PORT83_GPIO |
PORT84_GPIO |
PORT85_GPIO |
PORT86_GPIO |
PORT87_GPIO |
PORT88_GPIO |
PORT89_GPIO |
PORT90_GPIO |
PORT91_GPIO |
PORT92_GPIO |
PORT93_GPIO |
PORT94_GPIO |
PORT95_GPIO */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  96 ... 111 : PORT96_GPIO |
PORT97_GPIO |
PORT98_GPIO |
PORT99_GPIO |
PORT100_GPIO |
PORT101_GPIO |
PORT102_GPIO |
PORT103_GPIO |
PORT104_GPIO |
PORT105_GPIO |
PORT106_GPIO |
PORT107_GPIO |
PORT108_GPIO |
PORT109_GPIO |
PORT110_GPIO |
PORT111_GPIO */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads 112 ... 127 : PORT112_GPIO |
PORT113_GPIO |
PORT114_GPIO |
PORT115_GPIO |
PORT116_GPIO |
PORT117_GPIO |
PORT118_GPIO |
PORT119_GPIO |
PORT120_GPIO |
PORT121_GPIO |
PORT122_GPIO |
PORT123_GPIO |
PORT124_GPIO |
PORT125_GPIO |
PORT126_GPIO |
PORT127_GPIO */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads 128 ... 143 : PORT128_GPIO |
PORT129_GPIO |
PORT130_GPIO |
PORT131_GPIO |
PORT132_GPIO |
PORT133_GPIO |
PORT134_GPIO |
PORT135_GPIO |
PORT136_GPIO |
PORT139_GPIO |
PORT140_GPIO |
PORT141_GPIO |
PORT142_GPIO |
PORT143_GPIO */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads 144 ... 159 : PORT144_GPIO |
PORT145_GPIO |
PORT146_GPIO |
PORT147_GPIO |
PORT148_GPIO |
PORT157_GPIO |
PORT158_GPIO */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14)
          )
}
,
/*  Mode PORT_ALT1_FUNC_MODE: */
{
/* Pads   0 ...  15 : PORT0_EMIOS0_E0UC_0_X_OUT |
PORT1_EMIOS0_E0UC_1_G_OUT |
PORT2_EMIOS0_E0UC_2_G_OUT |
PORT3_EMIOS0_E0UC_3_G_OUT |
PORT4_EMIOS0_E0UC_4_G_OUT |
PORT5_EMIOS0_E0UC_5_G_OUT |
PORT6_EMIOS0_E0UC_6_G_OUT |
PORT7_EMIOS0_E0UC_7_G_OUT |
PORT8_EMIOS0_E0UC_8_X_OUT |
PORT9_EMIOS0_E0UC_9_H_OUT |
PORT10_EMIOS0_E0UC_10_H_OUT |
PORT11_EMIOS0_E0UC_11_H_OUT |
PORT12_EMIOS0_E0UC_28_Y_OUT |
PORT13_DSPI_0_dSOUT |
PORT14_DSPI_0_dSCLK_OUT |
PORT15_DSPI_0_dCS0 */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  16 ...  31 : PORT16_FlexCAN_0_TX |
PORT17_EMIOS0_E0UC_31_Y_OUT |
PORT18_LIN_0_LIN0TX |
PORT19_EMIOS0_E0UC_31_Y_OUT |
PORT26_DSPI_1_dSOUT |
PORT27_EMIOS0_E0UC_3_G_OUT |
PORT28_EMIOS0_E0UC_4_G_OUT |
PORT29_EMIOS0_E0UC_5_G_OUT |
PORT30_EMIOS0_E0UC_6_G_OUT |
PORT31_EMIOS0_E0UC_7_G_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  32 ...  47 : PORT32_DCI_TDI |
PORT33_DCI_TDO |
PORT34_DSPI_1_dSCLK_OUT |
PORT35_DSPI_1_dCS0 |
PORT36_EMIOS1_E1UC_31_Y_OUT |
PORT37_DSPI_1_dSOUT |
PORT38_LIN_1_LIN1TX |
PORT39_EMIOS1_E1UC_29_Y_OUT |
PORT40_LIN_2_LIN2TX |
PORT41_EMIOS0_E0UC_7_G_OUT |
PORT42_FlexCAN_1_TX |
PORT43_ADC_0_ADC0_MA_2 |
PORT44_EMIOS0_E0UC_12_H_OUT |
PORT45_EMIOS0_E0UC_13_H_OUT |
PORT46_EMIOS0_E0UC_14_H_OUT |
PORT47_EMIOS0_E0UC_15_H_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  48 ...  63 : PORT60_DSPI_0_dCS5 |
PORT61_DSPI_1_dCS0 |
PORT62_DSPI_1_dCS1 |
PORT63_DSPI_1_dCS2 */
  (uint16)( SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  64 ...  79 : PORT64_EMIOS0_E0UC_16_X_OUT |
PORT65_EMIOS0_E0UC_17_Y_OUT |
PORT66_EMIOS0_E0UC_18_Y_OUT |
PORT67_EMIOS0_E0UC_19_Y_OUT |
PORT68_EMIOS0_E0UC_20_Y_OUT |
PORT69_EMIOS0_E0UC_21_Y_OUT |
PORT70_EMIOS0_E0UC_22_X_OUT |
PORT71_EMIOS0_E0UC_23_X_OUT |
PORT72_FlexCAN_2_TX |
PORT73_EMIOS0_E0UC_23_X_OUT |
PORT74_LIN_3_LIN3TX |
PORT75_EMIOS0_E0UC_24_X_OUT |
PORT76_EMIOS1_E1UC_19_Y_OUT |
PORT77_DSPI_2_dSOUT |
PORT78_DSPI_2_dSCLK_OUT |
PORT79_DSPI_2_dCS0 */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  80 ...  95 : PORT80_EMIOS0_E0UC_10_H_OUT |
PORT81_EMIOS0_E0UC_11_H_OUT |
PORT82_EMIOS0_E0UC_12_H_OUT |
PORT83_EMIOS0_E0UC_13_H_OUT |
PORT84_EMIOS0_E0UC_14_H_OUT |
PORT85_EMIOS0_E0UC_22_X_OUT |
PORT86_EMIOS0_E0UC_23_X_OUT |
PORT87_SPI_0_SCLK_0_OUT |
PORT88_FlexCAN_3_TX |
PORT89_EMIOS1_E1UC_1_H_OUT |
PORT90_DSPI_0_dCS1 |
PORT91_DSPI_0_dCS2 |
PORT92_EMIOS1_E1UC_25_Y_OUT |
PORT93_EMIOS1_E1UC_26_Y_OUT |
PORT94_FlexCAN_4_TX |
PORT95_EMIOS1_E1UC_4_H_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  96 ... 111 : PORT96_FlexCAN_5_TX |
PORT97_EMIOS1_E1UC_24_X_OUT |
PORT98_EMIOS1_E1UC_11_H_OUT |
PORT99_EMIOS1_E1UC_12_H_OUT |
PORT100_EMIOS1_E1UC_13_H_OUT |
PORT101_EMIOS1_E1UC_14_H_OUT |
PORT102_EMIOS1_E1UC_15_H_OUT |
PORT103_EMIOS1_E1UC_16_X_OUT |
PORT104_EMIOS1_E1UC_17_Y_OUT |
PORT105_EMIOS1_E1UC_18_Y_OUT |
PORT106_EMIOS0_E0UC_24_X_OUT |
PORT107_EMIOS0_E0UC_25_Y_OUT |
PORT108_EMIOS0_E0UC_26_Y_OUT |
PORT109_EMIOS0_E0UC_27_Y_OUT |
PORT110_EMIOS1_E1UC_0_X_OUT |
PORT111_EMIOS1_E1UC_1_H_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads 112 ... 127 : PORT112_EMIOS1_E1UC_2_H_OUT |
PORT113_EMIOS1_E1UC_3_H_OUT |
PORT114_EMIOS1_E1UC_4_H_OUT |
PORT115_EMIOS1_E1UC_5_H_OUT |
PORT116_EMIOS1_E1UC_6_H_OUT |
PORT117_EMIOS1_E1UC_7_H_OUT |
PORT118_EMIOS1_E1UC_8_X_OUT |
PORT119_EMIOS1_E1UC_9_H_OUT |
PORT120_EMIOS1_E1UC_10_H_OUT |
PORT121_DCI_TCK |
PORT122_DCI_TMS_OUT |
PORT123_DSPI_3_dSOUT |
PORT124_DSPI_3_dSCLK_OUT |
PORT125_SPI_0_SOUT_0 |
PORT126_SPI_0_SCLK_0_OUT |
PORT127_SPI_1_SOUT_1 */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads 128 ... 143 : PORT128_EMIOS0_E0UC_28_Y_OUT |
PORT129_EMIOS0_E0UC_29_Y_OUT |
PORT130_EMIOS0_E0UC_30_Y_OUT |
PORT131_EMIOS0_E0UC_31_Y_OUT |
PORT132_EMIOS1_E1UC_28_Y_OUT |
PORT133_EMIOS1_E1UC_29_Y_OUT |
PORT134_EMIOS1_E1UC_30_Y_OUT |
PORT135_EMIOS1_E1UC_31_Y_OUT |
PORT140_DSPI_3_dCS0 |
PORT141_DSPI_3_dCS1 |
PORT142_SAI2_SAI2_D0_OUT |
PORT143_SPI_0_CS0_0 */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads 144 ... 159 : PORT144_SPI_0_CS1_0 |
PORT145_SPI_0_SOUT_0 |
PORT146_SPI_1_CS0_1 |
PORT147_SPI_1_CS1_1 |
PORT148_SPI_1_SCLK_1_OUT |
PORT157_SPI_3_CS1_3 |
PORT158_FlexCAN_1_TX */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14)
          )
}
,
/*  Mode PORT_ALT2_FUNC_MODE: */
{
/* Pads   0 ...  15 : PORT0_CGM_CLKOUT0 |
PORT3_LIN_5_LIN5TX |
PORT4_DSPI_1_dCS0 |
PORT5_LIN_4_LIN4TX |
PORT6_DSPI_1_dCS1 |
PORT7_LIN_3_LIN3TX |
PORT8_EMIOS0_E0UC_14_H_OUT |
PORT9_DSPI_1_dCS2 |
PORT10_IIC_0_SDA0_OUT |
PORT11_IIC_0_SCL0_OUT |
PORT12_DSPI_1_dCS3 |
PORT13_EMIOS0_E0UC_29_Y_OUT |
PORT14_DSPI_0_dCS0 |
PORT15_DSPI_0_dSCLK_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  16 ...  31 : PORT16_EMIOS0_E0UC_30_Y_OUT |
PORT17_EMIOS0_E0UC_5_G_OUT |
PORT18_IIC_0_SDA0_OUT |
PORT19_IIC_0_SCL0_OUT |
PORT26_FlexCAN_3_TX |
PORT27_DSPI_0_dCS0 |
PORT28_DSPI_0_dCS1 |
PORT29_DSPI_0_dCS2 |
PORT30_DSPI_0_dCS3 |
PORT31_DSPI_0_dCS4 */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  32 ...  47 : PORT34_FlexCAN_4_TX |
PORT35_ADC_0_ADC0_MA_0 |
PORT36_FlexRay_FR_B_TX_EN |
PORT37_FlexCAN_3_TX |
PORT38_EMIOS1_E1UC_28_Y_OUT |
PORT39_CMP1_CMP1_O |
PORT40_EMIOS0_E0UC_3_G_OUT |
PORT42_FlexCAN_4_TX |
PORT43_EMIOS0_E0UC_1_G_OUT |
PORT44_FlexRay_FR_DBG_0 |
PORT45_DSPI_2_dSOUT |
PORT46_DSPI_2_dSCLK_OUT |
PORT47_DSPI_2_dCS0 */
  (uint16)( SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  48 ...  63 : PORT60_EMIOS0_E0UC_24_X_OUT |
PORT61_EMIOS0_E0UC_25_Y_OUT |
PORT62_EMIOS0_E0UC_26_Y_OUT |
PORT63_EMIOS0_E0UC_27_Y_OUT */
  (uint16)( SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  64 ...  79 : PORT64_IIC_1_SCL1_OUT |
PORT65_FlexCAN_5_TX |
PORT66_FlexRay_FR_A_TX_EN |
PORT67_DSPI_1_dSOUT |
PORT68_DSPI_1_dSCLK_OUT |
PORT69_DSPI_1_dCS0 |
PORT70_DSPI_0_dCS3 |
PORT71_DSPI_0_dCS2 |
PORT72_EMIOS0_E0UC_22_X_OUT |
PORT73_IIC_2_SCL2_OUT |
PORT74_DSPI_1_dCS3 |
PORT75_DSPI_1_dCS4 |
PORT77_EMIOS1_E1UC_20_Y_OUT |
PORT78_EMIOS1_E1UC_21_Y_OUT |
PORT79_EMIOS1_E1UC_22_X_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  80 ...  95 : PORT80_DSPI_1_dCS3 |
PORT81_DSPI_1_dCS4 |
PORT82_DSPI_2_dCS0 |
PORT83_DSPI_2_dCS1 |
PORT84_DSPI_2_dCS2 |
PORT85_DSPI_2_dCS3 |
PORT86_DSPI_1_dCS1 |
PORT87_DSPI_1_dCS2 |
PORT88_DSPI_0_dCS4 |
PORT89_DSPI_0_dCS5 |
PORT90_LIN_4_LIN4TX |
PORT91_EMIOS1_E1UC_3_H_OUT |
PORT92_LIN_5_LIN5TX |
PORT93_EMIOS0_E0UC_22_X_OUT |
PORT94_EMIOS1_E1UC_27_Y_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14)
          ),
/* Pads  96 ... 111 : PORT96_EMIOS1_E1UC_23_X_OUT |
PORT97_ENET0_MII_RMII_0_TX_CLK_OUT |
PORT98_DSPI_3_dSOUT |
PORT99_DSPI_3_dCS0 |
PORT100_DSPI_3_dSCLK_OUT |
PORT101_EMIOS0_E0UC_2_G_OUT |
PORT102_LIN_6_LIN6TX |
PORT103_EMIOS1_E1UC_30_Y_OUT |
PORT104_LIN_7_LIN7TX |
PORT105_DSPI_2_dSCLK_OUT |
PORT106_EMIOS1_E1UC_31_Y_OUT |
PORT107_SPI_0_CS0_0 |
PORT108_SPI_0_SOUT_0 |
PORT109_SPI_0_SCLK_0_OUT |
PORT110_LIN_8_LIN8TX |
PORT111_SPI_2_SOUT_2 */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads 112 ... 127 : PORT113_DSPI_1_dSOUT |
PORT114_DSPI_1_dSCLK_OUT |
PORT115_DSPI_1_dCS0 |
PORT116_SPI_3_SOUT_3 |
PORT117_IIC_3_SDA3_OUT |
PORT118_SPI_3_SCLK_3_OUT |
PORT119_DSPI_2_dCS3 |
PORT120_DSPI_2_dCS2 |
PORT123_SPI_0_CS0_0 |
PORT124_SPI_0_CS1_0 |
PORT125_DSPI_3_dCS0 |
PORT126_DSPI_3_dCS1 */
  (uint16)( SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14)
          ),
/* Pads 128 ... 143 : PORT128_LIN_8_LIN8TX |
PORT129_IIC_1_SCL1_OUT |
PORT130_LIN_9_LIN9TX |
PORT131_IIC_2_SCL2_OUT |
PORT132_SPI_0_SOUT_0 |
PORT133_SPI_0_SCLK_0_OUT |
PORT134_SPI_0_CS0_0 |
PORT135_SPI_0_CS1_0 |
PORT139_ENET0_ENET0_TMR1_OUT |
PORT140_DSPI_2_dCS0 |
PORT141_DSPI_2_dCS1 |
PORT143_DSPI_2_dCS2 */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(15)
          ),
/* Pads 144 ... 159 : PORT144_DSPI_2_dCS3 |
PORT145_SAI2_SAI2_BCLK_OUT |
PORT146_SPI_2_CS0_2 |
PORT147_SPI_2_CS1_2 |
PORT148_EMIOS1_E1UC_18_Y_OUT |
PORT158_FlexCAN_4_TX */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(14)
          )
}
,
/*  Mode PORT_ALT3_FUNC_MODE: */
{
/* Pads   0 ...  15 : PORT0_EMIOS0_E0UC_13_H_OUT |
PORT2_ADC_0_ADC0_MA_2 |
PORT3_DSPI_1_dCS4 |
PORT4_EMIOS0_E0UC_24_X_OUT |
PORT10_LIN_2_LIN2TX |
PORT12_EMIOS0_E0UC_26_Y_OUT |
PORT13_EMIOS0_E0UC_25_Y_OUT |
PORT14_EMIOS0_E0UC_0_X_OUT |
PORT15_EMIOS0_E0UC_1_G_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(10) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  16 ...  31 : PORT16_LIN_0_LIN0TX |
PORT18_EMIOS0_E0UC_30_Y_OUT |
PORT19_EMIOS0_E0UC_8_X_OUT |
PORT26_CMP2_CMP2_O |
PORT28_HSM_DO1 |
PORT30_FlexRay_FR_DBG_1 */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(10) |
SHL_PAD_U16(12) |
SHL_PAD_U16(14)
          ),
/* Pads  32 ...  47 : PORT38_EMIOS0_E0UC_17_Y_OUT |
PORT39_EMIOS0_E0UC_18_Y_OUT |
PORT41_SSCM_SSCM_DBG_7 |
PORT42_ADC_0_ADC0_MA_1 |
PORT45_FlexRay_FR_DBG_1 */
  (uint16)( SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(13)
          ),
/* Pads  48 ...  63 : PORT60_HSM_DO0 |
PORT61_ENET0_ENET0_TMR0_OUT |
PORT62_FlexRay_FR_DBG_0 |
PORT63_FlexRay_FR_DBG_1 */
  (uint16)( SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  64 ...  79 : PORT65_IIC_1_SDA1_OUT |
PORT68_FlexRay_FR_B_TX |
PORT69_ADC_0_ADC0_MA_2 |
PORT70_ADC_0_ADC0_MA_1 |
PORT71_ADC_0_ADC0_MA_0 |
PORT72_FlexCAN_3_TX |
PORT74_EMIOS1_E1UC_30_Y_OUT |
PORT75_CGM_CLKOUT1 |
PORT79_SPI_2_SCLK_2_OUT */
  (uint16)( SHL_PAD_U16(1) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(15)
          ),
/* Pads  80 ...  95 : PORT81_SPI_0_CS3_0 |
PORT85_SPI_0_CS2_0 |
PORT88_FlexCAN_2_TX |
PORT89_EMIOS0_E0UC_14_H_OUT |
PORT90_EMIOS1_E1UC_2_H_OUT |
PORT91_EMIOS0_E0UC_20_Y_OUT |
PORT92_EMIOS0_E0UC_16_X_OUT |
PORT94_FlexCAN_1_TX */
  (uint16)( SHL_PAD_U16(1) |
SHL_PAD_U16(5) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(14)
          ),
/* Pads  96 ... 111 : PORT96_ENET0_MII_RMII_0_MDC |
PORT98_FlexCAN_7_TX |
PORT100_LIN_10_LIN10TX |
PORT102_CGM_CLKOUT1 |
PORT103_CGM_CLKOUT0 |
PORT104_DSPI_2_dCS0 |
PORT105_EMIOS0_E0UC_0_X_OUT |
PORT107_SPI_2_CS0_2 */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(2) |
SHL_PAD_U16(4) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(11)
          ),
/* Pads 112 ... 127 : PORT112_ENET0_MII_RMII_0_TXD_1 |
PORT115_ENET0_MII_0_TX_ER |
PORT116_IIC_3_SCL3_OUT |
PORT118_ADC_0_ADC0_MA_2 |
PORT119_ADC_0_ADC0_MA_1 |
PORT120_ADC_0_ADC0_MA_0 |
PORT123_EMIOS1_E1UC_5_H_OUT |
PORT124_EMIOS1_E1UC_25_Y_OUT |
PORT125_EMIOS1_E1UC_26_Y_OUT |
PORT126_EMIOS1_E1UC_27_Y_OUT |
PORT127_EMIOS1_E1UC_17_Y_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads 128 ... 143 : PORT128_IIC_1_SDA1_OUT |
PORT130_IIC_2_SDA2_OUT |
PORT133_SPI_1_CS2_1 |
PORT134_SPI_1_CS0_1 |
PORT135_SPI_1_CS1_1 |
PORT143_SAI2_SAI2_MCLK_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(2) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(15)
          ),
/* Pads 144 ... 159 : PORT144_SAI2_SAI2_SYNC_OUT |
PORT146_SPI_3_CS0_3 |
PORT147_SPI_3_CS1_3 |
PORT157_EMIOS1_E1UC_15_H_OUT |
PORT158_SPI_3_CS2_3 */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14)
          )
}
,
/*  Mode PORT_ALT4_FUNC_MODE: */
{
/* Pads   0 ...  15 : PORT13_FlexCAN_0_TX |
PORT14_EMIOS0_E0UC_23_X_OUT |
PORT15_EMIOS0_E0UC_21_Y_OUT */
  (uint16)( SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  16 ...  31 : PORT16_EMIOS0_E0UC_4_G_OUT |
PORT26_SAI0_SAI0_SYNC_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(10)
          ),
/* Pads  32 ...  47 : PORT34_SSCM_SSCM_DBG_0 |
PORT35_SSCM_SSCM_DBG_1 |
PORT37_FlexRay_FR_A_TX |
PORT38_SSCM_SSCM_DBG_4 |
PORT39_SSCM_SSCM_DBG_5 |
PORT40_SSCM_SSCM_DBG_6 |
PORT42_CMP0_CMP0_O |
PORT46_FlexRay_FR_DBG_2 |
PORT47_FlexRay_FR_DBG_3 */
  (uint16)( SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(10) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads 48 ... 63 */
  (uint16)0x0000,
/* Pads  64 ...  79 : PORT70_ADC_1_ADC1_MA_1 |
PORT71_ADC_1_ADC1_MA_0 |
PORT72_IIC_2_SDA2_OUT |
PORT74_IIC_3_SDA3_OUT |
PORT75_IIC_3_SCL3_OUT */
  (uint16)( SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11)
          ),
/* Pads  80 ...  95 : PORT80_FlexCAN_6_TX |
PORT81_SAI0_SAI0_BCLK_OUT |
PORT82_SAI0_SAI0_D3_OUT |
PORT83_SAI0_SAI0_D2_OUT |
PORT84_SAI0_SAI0_D1_OUT |
PORT85_SAI0_SAI0_D0_OUT |
PORT86_SAI1_SAI1_SYNC_OUT |
PORT88_EMIOS0_E0UC_15_H_OUT |
PORT90_EMIOS0_E0UC_19_Y_OUT |
PORT92_FCCU_EOUT1_OUT |
PORT94_ENET0_MII_RMII_0_MDIO_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(8) |
SHL_PAD_U16(10) |
SHL_PAD_U16(12) |
SHL_PAD_U16(14)
          ),
/* Pads  96 ... 111 : PORT98_LIN_11_LIN11TX |
PORT102_EMIOS0_E0UC_3_G_OUT |
PORT104_FlexCAN_7_TX |
PORT108_ENET0_MII_0_TXD_2 |
PORT109_ENET0_MII_0_TXD_3 */
  (uint16)( SHL_PAD_U16(2) |
SHL_PAD_U16(6) |
SHL_PAD_U16(8) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13)
          ),
/* Pads 112 ... 127 : PORT113_ENET0_MII_RMII_0_TXD_0 |
PORT114_ENET0_MII_RMII_0_TX_EN |
PORT118_ADC_1_ADC1_MA_2 |
PORT119_SPI_3_CS0_3 |
PORT120_ADC_1_ADC1_MA_0 |
PORT125_FCCU_EOUT1_OUT |
PORT127_FCCU_EOUT0_OUT */
  (uint16)( SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(13) |
SHL_PAD_U16(15)
          ),
/* Pads 128 ... 143 : PORT133_SPI_2_CS2_2 |
PORT134_SPI_2_CS0_2 |
PORT135_SPI_2_CS1_2 */
  (uint16)( SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7)
          ),
/* Pads 144 ... 159 : PORT146_SAI1_SAI1_D0_OUT |
PORT147_SAI1_SAI1_BCLK_OUT |
PORT158_FlexCAN_6_TX */
  (uint16)( SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(14)
          )
}
,
/*  Mode PORT_ALT5_FUNC_MODE: */
{
/* Pads 0 ... 15 */
  (uint16)0x0000,
/* Pads  16 ...  31 : PORT26_EMIOS0_E0UC_29_Y_OUT */
  (uint16)( SHL_PAD_U16(10)
          ),
/* Pads  32 ...  47 : PORT36_SSCM_SSCM_DBG_2 |
PORT46_FlexCAN_4_TX */
  (uint16)( SHL_PAD_U16(4) |
SHL_PAD_U16(14)
          ),
/* Pads 48 ... 63 */
  (uint16)0x0000,
/* Pads  64 ...  79 : PORT72_LIN_6_LIN6TX */
  (uint16)( SHL_PAD_U16(8)
          ),
/* Pads  80 ...  95 : PORT86_EMIOS0_E0UC_30_Y_OUT |
PORT90_FCCU_EOUT0_OUT */
  (uint16)( SHL_PAD_U16(6) |
SHL_PAD_U16(10)
          ),
/* Pads 96 ... 111 */
  (uint16)0x0000,
/* Pads 112 ... 127 : PORT119_ADC_1_ADC1_MA_1 */
  (uint16)( SHL_PAD_U16(7)
          ),
/* Pads 128 ... 143 : PORT134_HSM_DO0 |
PORT135_HSM_DO1 */
  (uint16)( SHL_PAD_U16(6) |
SHL_PAD_U16(7)
          ),
/* Pads 144 ... 159 */
  (uint16)0x0000
}
,
/*  Mode PORT_ALT6_FUNC_MODE: */
{
/* Pads 0 ... 15 */
  (uint16)0x0000,
/* Pads 16 ... 31 */
  (uint16)0x0000,
/* Pads  32 ...  47 : PORT42_LIN_6_LIN6TX */
  (uint16)( SHL_PAD_U16(10)
          ),
/* Pads 48 ... 63 */
  (uint16)0x0000,
/* Pads 64 ... 79 */
  (uint16)0x0000,
/* Pads  80 ...  95 : PORT87_SAI1_SAI1_MCLK_OUT */
  (uint16)( SHL_PAD_U16(7)
          ),
/* Pads 96 ... 111 */
  (uint16)0x0000,
/* Pads 112 ... 127 */
  (uint16)0x0000,
/* Pads 128 ... 143 */
  (uint16)0x0000,
/* Pads 144 ... 159 : PORT158_EMIOS1_E1UC_14_H_OUT */
  (uint16)( SHL_PAD_U16(14)
          )
}
,
/*  Mode PORT_ALT7_FUNC_MODE: */
{
/* Pads 0 ... 15 */
  (uint16)0x0000,
/* Pads 16 ... 31 */
  (uint16)0x0000,
/* Pads  32 ...  47 : PORT37_SSCM_SSCM_DBG_3 */
  (uint16)( SHL_PAD_U16(5)
          ),
/* Pads 48 ... 63 */
  (uint16)0x0000,
/* Pads 64 ... 79 */
  (uint16)0x0000,
/* Pads  80 ...  95 : PORT80_SAI0_SAI0_MCLK_OUT */
  (uint16)( SHL_PAD_U16(0)
          ),
/* Pads 96 ... 111 */
  (uint16)0x0000,
/* Pads 112 ... 127 */
  (uint16)0x0000,
/* Pads 128 ... 143 */
  (uint16)0x0000,
/* Pads 144 ... 159 */
  (uint16)0x0000
}
,
/*  Mode PORT_ONLY_OUTPUT_MODE: */
{
/* Pads 0 ... 15 */
  (uint16)0x0000,
/* Pads 16 ... 31 */
  (uint16)0x0000,
/* Pads 32 ... 47 */
  (uint16)0x0000,
/* Pads 48 ... 63 */
  (uint16)0x0000,
/* Pads 64 ... 79 */
  (uint16)0x0000,
/* Pads 80 ... 95 */
  (uint16)0x0000,
/* Pads  96 ... 111 : PORT102_PMCDIG_EXTREGC */
  (uint16)( SHL_PAD_U16(6)
          ),
/* Pads 112 ... 127 */
  (uint16)0x0000,
/* Pads 128 ... 143 */
  (uint16)0x0000,
/* Pads 144 ... 159 */
  (uint16)0x0000
}
,
/*  Mode PORT_ONLY_INPUT_MODE: */
{
/* Pads   0 ...  15 : PORT0_WKPU_WKPU_19 |
PORT1_WKPU_WKPU_2 |
PORT1_WKPU_NMI_0 |
PORT2_WKPU_WKPU_3 |
PORT4_WKPU_WKPU_9 |
PORT15_WKPU_WKPU_10 */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(4) |
SHL_PAD_U16(15)
          ),
/* Pads  16 ...  31 : PORT17_WKPU_WKPU_4 |
PORT19_WKPU_WKPU_11 |
PORT20_GPI |
PORT21_GPI |
PORT22_GPI |
PORT23_GPI |
PORT24_GPI |
PORT24_WKPU_WKPU_25 |
PORT24_XOSC_OSC32K_XTAL |
PORT25_GPI |
PORT25_WKPU_WKPU_26 |
PORT25_XOSC_OSC32K_EXTAL |
PORT26_WKPU_WKPU_8 */
  (uint16)( SHL_PAD_U16(1) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(8) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(9) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10)
          ),
/* Pads  32 ...  47 : PORT39_WKPU_WKPU_12 |
PORT41_WKPU_WKPU_13 |
PORT43_WKPU_WKPU_5 */
  (uint16)( SHL_PAD_U16(7) |
SHL_PAD_U16(9) |
SHL_PAD_U16(11)
          ),
/* Pads  48 ...  63 : PORT48_GPI |
PORT48_WKPU_WKPU_27 |
PORT49_GPI |
PORT49_WKPU_WKPU_28 |
PORT50_GPI |
PORT51_GPI |
PORT52_GPI |
PORT53_GPI |
PORT54_GPI |
PORT55_GPI |
PORT56_GPI |
PORT57_GPI |
PORT58_GPI */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10)
          ),
/* Pads  64 ...  79 : PORT64_WKPU_WKPU_6 |
PORT67_WKPU_WKPU_29 |
PORT69_WKPU_WKPU_30 |
PORT73_WKPU_WKPU_7 |
PORT75_WKPU_WKPU_14 */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(3) |
SHL_PAD_U16(5) |
SHL_PAD_U16(9) |
SHL_PAD_U16(11)
          ),
/* Pads  80 ...  95 : PORT89_WKPU_WKPU_22 |
PORT90_FCCU_EOUT0_IN |
PORT91_WKPU_WKPU_15 |
PORT92_FCCU_EOUT1_IN |
PORT93_WKPU_WKPU_16 */
  (uint16)( SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13)
          ),
/* Pads  96 ... 111 : PORT99_WKPU_WKPU_17 |
PORT101_WKPU_WKPU_18 |
PORT103_WKPU_WKPU_20 |
PORT105_WKPU_WKPU_21 */
  (uint16)( SHL_PAD_U16(3) |
SHL_PAD_U16(5) |
SHL_PAD_U16(7) |
SHL_PAD_U16(9)
          ),
/* Pads 112 ... 127 : PORT122_DCI_TMS_IN |
PORT125_FCCU_EOUT1_IN |
PORT127_FCCU_EOUT0_IN */
  (uint16)( SHL_PAD_U16(10) |
SHL_PAD_U16(13) |
SHL_PAD_U16(15)
          ),
/* Pads 128 ... 143 : PORT129_WKPU_WKPU_24 |
PORT131_WKPU_WKPU_23 */
  (uint16)( SHL_PAD_U16(1) |
SHL_PAD_U16(3)
          ),
/* Pads 144 ... 159 : PORT157_WKPU_WKPU_31 */
  (uint16)( SHL_PAD_U16(13)
          )
}
,
/*  Mode PORT_ANALOG_INPUT_MODE: */
{
/* Pads   0 ...  15 : PORT3_ADC_1_ADC1_S_0 |
PORT4_CMP1_CMP1_13 |
PORT7_ADC_1_ADC1_S_8 |
PORT8_ADC_1_ADC1_S_9 |
PORT9_ADC_1_ADC1_S_10 |
PORT10_ADC_1_ADC1_S_11 |
PORT11_ADC_1_ADC1_S_12 |
PORT12_CMP1_CMP1_15 |
PORT13_CMP1_CMP1_14 |
PORT14_CMP1_CMP1_12 |
PORT15_CMP1_CMP1_10 */
  (uint16)( SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  16 ...  31 : PORT16_CMP0_CMP0_2 |
PORT17_CMP0_CMP0_3 |
PORT20_ADC_1_ADC1_P_0 |
PORT21_ADC_1_ADC1_P_1 |
PORT22_ADC_1_ADC1_P_2 |
PORT23_ADC_1_ADC1_P_3 |
PORT24_ADC_0_ADC0_S_0 |
PORT25_ADC_0_ADC0_S_1 |
PORT26_ADC_0_ADC0_S_2 |
PORT27_ADC_0_ADC0_S_3 |
PORT28_ADC_0_ADC0_X_0 |
PORT29_ADC_0_ADC0_X_1 |
PORT30_ADC_0_ADC0_X_2 |
PORT31_ADC_0_ADC0_X_3 */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  32 ...  47 : PORT38_CMP0_CMP0_7 */
  (uint16)( SHL_PAD_U16(6)
          ),
/* Pads  48 ...  63 : PORT48_ADC_1_ADC1_P_4 |
PORT49_ADC_1_ADC1_P_5 |
PORT50_ADC_1_ADC1_P_6 |
PORT51_ADC_1_ADC1_P_7 |
PORT52_ADC_1_ADC1_P_8 |
PORT53_ADC_1_ADC1_P_9 |
PORT54_ADC_1_ADC1_P_10 |
PORT55_ADC_1_ADC1_P_11 |
PORT56_ADC_1_ADC1_P_12 |
PORT57_ADC_1_ADC1_P_13 |
PORT58_ADC_1_ADC1_P_14 |
PORT60_ADC_0_ADC0_S_4 |
PORT61_ADC_0_ADC0_S_5 |
PORT62_ADC_0_ADC0_S_6 |
PORT63_ADC_0_ADC0_S_7 */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  64 ...  79 : PORT76_ADC_1_ADC1_S_13 |
PORT77_ADC_1_ADC1_X_3 */
  (uint16)( SHL_PAD_U16(12) |
SHL_PAD_U16(13)
          ),
/* Pads  80 ...  95 : PORT80_ADC_0_ADC0_S_8 |
PORT80_CMP2_CMP2_16 |
PORT81_ADC_0_ADC0_S_9 |
PORT81_CMP2_CMP2_17 |
PORT82_ADC_0_ADC0_S_10 |
PORT82_CMP2_CMP2_18 |
PORT83_ADC_0_ADC0_S_11 |
PORT83_CMP2_CMP2_19 |
PORT84_ADC_0_ADC0_S_12 |
PORT84_CMP2_CMP2_20 |
PORT85_ADC_0_ADC0_S_13 |
PORT85_CMP2_CMP2_21 |
PORT86_ADC_0_ADC0_S_14 |
PORT86_CMP2_CMP2_22 |
PORT87_ADC_0_ADC0_S_15 |
PORT87_CMP2_CMP2_23 |
PORT88_CMP0_CMP0_5 |
PORT89_CMP0_CMP0_4 |
PORT90_CMP1_CMP1_8 |
PORT91_CMP1_CMP1_9 |
PORT92_CMP0_CMP0_6 |
PORT93_CMP1_CMP1_11 |
PORT94_ADC_1_ADC1_X_2 |
PORT95_ADC_1_ADC1_X_1 */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  96 ... 111 : PORT96_ADC_1_ADC1_X_0 |
PORT97_ADC_1_ADC1_S_7 |
PORT102_CMP0_CMP0_1 |
PORT103_CMP0_CMP0_0 |
PORT108_ADC_1_ADC1_S_2 |
PORT109_ADC_1_ADC1_S_1 */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13)
          ),
/* Pads 112 ... 127 : PORT112_ADC_1_ADC1_S_3 |
PORT113_ADC_1_ADC1_S_4 |
PORT114_ADC_1_ADC1_S_5 |
PORT115_ADC_1_ADC1_S_6 */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3)
          ),
/* Pads 128 ... 143 : PORT136_ADC_0_ADC0_S_16 |
PORT139_ADC_0_ADC0_S_19 |
PORT140_ADC_0_ADC0_S_20 |
PORT141_ADC_0_ADC0_S_21 |
PORT142_ADC_0_ADC0_S_22 |
PORT143_ADC_0_ADC0_S_23 */
  (uint16)( SHL_PAD_U16(8) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads 144 ... 159 : PORT144_ADC_0_ADC0_S_24 |
PORT145_ADC_0_ADC0_S_25 |
PORT146_ADC_0_ADC0_S_26 |
PORT147_ADC_0_ADC0_S_27 */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3)
          )
}
,
/*  Mode PORT_INPUT1_MODE: */
{
/* Pads   0 ...  15 : PORT0_EMIOS0_E0UC_0_X_IN |
PORT1_EMIOS0_E0UC_1_G_IN |
PORT2_EMIOS0_E0UC_2_G_IN |
PORT3_EMIOS0_E0UC_3_G_IN |
PORT4_EMIOS0_E0UC_4_G_IN |
PORT5_EMIOS0_E0UC_5_G_IN |
PORT6_EMIOS0_E0UC_6_G_IN |
PORT7_EMIOS0_E0UC_7_G_IN |
PORT8_EMIOS0_E0UC_8_X_IN |
PORT9_EMIOS0_E0UC_9_H_IN |
PORT10_EMIOS0_E0UC_10_H_IN |
PORT11_EMIOS0_E0UC_11_H_IN |
PORT12_EMIOS0_E0UC_28_Y_IN |
PORT13_EMIOS0_E0UC_29_Y_IN |
PORT14_EMIOS0_E0UC_0_X_IN |
PORT15_EMIOS0_E0UC_1_G_IN */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  16 ...  31 : PORT16_EMIOS0_E0UC_30_Y_IN |
PORT17_EMIOS0_E0UC_31_Y_IN |
PORT18_EMIOS0_E0UC_30_Y_IN |
PORT19_EMIOS0_E0UC_31_Y_IN |
PORT26_FlexCAN_6_RX |
PORT27_EMIOS0_E0UC_3_G_IN |
PORT28_EMIOS0_E0UC_4_G_IN |
PORT29_EMIOS0_E0UC_5_G_IN |
PORT30_EMIOS0_E0UC_6_G_IN |
PORT31_EMIOS0_E0UC_7_G_IN */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  32 ...  47 : PORT34_SIUL2_EIRQ5 |
PORT35_SIUL2_EIRQ6 |
PORT36_EMIOS1_E1UC_31_Y_IN |
PORT37_SIUL2_EIRQ7 |
PORT38_EMIOS1_E1UC_28_Y_IN |
PORT39_EMIOS1_E1UC_29_Y_IN |
PORT40_EMIOS0_E0UC_3_G_IN |
PORT41_EMIOS0_E0UC_7_G_IN |
PORT43_FlexCAN_1_RX |
PORT44_EMIOS0_E0UC_12_H_IN |
PORT45_EMIOS0_E0UC_13_H_IN |
PORT46_EMIOS0_E0UC_14_H_IN |
PORT47_EMIOS0_E0UC_15_H_IN */
  (uint16)( SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  48 ...  63 : PORT60_EMIOS0_E0UC_24_X_IN |
PORT61_EMIOS0_E0UC_25_Y_IN |
PORT62_EMIOS0_E0UC_26_Y_IN |
PORT63_EMIOS0_E0UC_27_Y_IN */
  (uint16)( SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  64 ...  79 : PORT64_EMIOS0_E0UC_16_X_IN |
PORT65_EMIOS0_E0UC_17_Y_IN |
PORT66_EMIOS0_E0UC_18_Y_IN |
PORT67_EMIOS0_E0UC_19_Y_IN |
PORT68_EMIOS0_E0UC_20_Y_IN |
PORT69_EMIOS0_E0UC_21_Y_IN |
PORT70_EMIOS0_E0UC_22_X_IN |
PORT71_EMIOS0_E0UC_23_X_IN |
PORT72_EMIOS0_E0UC_22_X_IN |
PORT73_EMIOS0_E0UC_23_X_IN |
PORT74_EMIOS1_E1UC_30_Y_IN |
PORT75_EMIOS0_E0UC_24_X_IN |
PORT76_EMIOS1_E1UC_19_Y_IN |
PORT77_EMIOS1_E1UC_20_Y_IN |
PORT78_EMIOS1_E1UC_21_Y_IN |
PORT79_EMIOS1_E1UC_22_X_IN */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  80 ...  95 : PORT80_EMIOS0_E0UC_10_H_IN |
PORT81_EMIOS0_E0UC_11_H_IN |
PORT82_EMIOS0_E0UC_12_H_IN |
PORT83_EMIOS0_E0UC_13_H_IN |
PORT84_EMIOS0_E0UC_14_H_IN |
PORT85_EMIOS0_E0UC_22_X_IN |
PORT86_EMIOS0_E0UC_23_X_IN |
PORT87_SPI_0_SCLK_0_IN |
PORT88_EMIOS0_E0UC_15_H_IN |
PORT89_EMIOS1_E1UC_1_H_IN |
PORT90_EMIOS1_E1UC_2_H_IN |
PORT91_EMIOS1_E1UC_3_H_IN |
PORT92_EMIOS1_E1UC_25_Y_IN |
PORT93_EMIOS1_E1UC_26_Y_IN |
PORT94_EMIOS1_E1UC_27_Y_IN |
PORT95_EMIOS1_E1UC_4_H_IN */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  96 ... 111 : PORT96_EMIOS1_E1UC_23_X_IN |
PORT97_EMIOS1_E1UC_24_X_IN |
PORT98_EMIOS1_E1UC_11_H_IN |
PORT99_EMIOS1_E1UC_12_H_IN |
PORT100_EMIOS1_E1UC_13_H_IN |
PORT101_EMIOS1_E1UC_14_H_IN |
PORT102_EMIOS1_E1UC_15_H_IN |
PORT103_EMIOS1_E1UC_16_X_IN |
PORT104_EMIOS1_E1UC_17_Y_IN |
PORT105_EMIOS1_E1UC_18_Y_IN |
PORT106_EMIOS0_E0UC_24_X_IN |
PORT107_EMIOS0_E0UC_25_Y_IN |
PORT108_EMIOS0_E0UC_26_Y_IN |
PORT109_EMIOS0_E0UC_27_Y_IN |
PORT110_EMIOS1_E1UC_0_X_IN |
PORT111_EMIOS1_E1UC_1_H_IN */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads 112 ... 127 : PORT112_EMIOS1_E1UC_2_H_IN |
PORT113_EMIOS1_E1UC_3_H_IN |
PORT114_EMIOS1_E1UC_4_H_IN |
PORT115_EMIOS1_E1UC_5_H_IN |
PORT116_EMIOS1_E1UC_6_H_IN |
PORT117_EMIOS1_E1UC_7_H_IN |
PORT118_EMIOS1_E1UC_8_X_IN |
PORT119_EMIOS1_E1UC_9_H_IN |
PORT120_EMIOS1_E1UC_10_H_IN |
PORT123_EMIOS1_E1UC_5_H_IN |
PORT124_EMIOS1_E1UC_25_Y_IN |
PORT125_EMIOS1_E1UC_26_Y_IN |
PORT126_EMIOS1_E1UC_27_Y_IN |
PORT127_EMIOS1_E1UC_17_Y_IN */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads 128 ... 143 : PORT128_EMIOS0_E0UC_28_Y_IN |
PORT129_EMIOS0_E0UC_29_Y_IN |
PORT130_EMIOS0_E0UC_30_Y_IN |
PORT131_EMIOS0_E0UC_31_Y_IN |
PORT132_EMIOS1_E1UC_28_Y_IN |
PORT133_EMIOS1_E1UC_29_Y_IN |
PORT134_EMIOS1_E1UC_30_Y_IN |
PORT135_EMIOS1_E1UC_31_Y_IN |
PORT139_DSPI_3_dSIN |
PORT140_DSPI_2_dSS |
PORT142_SPI_0_SIN_0 |
PORT143_SPI_0_SS_0 */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads 144 ... 159 : PORT144_SAI2_SAI2_SYNC_IN |
PORT145_SPI_1_SIN_1 |
PORT146_SPI_1_SS_1 |
PORT147_SAI1_SAI1_BCLK_IN |
PORT148_EMIOS1_E1UC_18_Y_IN |
PORT157_EMIOS1_E1UC_15_H_IN |
PORT158_EMIOS1_E1UC_14_H_IN */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14)
          )
}
,
/*  Mode PORT_INPUT2_MODE: */
{
/* Pads   0 ...  15 : PORT0_EMIOS0_E0UC_13_H_IN |
PORT1_FlexCAN_3_RX |
PORT3_SIUL2_EIRQ0 |
PORT4_LIN_5_LIN5RX |
PORT6_SIUL2_EIRQ1 |
PORT7_SIUL2_EIRQ2 |
PORT8_EMIOS0_E0UC_14_H_IN |
PORT9_ENET0_MII_RMII_0_RXD_0 |
PORT10_IIC_0_SDA0_IN |
PORT11_SIUL2_EIRQ16 |
PORT12_SIUL2_EIRQ17 |
PORT13_EMIOS0_E0UC_25_Y_IN |
PORT14_SIUL2_EIRQ4 |
PORT15_FlexCAN_0_RX */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  16 ...  31 : PORT16_EMIOS0_E0UC_4_G_IN |
PORT17_FlexCAN_0_RX |
PORT18_IIC_0_SDA0_IN |
PORT19_LIN_0_LIN0RX |
PORT26_SAI0_SAI0_SYNC_IN |
PORT27_DSPI_0_dSS */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11)
          ),
/* Pads  32 ...  47 : PORT34_DSPI_1_dSCLK_IN |
PORT35_FlexCAN_1_RX |
PORT36_SIUL2_EIRQ18 |
PORT38_EMIOS0_E0UC_17_Y_IN |
PORT39_LIN_1_LIN1RX |
PORT41_LIN_2_LIN2RX |
PORT43_FlexCAN_4_RX |
PORT44_SIUL2_EIRQ19 |
PORT46_SIUL2_EIRQ8 |
PORT47_SIUL2_EIRQ20 */
  (uint16)( SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(9) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  48 ...  63 : PORT61_DSPI_1_dSS */
  (uint16)( SHL_PAD_U16(13)
          ),
/* Pads  64 ...  79 : PORT64_FlexCAN_5_RX |
PORT65_IIC_1_SDA1_IN |
PORT66_SIUL2_EIRQ21 |
PORT67_FlexRay_FR_A_RX |
PORT68_SIUL2_EIRQ9 |
PORT69_FlexRay_FR_B_RX |
PORT70_SIUL2_EIRQ22 |
PORT71_SIUL2_EIRQ23 |
PORT72_IIC_2_SDA2_IN |
PORT73_FlexCAN_2_RX |
PORT74_SIUL2_EIRQ10 |
PORT75_LIN_3_LIN3RX |
PORT76_SIUL2_EIRQ11 |
PORT77_ENET0_MII_0_RXD_3 |
PORT78_SIUL2_EIRQ12 |
PORT79_DSPI_2_dSS */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  80 ...  95 : PORT80_SAI0_SAI0_MCLK_IN |
PORT81_SAI0_SAI0_BCLK_IN |
PORT82_DSPI_2_dSS |
PORT83_SAI0_SAI0_D2_IN |
PORT84_SAI0_SAI0_D1_IN |
PORT85_SAI0_SAI0_D0_IN |
PORT86_SAI1_SAI1_SYNC_IN |
PORT87_SAI1_SAI1_MCLK_IN |
PORT89_FlexCAN_2_RX |
PORT90_EMIOS0_E0UC_19_Y_IN |
PORT91_LIN_4_LIN4RX |
PORT92_EMIOS0_E0UC_16_X_IN |
PORT93_LIN_5_LIN5RX |
PORT94_ENET0_MII_RMII_0_MDIO_IN |
PORT95_SIUL2_EIRQ13 */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  96 ... 111 : PORT97_SIUL2_EIRQ14 |
PORT99_FlexCAN_7_RX |
PORT100_DSPI_3_dSCLK_IN |
PORT101_LIN_10_LIN10RX |
PORT102_EMIOS0_E0UC_3_G_IN |
PORT103_EMIOS1_E1UC_30_Y_IN |
PORT104_SIUL2_EIRQ15 |
PORT105_FlexCAN_7_RX |
PORT106_EMIOS1_E1UC_31_Y_IN |
PORT107_SPI_0_SS_0 |
PORT109_SPI_0_SCLK_0_IN |
PORT110_SPI_2_SIN_2 |
PORT111_LIN_8_LIN8RX */
  (uint16)( SHL_PAD_U16(1) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads 112 ... 127 : PORT112_DSPI_1_dSIN |
PORT114_DSPI_1_dSCLK_IN |
PORT115_DSPI_1_dSS |
PORT116_IIC_3_SCL3_IN |
PORT117_IIC_3_SDA3_IN |
PORT118_SPI_3_SCLK_3_IN |
PORT119_SPI_3_SS_3 |
PORT123_SPI_0_SS_0 |
PORT124_DSPI_3_dSCLK_IN |
PORT125_DSPI_3_dSS |
PORT126_SPI_0_SCLK_0_IN */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14)
          ),
/* Pads 128 ... 143 : PORT128_IIC_1_SDA1_IN |
PORT129_LIN_8_LIN8RX |
PORT130_IIC_2_SDA2_IN |
PORT131_LIN_9_LIN9RX |
PORT132_GLITCH_FILTER2_INP |
PORT133_SPI_0_SCLK_0_IN |
PORT134_SPI_0_SS_0 |
PORT135_GLITCH_FILTER3_INP |
PORT139_ENET0_ENET0_TMR1_IN |
PORT140_DSPI_3_dSS |
PORT142_SAI2_SAI2_D0_IN |
PORT143_SAI2_SAI2_MCLK_IN */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads 144 ... 159 : PORT145_SAI2_SAI2_BCLK_IN |
PORT146_SPI_2_SS_2 |
PORT148_SPI_1_SCLK_1_IN |
PORT157_FlexCAN_1_RX */
  (uint16)( SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(4) |
SHL_PAD_U16(13)
          )
}
,
/*  Mode PORT_INPUT3_MODE: */
{
/* Pads   0 ...  15 : PORT0_FlexCAN_1_RX |
PORT3_ENET0_MII_0_RX_CLK |
PORT4_DSPI_1_dSS |
PORT6_LIN_4_LIN4RX |
PORT7_ENET0_MII_0_RXD_2 |
PORT8_SIUL2_EIRQ3 |
PORT10_DSPI_1_dSIN |
PORT11_LIN_2_LIN2RX |
PORT12_DSPI_0_dSIN |
PORT13_GLITCH_FILTER0_INP |
PORT14_DSPI_0_dSCLK_IN |
PORT15_DSPI_0_dSCLK_IN */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  16 ...  31 : PORT16_GLITCH_FILTER1_INP |
PORT17_LIN_0_LIN0RX |
PORT18_GLITCH_FILTER1_INP |
PORT19_IIC_0_SCL0_IN |
PORT26_EMIOS0_E0UC_29_Y_IN */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(10)
          ),
/* Pads  32 ...  47 : PORT35_FlexCAN_4_RX |
PORT36_FlexCAN_3_RX |
PORT38_GLITCH_FILTER2_INP |
PORT39_EMIOS0_E0UC_18_Y_IN |
PORT43_EMIOS0_E0UC_1_G_IN |
PORT44_DSPI_2_dSIN |
PORT46_DSPI_2_dSCLK_IN |
PORT47_DSPI_2_dSS */
  (uint16)( SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  48 ...  63 : PORT61_ENET0_ENET0_TMR0_IN */
  (uint16)( SHL_PAD_U16(13)
          ),
/* Pads  64 ...  79 : PORT64_LIN_11_LIN11RX |
PORT66_DSPI_1_dSIN |
PORT68_DSPI_1_dSCLK_IN |
PORT69_DSPI_1_dSS |
PORT73_FlexCAN_3_RX |
PORT74_IIC_3_SDA3_IN |
PORT75_IIC_3_SCL3_IN |
PORT76_DSPI_2_dSIN |
PORT78_DSPI_2_dSCLK_IN |
PORT79_SPI_2_SCLK_2_IN */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(2) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  80 ...  95 : PORT82_SAI0_SAI0_D3_IN |
PORT83_GLITCH_FILTER1_INP |
PORT84_GLITCH_FILTER2_INP |
PORT85_GLITCH_FILTER3_INP |
PORT86_EMIOS0_E0UC_30_Y_IN |
PORT89_FlexCAN_3_RX |
PORT91_EMIOS0_E0UC_20_Y_IN |
PORT93_EMIOS0_E0UC_22_X_IN |
PORT95_FlexCAN_1_RX */
  (uint16)( SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(9) |
SHL_PAD_U16(11) |
SHL_PAD_U16(13) |
SHL_PAD_U16(15)
          ),
/* Pads  96 ... 111 : PORT97_FlexCAN_5_RX |
PORT99_DSPI_3_dSS |
PORT101_DSPI_3_dSIN |
PORT103_LIN_6_LIN6RX |
PORT104_DSPI_2_dSS |
PORT105_LIN_7_LIN7RX |
PORT106_SPI_0_SIN_0 |
PORT107_SPI_2_SS_2 */
  (uint16)( SHL_PAD_U16(1) |
SHL_PAD_U16(3) |
SHL_PAD_U16(5) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11)
          ),
/* Pads 112 ... 127 : PORT117_SPI_3_SIN_3 |
PORT126_FCCU_EIN_ERR */
  (uint16)( SHL_PAD_U16(5) |
SHL_PAD_U16(14)
          ),
/* Pads 128 ... 143 : PORT128_GLITCH_FILTER0_INP |
PORT129_IIC_1_SCL1_IN |
PORT130_GLITCH_FILTER1_INP |
PORT131_IIC_2_SCL2_IN |
PORT133_GLITCH_FILTER2_INP |
PORT134_SPI_1_SS_1 */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6)
          ),
/* Pads 144 ... 159 : PORT146_SPI_3_SS_3 |
PORT148_FCCU_EIN_ERR |
PORT157_FlexCAN_4_RX */
  (uint16)( SHL_PAD_U16(2) |
SHL_PAD_U16(4) |
SHL_PAD_U16(13)
          )
}
,
/*  Mode PORT_INPUT4_MODE: */
{
/* Pads   0 ...  15 : PORT4_EMIOS0_E0UC_24_X_IN |
PORT8_LIN_3_LIN3RX |
PORT10_ENET0_MII_0_COL |
PORT11_IIC_0_SCL0_IN |
PORT12_EMIOS0_E0UC_26_Y_IN |
PORT14_DSPI_0_dSS |
PORT15_DSPI_0_dSS */
  (uint16)( SHL_PAD_U16(4) |
SHL_PAD_U16(8) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  16 ...  31 : PORT17_EMIOS0_E0UC_5_G_IN |
PORT19_EMIOS0_E0UC_8_X_IN */
  (uint16)( SHL_PAD_U16(1) |
SHL_PAD_U16(3)
          ),
/* Pads  32 ...  47 : PORT35_DSPI_1_dSS |
PORT36_DSPI_1_dSIN |
PORT39_GLITCH_FILTER2_INP |
PORT47_FlexCAN_4_RX */
  (uint16)( SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(7) |
SHL_PAD_U16(15)
          ),
/* Pads 48 ... 63 */
  (uint16)0x0000,
/* Pads  64 ...  79 : PORT64_IIC_1_SCL1_IN |
PORT73_IIC_2_SCL2_IN |
PORT74_GLITCH_FILTER3_INP |
PORT76_ENET0_MII_0_CRS */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(12)
          ),
/* Pads  80 ...  95 : PORT82_GLITCH_FILTER0_INP |
PORT89_EMIOS0_E0UC_14_H_IN |
PORT95_FlexCAN_4_RX */
  (uint16)( SHL_PAD_U16(2) |
SHL_PAD_U16(9) |
SHL_PAD_U16(15)
          ),
/* Pads  96 ... 111 : PORT97_ENET0_MII_RMII_0_TX_CLK_IN |
PORT101_EMIOS0_E0UC_2_G_IN |
PORT103_GLITCH_FILTER3_INP |
PORT105_DSPI_2_dSCLK_IN |
PORT106_GLITCH_FILTER3_INP */
  (uint16)( SHL_PAD_U16(1) |
SHL_PAD_U16(5) |
SHL_PAD_U16(7) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10)
          ),
/* Pads 112 ... 127 */
  (uint16)0x0000,
/* Pads 128 ... 143 : PORT129_GLITCH_FILTER0_INP |
PORT131_GLITCH_FILTER1_INP |
PORT134_SPI_2_SS_2 */
  (uint16)( SHL_PAD_U16(1) |
SHL_PAD_U16(3) |
SHL_PAD_U16(6)
          ),
/* Pads 144 ... 159 : PORT146_SAI1_SAI1_D0_IN |
PORT157_FlexCAN_6_RX */
  (uint16)( SHL_PAD_U16(2) |
SHL_PAD_U16(13)
          )
}
,
/*  Mode PORT_INPUT5_MODE: */
{
/* Pads   0 ...  15 : PORT8_ENET0_MII_RMII_0_RXD_1 |
PORT11_ENET0_MII_RMII_0_RX_ER |
PORT12_GLITCH_FILTER0_INP |
PORT14_EMIOS0_E0UC_23_X_IN |
PORT15_EMIOS0_E0UC_21_Y_IN */
  (uint16)( SHL_PAD_U16(8) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  16 ...  31 : PORT17_GLITCH_FILTER1_INP |
PORT19_GLITCH_FILTER1_INP */
  (uint16)( SHL_PAD_U16(1) |
SHL_PAD_U16(3)
          ),
/* Pads  32 ...  47 : PORT36_GLITCH_FILTER3_INP */
  (uint16)( SHL_PAD_U16(4)
          ),
/* Pads 48 ... 63 */
  (uint16)0x0000,
/* Pads 64 ... 79 */
  (uint16)0x0000,
/* Pads  80 ...  95 : PORT95_ENET0_MII_RMII_0_RX_DV */
  (uint16)( SHL_PAD_U16(15)
          ),
/* Pads  96 ... 111 : PORT105_EMIOS0_E0UC_0_X_IN */
  (uint16)( SHL_PAD_U16(9)
          ),
/* Pads 112 ... 127 */
  (uint16)0x0000,
/* Pads 128 ... 143 : PORT134_GLITCH_FILTER3_INP */
  (uint16)( SHL_PAD_U16(6)
          ),
/* Pads 144 ... 159 */
  (uint16)0x0000
}
,
/*  Mode PORT_INPUT6_MODE: */
{
/* Pads 0 ... 15 */
  (uint16)0x0000,
/* Pads 16 ... 31 */
  (uint16)0x0000,
/* Pads 32 ... 47 */
  (uint16)0x0000,
/* Pads 48 ... 63 */
  (uint16)0x0000,
/* Pads 64 ... 79 */
  (uint16)0x0000,
/* Pads 80 ... 95 */
  (uint16)0x0000,
/* Pads 96 ... 111 */
  (uint16)0x0000,
/* Pads 112 ... 127 */
  (uint16)0x0000,
/* Pads 128 ... 143 */
  (uint16)0x0000,
/* Pads 144 ... 159 */
  (uint16)0x0000
}
,
/*  Mode PORT_INOUT1_MODE: */
{
/* Pads   0 ...  15 : PORT0_EMIOS0_E0UC_0_X_IN_OUT |
PORT1_EMIOS0_E0UC_1_G_IN_OUT |
PORT2_EMIOS0_E0UC_2_G_IN_OUT |
PORT3_EMIOS0_E0UC_3_G_IN_OUT |
PORT4_EMIOS0_E0UC_4_G_IN_OUT |
PORT5_EMIOS0_E0UC_5_G_IN_OUT |
PORT6_EMIOS0_E0UC_6_G_IN_OUT |
PORT7_EMIOS0_E0UC_7_G_IN_OUT |
PORT8_EMIOS0_E0UC_8_X_IN_OUT |
PORT9_EMIOS0_E0UC_9_H_IN_OUT |
PORT10_EMIOS0_E0UC_10_H_IN_OUT |
PORT11_EMIOS0_E0UC_11_H_IN_OUT |
PORT12_EMIOS0_E0UC_28_Y_IN_OUT |
PORT14_DSPI_0_dSCLK_IN_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(14)
          ),
/* Pads  16 ...  31 : PORT17_EMIOS0_E0UC_31_Y_IN_OUT |
PORT19_EMIOS0_E0UC_31_Y_IN_OUT |
PORT27_EMIOS0_E0UC_3_G_IN_OUT |
PORT28_EMIOS0_E0UC_4_G_IN_OUT |
PORT29_EMIOS0_E0UC_5_G_IN_OUT |
PORT30_EMIOS0_E0UC_6_G_IN_OUT |
PORT31_EMIOS0_E0UC_7_G_IN_OUT */
  (uint16)( SHL_PAD_U16(1) |
SHL_PAD_U16(3) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  32 ...  47 : PORT34_DSPI_1_dSCLK_IN_OUT |
PORT36_EMIOS1_E1UC_31_Y_IN_OUT |
PORT39_EMIOS1_E1UC_29_Y_IN_OUT |
PORT41_EMIOS0_E0UC_7_G_IN_OUT |
PORT44_EMIOS0_E0UC_12_H_IN_OUT |
PORT45_EMIOS0_E0UC_13_H_IN_OUT |
PORT46_EMIOS0_E0UC_14_H_IN_OUT |
PORT47_EMIOS0_E0UC_15_H_IN_OUT */
  (uint16)( SHL_PAD_U16(2) |
SHL_PAD_U16(4) |
SHL_PAD_U16(7) |
SHL_PAD_U16(9) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads 48 ... 63 */
  (uint16)0x0000,
/* Pads  64 ...  79 : PORT64_EMIOS0_E0UC_16_X_IN_OUT |
PORT65_EMIOS0_E0UC_17_Y_IN_OUT |
PORT66_EMIOS0_E0UC_18_Y_IN_OUT |
PORT67_EMIOS0_E0UC_19_Y_IN_OUT |
PORT68_EMIOS0_E0UC_20_Y_IN_OUT |
PORT69_EMIOS0_E0UC_21_Y_IN_OUT |
PORT70_EMIOS0_E0UC_22_X_IN_OUT |
PORT71_EMIOS0_E0UC_23_X_IN_OUT |
PORT73_EMIOS0_E0UC_23_X_IN_OUT |
PORT75_EMIOS0_E0UC_24_X_IN_OUT |
PORT76_EMIOS1_E1UC_19_Y_IN_OUT |
PORT78_DSPI_2_dSCLK_IN_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(9) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(14)
          ),
/* Pads  80 ...  95 : PORT80_EMIOS0_E0UC_10_H_IN_OUT |
PORT81_EMIOS0_E0UC_11_H_IN_OUT |
PORT82_EMIOS0_E0UC_12_H_IN_OUT |
PORT83_EMIOS0_E0UC_13_H_IN_OUT |
PORT84_EMIOS0_E0UC_14_H_IN_OUT |
PORT85_EMIOS0_E0UC_22_X_IN_OUT |
PORT86_EMIOS0_E0UC_23_X_IN_OUT |
PORT87_SPI_0_SCLK_0_IN_OUT |
PORT89_EMIOS1_E1UC_1_H_IN_OUT |
PORT92_EMIOS1_E1UC_25_Y_IN_OUT |
PORT93_EMIOS1_E1UC_26_Y_IN_OUT |
PORT95_EMIOS1_E1UC_4_H_IN_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(9) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(15)
          ),
/* Pads  96 ... 111 : PORT97_EMIOS1_E1UC_24_X_IN_OUT |
PORT98_EMIOS1_E1UC_11_H_IN_OUT |
PORT99_EMIOS1_E1UC_12_H_IN_OUT |
PORT100_EMIOS1_E1UC_13_H_IN_OUT |
PORT101_EMIOS1_E1UC_14_H_IN_OUT |
PORT102_EMIOS1_E1UC_15_H_IN_OUT |
PORT103_EMIOS1_E1UC_16_X_IN_OUT |
PORT104_EMIOS1_E1UC_17_Y_IN_OUT |
PORT105_EMIOS1_E1UC_18_Y_IN_OUT |
PORT106_EMIOS0_E0UC_24_X_IN_OUT |
PORT107_EMIOS0_E0UC_25_Y_IN_OUT |
PORT108_EMIOS0_E0UC_26_Y_IN_OUT |
PORT109_EMIOS0_E0UC_27_Y_IN_OUT |
PORT110_EMIOS1_E1UC_0_X_IN_OUT |
PORT111_EMIOS1_E1UC_1_H_IN_OUT */
  (uint16)( SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads 112 ... 127 : PORT112_EMIOS1_E1UC_2_H_IN_OUT |
PORT113_EMIOS1_E1UC_3_H_IN_OUT |
PORT114_EMIOS1_E1UC_4_H_IN_OUT |
PORT115_EMIOS1_E1UC_5_H_IN_OUT |
PORT116_EMIOS1_E1UC_6_H_IN_OUT |
PORT117_EMIOS1_E1UC_7_H_IN_OUT |
PORT118_EMIOS1_E1UC_8_X_IN_OUT |
PORT119_EMIOS1_E1UC_9_H_IN_OUT |
PORT120_EMIOS1_E1UC_10_H_IN_OUT |
PORT122_DCI_TMS_IN_OUT |
PORT124_DSPI_3_dSCLK_IN_OUT |
PORT126_SPI_0_SCLK_0_IN_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(8) |
SHL_PAD_U16(10) |
SHL_PAD_U16(12) |
SHL_PAD_U16(14)
          ),
/* Pads 128 ... 143 : PORT128_EMIOS0_E0UC_28_Y_IN_OUT |
PORT129_EMIOS0_E0UC_29_Y_IN_OUT |
PORT130_EMIOS0_E0UC_30_Y_IN_OUT |
PORT131_EMIOS0_E0UC_31_Y_IN_OUT |
PORT132_EMIOS1_E1UC_28_Y_IN_OUT |
PORT133_EMIOS1_E1UC_29_Y_IN_OUT |
PORT134_EMIOS1_E1UC_30_Y_IN_OUT |
PORT135_EMIOS1_E1UC_31_Y_IN_OUT |
PORT142_SAI2_SAI2_D0_IN_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(7) |
SHL_PAD_U16(14)
          ),
/* Pads 144 ... 159 : PORT148_SPI_1_SCLK_1_IN_OUT */
  (uint16)( SHL_PAD_U16(4)
          )
}
,
/*  Mode PORT_INOUT2_MODE: */
{
/* Pads   0 ...  15 : PORT8_EMIOS0_E0UC_14_H_IN_OUT |
PORT10_IIC_0_SDA0_IN_OUT |
PORT11_IIC_0_SCL0_IN_OUT |
PORT13_EMIOS0_E0UC_29_Y_IN_OUT |
PORT15_DSPI_0_dSCLK_IN_OUT */
  (uint16)( SHL_PAD_U16(8) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(13) |
SHL_PAD_U16(15)
          ),
/* Pads  16 ...  31 : PORT16_EMIOS0_E0UC_30_Y_IN_OUT |
PORT17_EMIOS0_E0UC_5_G_IN_OUT |
PORT18_IIC_0_SDA0_IN_OUT |
PORT19_IIC_0_SCL0_IN_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3)
          ),
/* Pads  32 ...  47 : PORT38_EMIOS1_E1UC_28_Y_IN_OUT |
PORT40_EMIOS0_E0UC_3_G_IN_OUT |
PORT43_EMIOS0_E0UC_1_G_IN_OUT |
PORT46_DSPI_2_dSCLK_IN_OUT */
  (uint16)( SHL_PAD_U16(6) |
SHL_PAD_U16(8) |
SHL_PAD_U16(11) |
SHL_PAD_U16(14)
          ),
/* Pads  48 ...  63 : PORT60_EMIOS0_E0UC_24_X_IN_OUT |
PORT61_EMIOS0_E0UC_25_Y_IN_OUT |
PORT62_EMIOS0_E0UC_26_Y_IN_OUT |
PORT63_EMIOS0_E0UC_27_Y_IN_OUT */
  (uint16)( SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  64 ...  79 : PORT64_IIC_1_SCL1_IN_OUT |
PORT68_DSPI_1_dSCLK_IN_OUT |
PORT72_EMIOS0_E0UC_22_X_IN_OUT |
PORT73_IIC_2_SCL2_IN_OUT |
PORT77_EMIOS1_E1UC_20_Y_IN_OUT |
PORT78_EMIOS1_E1UC_21_Y_IN_OUT |
PORT79_EMIOS1_E1UC_22_X_IN_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(4) |
SHL_PAD_U16(8) |
SHL_PAD_U16(9) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  80 ...  95 : PORT91_EMIOS1_E1UC_3_H_IN_OUT |
PORT93_EMIOS0_E0UC_22_X_IN_OUT |
PORT94_EMIOS1_E1UC_27_Y_IN_OUT */
  (uint16)( SHL_PAD_U16(11) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14)
          ),
/* Pads  96 ... 111 : PORT96_EMIOS1_E1UC_23_X_IN_OUT |
PORT97_ENET0_MII_RMII_0_TX_CLK_IN_OUT |
PORT100_DSPI_3_dSCLK_IN_OUT |
PORT101_EMIOS0_E0UC_2_G_IN_OUT |
PORT103_EMIOS1_E1UC_30_Y_IN_OUT |
PORT105_DSPI_2_dSCLK_IN_OUT |
PORT106_EMIOS1_E1UC_31_Y_IN_OUT |
PORT109_SPI_0_SCLK_0_IN_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(1) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(7) |
SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(13)
          ),
/* Pads 112 ... 127 : PORT114_DSPI_1_dSCLK_IN_OUT |
PORT117_IIC_3_SDA3_IN_OUT |
PORT118_SPI_3_SCLK_3_IN_OUT */
  (uint16)( SHL_PAD_U16(2) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6)
          ),
/* Pads 128 ... 143 : PORT129_IIC_1_SCL1_IN_OUT |
PORT131_IIC_2_SCL2_IN_OUT |
PORT133_SPI_0_SCLK_0_IN_OUT |
PORT139_ENET0_ENET0_TMR1_IN_OUT */
  (uint16)( SHL_PAD_U16(1) |
SHL_PAD_U16(3) |
SHL_PAD_U16(5) |
SHL_PAD_U16(11)
          ),
/* Pads 144 ... 159 : PORT145_SAI2_SAI2_BCLK_IN_OUT |
PORT148_EMIOS1_E1UC_18_Y_IN_OUT */
  (uint16)( SHL_PAD_U16(1) |
SHL_PAD_U16(4)
          )
}
,
/*  Mode PORT_INOUT3_MODE: */
{
/* Pads   0 ...  15 : PORT0_EMIOS0_E0UC_13_H_IN_OUT |
PORT4_EMIOS0_E0UC_24_X_IN_OUT |
PORT12_EMIOS0_E0UC_26_Y_IN_OUT |
PORT13_EMIOS0_E0UC_25_Y_IN_OUT |
PORT14_EMIOS0_E0UC_0_X_IN_OUT |
PORT15_EMIOS0_E0UC_1_G_IN_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(4) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  16 ...  31 : PORT18_EMIOS0_E0UC_30_Y_IN_OUT |
PORT19_EMIOS0_E0UC_8_X_IN_OUT */
  (uint16)( SHL_PAD_U16(2) |
SHL_PAD_U16(3)
          ),
/* Pads  32 ...  47 : PORT38_EMIOS0_E0UC_17_Y_IN_OUT |
PORT39_EMIOS0_E0UC_18_Y_IN_OUT */
  (uint16)( SHL_PAD_U16(6) |
SHL_PAD_U16(7)
          ),
/* Pads  48 ...  63 : PORT61_ENET0_ENET0_TMR0_IN_OUT */
  (uint16)( SHL_PAD_U16(13)
          ),
/* Pads  64 ...  79 : PORT65_IIC_1_SDA1_IN_OUT |
PORT74_EMIOS1_E1UC_30_Y_IN_OUT |
PORT79_SPI_2_SCLK_2_IN_OUT */
  (uint16)( SHL_PAD_U16(1) |
SHL_PAD_U16(10) |
SHL_PAD_U16(15)
          ),
/* Pads  80 ...  95 : PORT89_EMIOS0_E0UC_14_H_IN_OUT |
PORT90_EMIOS1_E1UC_2_H_IN_OUT |
PORT91_EMIOS0_E0UC_20_Y_IN_OUT |
PORT92_EMIOS0_E0UC_16_X_IN_OUT */
  (uint16)( SHL_PAD_U16(9) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12)
          ),
/* Pads  96 ... 111 : PORT105_EMIOS0_E0UC_0_X_IN_OUT */
  (uint16)( SHL_PAD_U16(9)
          ),
/* Pads 112 ... 127 : PORT116_IIC_3_SCL3_IN_OUT |
PORT123_EMIOS1_E1UC_5_H_IN_OUT |
PORT124_EMIOS1_E1UC_25_Y_IN_OUT |
PORT125_EMIOS1_E1UC_26_Y_IN_OUT |
PORT126_EMIOS1_E1UC_27_Y_IN_OUT |
PORT127_EMIOS1_E1UC_17_Y_IN_OUT */
  (uint16)( SHL_PAD_U16(4) |
SHL_PAD_U16(11) |
SHL_PAD_U16(12) |
SHL_PAD_U16(13) |
SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads 128 ... 143 : PORT128_IIC_1_SDA1_IN_OUT |
PORT130_IIC_2_SDA2_IN_OUT |
PORT143_SAI2_SAI2_MCLK_IN_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(2) |
SHL_PAD_U16(15)
          ),
/* Pads 144 ... 159 : PORT144_SAI2_SAI2_SYNC_IN_OUT |
PORT157_EMIOS1_E1UC_15_H_IN_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(13)
          )
}
,
/*  Mode PORT_INOUT4_MODE: */
{
/* Pads   0 ...  15 : PORT14_EMIOS0_E0UC_23_X_IN_OUT |
PORT15_EMIOS0_E0UC_21_Y_IN_OUT */
  (uint16)( SHL_PAD_U16(14) |
SHL_PAD_U16(15)
          ),
/* Pads  16 ...  31 : PORT16_EMIOS0_E0UC_4_G_IN_OUT |
PORT26_SAI0_SAI0_SYNC_IN_OUT */
  (uint16)( SHL_PAD_U16(0) |
SHL_PAD_U16(10)
          ),
/* Pads 32 ... 47 */
  (uint16)0x0000,
/* Pads 48 ... 63 */
  (uint16)0x0000,
/* Pads  64 ...  79 : PORT72_IIC_2_SDA2_IN_OUT |
PORT74_IIC_3_SDA3_IN_OUT |
PORT75_IIC_3_SCL3_IN_OUT */
  (uint16)( SHL_PAD_U16(8) |
SHL_PAD_U16(10) |
SHL_PAD_U16(11)
          ),
/* Pads  80 ...  95 : PORT81_SAI0_SAI0_BCLK_IN_OUT |
PORT82_SAI0_SAI0_D3_IN_OUT |
PORT83_SAI0_SAI0_D2_IN_OUT |
PORT84_SAI0_SAI0_D1_IN_OUT |
PORT85_SAI0_SAI0_D0_IN_OUT |
PORT86_SAI1_SAI1_SYNC_IN_OUT |
PORT88_EMIOS0_E0UC_15_H_IN_OUT |
PORT90_EMIOS0_E0UC_19_Y_IN_OUT |
PORT92_FCCU_EOUT1_IN_OUT |
PORT94_ENET0_MII_RMII_0_MDIO_IN_OUT */
  (uint16)( SHL_PAD_U16(1) |
SHL_PAD_U16(2) |
SHL_PAD_U16(3) |
SHL_PAD_U16(4) |
SHL_PAD_U16(5) |
SHL_PAD_U16(6) |
SHL_PAD_U16(8) |
SHL_PAD_U16(10) |
SHL_PAD_U16(12) |
SHL_PAD_U16(14)
          ),
/* Pads  96 ... 111 : PORT102_EMIOS0_E0UC_3_G_IN_OUT */
  (uint16)( SHL_PAD_U16(6)
          ),
/* Pads 112 ... 127 : PORT125_FCCU_EOUT1_IN_OUT |
PORT127_FCCU_EOUT0_IN_OUT */
  (uint16)( SHL_PAD_U16(13) |
SHL_PAD_U16(15)
          ),
/* Pads 128 ... 143 */
  (uint16)0x0000,
/* Pads 144 ... 159 : PORT146_SAI1_SAI1_D0_IN_OUT |
PORT147_SAI1_SAI1_BCLK_IN_OUT */
  (uint16)( SHL_PAD_U16(2) |
SHL_PAD_U16(3)
          )
}
,
/*  Mode PORT_INOUT5_MODE: */
{
/* Pads 0 ... 15 */
  (uint16)0x0000,
/* Pads  16 ...  31 : PORT26_EMIOS0_E0UC_29_Y_IN_OUT */
  (uint16)( SHL_PAD_U16(10)
          ),
/* Pads 32 ... 47 */
  (uint16)0x0000,
/* Pads 48 ... 63 */
  (uint16)0x0000,
/* Pads 64 ... 79 */
  (uint16)0x0000,
/* Pads  80 ...  95 : PORT86_EMIOS0_E0UC_30_Y_IN_OUT |
PORT90_FCCU_EOUT0_IN_OUT */
  (uint16)( SHL_PAD_U16(6) |
SHL_PAD_U16(10)
          ),
/* Pads 96 ... 111 */
  (uint16)0x0000,
/* Pads 112 ... 127 */
  (uint16)0x0000,
/* Pads 128 ... 143 */
  (uint16)0x0000,
/* Pads 144 ... 159 */
  (uint16)0x0000
}
,
/*  Mode PORT_INOUT6_MODE: */
{
/* Pads 0 ... 15 */
  (uint16)0x0000,
/* Pads 16 ... 31 */
  (uint16)0x0000,
/* Pads 32 ... 47 */
  (uint16)0x0000,
/* Pads 48 ... 63 */
  (uint16)0x0000,
/* Pads 64 ... 79 */
  (uint16)0x0000,
/* Pads  80 ...  95 : PORT87_SAI1_SAI1_MCLK_IN_OUT */
  (uint16)( SHL_PAD_U16(7)
          ),
/* Pads 96 ... 111 */
  (uint16)0x0000,
/* Pads 112 ... 127 */
  (uint16)0x0000,
/* Pads 128 ... 143 */
  (uint16)0x0000,
/* Pads 144 ... 159 : PORT158_EMIOS1_E1UC_14_H_IN_OUT */
  (uint16)( SHL_PAD_U16(14)
          )
}
,
/*  Mode PORT_INOUT7_MODE: */
{
/* Pads 0 ... 15 */
  (uint16)0x0000,
/* Pads 16 ... 31 */
  (uint16)0x0000,
/* Pads 32 ... 47 */
  (uint16)0x0000,
/* Pads 48 ... 63 */
  (uint16)0x0000,
/* Pads 64 ... 79 */
  (uint16)0x0000,
/* Pads  80 ...  95 : PORT80_SAI0_SAI0_MCLK_IN_OUT */
  (uint16)( SHL_PAD_U16(0)
          ),
/* Pads 96 ... 111 */
  (uint16)0x0000,
/* Pads 112 ... 127 */
  (uint16)0x0000,
/* Pads 128 ... 143 */
  (uint16)0x0000,
/* Pads 144 ... 159 */
  (uint16)0x0000
}


};

/**
* @brief Port index to address the INPUT INDEX data
*/
CONST(uint16,PORT_CONST) Port_au16PadFunctInMuxIndex[149]=
{

  /* Index to address the input settings for pad 0*/
  (uint16)1, 
  /* Index to address the input settings for pad 1*/
  (uint16)4, 
  /* Index to address the input settings for pad 2*/
  (uint16)6, 
  /* Index to address the input settings for pad 3*/
  (uint16)7, 
  /* Index to address the input settings for pad 4*/
  (uint16)10, 
  /* Index to address the input settings for pad 5*/
  (uint16)14, 
  /* Index to address the input settings for pad 6*/
  (uint16)15, 
  /* Index to address the input settings for pad 7*/
  (uint16)18, 
  /* Index to address the input settings for pad 8*/
  (uint16)21, 
  /* Index to address the input settings for pad 9*/
  (uint16)26, 
  /* Index to address the input settings for pad 10*/
  (uint16)28, 
  /* Index to address the input settings for pad 11*/
  (uint16)32, 
  /* Index to address the input settings for pad 12*/
  (uint16)37, 
  /* Index to address the input settings for pad 13*/
  (uint16)42, 
  /* Index to address the input settings for pad 14*/
  (uint16)45, 
  /* Index to address the input settings for pad 15*/
  (uint16)50, 
  /* Index to address the input settings for pad 16*/
  (uint16)55, 
  /* Index to address the input settings for pad 17*/
  (uint16)58, 
  /* Index to address the input settings for pad 18*/
  (uint16)63, 
  /* Index to address the input settings for pad 19*/
  (uint16)66, 
  /* Index to address the input settings for pad 20*/
  (uint16)0, 
  /* Index to address the input settings for pad 21*/
  (uint16)0, 
  /* Index to address the input settings for pad 22*/
  (uint16)0, 
  /* Index to address the input settings for pad 23*/
  (uint16)0, 
  /* Index to address the input settings for pad 24*/
  (uint16)0, 
  /* Index to address the input settings for pad 25*/
  (uint16)0, 
  /* Index to address the input settings for pad 26*/
  (uint16)71, 
  /* Index to address the input settings for pad 27*/
  (uint16)74, 
  /* Index to address the input settings for pad 28*/
  (uint16)76, 
  /* Index to address the input settings for pad 29*/
  (uint16)77, 
  /* Index to address the input settings for pad 30*/
  (uint16)78, 
  /* Index to address the input settings for pad 31*/
  (uint16)79, 
  /* Index to address the input settings for pad 32*/
  (uint16)0, 
  /* Index to address the input settings for pad 33*/
  (uint16)0, 
  /* Index to address the input settings for pad 34*/
  (uint16)80, 
  /* Index to address the input settings for pad 35*/
  (uint16)82, 
  /* Index to address the input settings for pad 36*/
  (uint16)86, 
  /* Index to address the input settings for pad 37*/
  (uint16)91, 
  /* Index to address the input settings for pad 38*/
  (uint16)92, 
  /* Index to address the input settings for pad 39*/
  (uint16)95, 
  /* Index to address the input settings for pad 40*/
  (uint16)99, 
  /* Index to address the input settings for pad 41*/
  (uint16)100, 
  /* Index to address the input settings for pad 42*/
  (uint16)0, 
  /* Index to address the input settings for pad 43*/
  (uint16)102, 
  /* Index to address the input settings for pad 44*/
  (uint16)105, 
  /* Index to address the input settings for pad 45*/
  (uint16)108, 
  /* Index to address the input settings for pad 46*/
  (uint16)109, 
  /* Index to address the input settings for pad 47*/
  (uint16)112, 
  /* Index to address the input settings for pad 48*/
  (uint16)0, 
  /* Index to address the input settings for pad 49*/
  (uint16)0, 
  /* Index to address the input settings for pad 50*/
  (uint16)0, 
  /* Index to address the input settings for pad 51*/
  (uint16)0, 
  /* Index to address the input settings for pad 52*/
  (uint16)0, 
  /* Index to address the input settings for pad 53*/
  (uint16)0, 
  /* Index to address the input settings for pad 54*/
  (uint16)0, 
  /* Index to address the input settings for pad 55*/
  (uint16)0, 
  /* Index to address the input settings for pad 56*/
  (uint16)0, 
  /* Index to address the input settings for pad 57*/
  (uint16)0, 
  /* Index to address the input settings for pad 58*/
  (uint16)0, 
  /* Index to address the input settings for pad 59*/
  (uint16)0, 
  /* Index to address the input settings for pad 60*/
  (uint16)116, 
  /* Index to address the input settings for pad 61*/
  (uint16)117, 
  /* Index to address the input settings for pad 62*/
  (uint16)120, 
  /* Index to address the input settings for pad 63*/
  (uint16)121, 
  /* Index to address the input settings for pad 64*/
  (uint16)122, 
  /* Index to address the input settings for pad 65*/
  (uint16)126, 
  /* Index to address the input settings for pad 66*/
  (uint16)128, 
  /* Index to address the input settings for pad 67*/
  (uint16)131, 
  /* Index to address the input settings for pad 68*/
  (uint16)133, 
  /* Index to address the input settings for pad 69*/
  (uint16)136, 
  /* Index to address the input settings for pad 70*/
  (uint16)139, 
  /* Index to address the input settings for pad 71*/
  (uint16)141, 
  /* Index to address the input settings for pad 72*/
  (uint16)143, 
  /* Index to address the input settings for pad 73*/
  (uint16)145, 
  /* Index to address the input settings for pad 74*/
  (uint16)149, 
  /* Index to address the input settings for pad 75*/
  (uint16)153, 
  /* Index to address the input settings for pad 76*/
  (uint16)156, 
  /* Index to address the input settings for pad 77*/
  (uint16)160, 
  /* Index to address the input settings for pad 78*/
  (uint16)162, 
  /* Index to address the input settings for pad 79*/
  (uint16)165, 
  /* Index to address the input settings for pad 80*/
  (uint16)168, 
  /* Index to address the input settings for pad 81*/
  (uint16)170, 
  /* Index to address the input settings for pad 82*/
  (uint16)172, 
  /* Index to address the input settings for pad 83*/
  (uint16)176, 
  /* Index to address the input settings for pad 84*/
  (uint16)179, 
  /* Index to address the input settings for pad 85*/
  (uint16)182, 
  /* Index to address the input settings for pad 86*/
  (uint16)185, 
  /* Index to address the input settings for pad 87*/
  (uint16)188, 
  /* Index to address the input settings for pad 88*/
  (uint16)190, 
  /* Index to address the input settings for pad 89*/
  (uint16)191, 
  /* Index to address the input settings for pad 90*/
  (uint16)195, 
  /* Index to address the input settings for pad 91*/
  (uint16)197, 
  /* Index to address the input settings for pad 92*/
  (uint16)200, 
  /* Index to address the input settings for pad 93*/
  (uint16)202, 
  /* Index to address the input settings for pad 94*/
  (uint16)205, 
  /* Index to address the input settings for pad 95*/
  (uint16)207, 
  /* Index to address the input settings for pad 96*/
  (uint16)212, 
  /* Index to address the input settings for pad 97*/
  (uint16)213, 
  /* Index to address the input settings for pad 98*/
  (uint16)217, 
  /* Index to address the input settings for pad 99*/
  (uint16)218, 
  /* Index to address the input settings for pad 100*/
  (uint16)221, 
  /* Index to address the input settings for pad 101*/
  (uint16)223, 
  /* Index to address the input settings for pad 102*/
  (uint16)227, 
  /* Index to address the input settings for pad 103*/
  (uint16)229, 
  /* Index to address the input settings for pad 104*/
  (uint16)233, 
  /* Index to address the input settings for pad 105*/
  (uint16)236, 
  /* Index to address the input settings for pad 106*/
  (uint16)241, 
  /* Index to address the input settings for pad 107*/
  (uint16)245, 
  /* Index to address the input settings for pad 108*/
  (uint16)248, 
  /* Index to address the input settings for pad 109*/
  (uint16)249, 
  /* Index to address the input settings for pad 110*/
  (uint16)251, 
  /* Index to address the input settings for pad 111*/
  (uint16)253, 
  /* Index to address the input settings for pad 112*/
  (uint16)255, 
  /* Index to address the input settings for pad 113*/
  (uint16)257, 
  /* Index to address the input settings for pad 114*/
  (uint16)258, 
  /* Index to address the input settings for pad 115*/
  (uint16)260, 
  /* Index to address the input settings for pad 116*/
  (uint16)262, 
  /* Index to address the input settings for pad 117*/
  (uint16)264, 
  /* Index to address the input settings for pad 118*/
  (uint16)267, 
  /* Index to address the input settings for pad 119*/
  (uint16)269, 
  /* Index to address the input settings for pad 120*/
  (uint16)271, 
  /* Index to address the input settings for pad 121*/
  (uint16)0, 
  /* Index to address the input settings for pad 122*/
  (uint16)0, 
  /* Index to address the input settings for pad 123*/
  (uint16)272, 
  /* Index to address the input settings for pad 124*/
  (uint16)274, 
  /* Index to address the input settings for pad 125*/
  (uint16)276, 
  /* Index to address the input settings for pad 126*/
  (uint16)278, 
  /* Index to address the input settings for pad 127*/
  (uint16)281, 
  /* Index to address the input settings for pad 128*/
  (uint16)282, 
  /* Index to address the input settings for pad 129*/
  (uint16)285, 
  /* Index to address the input settings for pad 130*/
  (uint16)289, 
  /* Index to address the input settings for pad 131*/
  (uint16)292, 
  /* Index to address the input settings for pad 132*/
  (uint16)296, 
  /* Index to address the input settings for pad 133*/
  (uint16)298, 
  /* Index to address the input settings for pad 134*/
  (uint16)301, 
  /* Index to address the input settings for pad 135*/
  (uint16)306, 
  /* Index to address the input settings for pad 136*/
  (uint16)0, 
  /* Index to address the input settings for pad 137*/
  (uint16)0, 
  /* Index to address the input settings for pad 138*/
  (uint16)0, 
  /* Index to address the input settings for pad 139*/
  (uint16)308, 
  /* Index to address the input settings for pad 140*/
  (uint16)310, 
  /* Index to address the input settings for pad 141*/
  (uint16)0, 
  /* Index to address the input settings for pad 142*/
  (uint16)312, 
  /* Index to address the input settings for pad 143*/
  (uint16)314, 
  /* Index to address the input settings for pad 144*/
  (uint16)316, 
  /* Index to address the input settings for pad 145*/
  (uint16)317, 
  /* Index to address the input settings for pad 146*/
  (uint16)319, 
  /* Index to address the input settings for pad 147*/
  (uint16)323, 
  /* Index to address the input settings for pad 148*/
  (uint16)324

};

#endif

#define PORT_STOP_SEC_CONFIG_DATA_16
/**
* @violates @ref PORT_PBCFG_REF_1 only preprocessor statements and comments before '#include'
* @violates @ref PORT_PBCFG_REF_2 Repeated include file MemMap.h
*/
#include "MemMap.h"
/*=================================================================================================
*                                      GLOBAL VARIABLES
=================================================================================================*/


/*=================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
=================================================================================================*/


/*=================================================================================================
*                                       LOCAL FUNCTIONS
=================================================================================================*/


/*=================================================================================================
*                                       GLOBAL FUNCTIONS
=================================================================================================*/


#endif    /* PORT_PRECOMPILE_SUPPORT*/

#ifdef __cplusplus
}
#endif
/** @} */

/* End of File */
