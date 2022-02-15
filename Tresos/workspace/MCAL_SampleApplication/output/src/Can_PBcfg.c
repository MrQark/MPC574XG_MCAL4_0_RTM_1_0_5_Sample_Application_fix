/**
*   @file    Can_PBcfg.c
*   @implements Can_PBcfg.c_Artifact
*   @version 1.0.5
*
*   @brief   AUTOSAR Can - module interface
*   @details Configuration Structures for PostBuild.
*
*   @addtogroup CAN_DRIVER
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.0 MCAL
*   Platform             : PA
*   Peripheral           : FLEXCAN
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
extern "C"{
#endif

/**
*
* @page misra_violations MISRA-C:2004 violations
*
* @section [global]
* Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and 
* external) shall not rely 
* on the significance of more than 31 characters. The used compilers use more than 31 chars for
* identifiers.
*
* @section [global]
* Violates MISRA 2004 Required Rule 9.2, Braces shall be used to indicate and match the structure in the non-zero
* initialisation of arrays and structures.
*
* @section [global]
* Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall be checked to ensure that 31 character significance
* and case sensitivity are supported for external identifiers.
*
*
* @section Can_PBcfg_c_REF_1
* Violates MISRA 2004 Advisory Rule 19.1,#include preceded by non preproc directives.
* This violation is not fixed since the inclusion of MemMap.h is as per Autosar requirement MEMMAP003.
*
* @section Can_PBcfg_c_REF_2
* Violates MISRA 2004 Required Rule 19.15, Repeated include file MemMap.h
* There are different kinds of execution code sections.
*
* @section Can_PBcfg_c_REF_3
* Violates MISRA 2004 Required Rule 1.4, Identifier clash
* This violation is due to the requirement that request to have a file version check.
*
* @section Can_PBcfg_c_REF_5
* Violates MISRA 2004 Required Rule 11.1, cast from unsigned long to pointer.
* This macro compute the address of any register by using the hardware ofsset of the controller. The address calculated as an unsigned int
* is passed to  a macro for initializing the pointer with that address. (ex: see REG_WRITE32 macro).
*
* @section Can_PBcfg_c_REF_4
* Violates MISRA 2004 Required Rule 8.10, external ... could be made static
* The respective code could not be made static because of layers architecture design of the driver.
*
* @section Can_PBcfg_c_REF_6
* Violates MISRA 2004 Required Rule 10.1 , prohibited Implicit Conversion: Non-constant argument to function, Implicit conversion of integer to smaller type
*
*/

/*
   (CAN078) The code file structure shall not be defined within this specification completely.
            At this point it shall be pointed out that the code-file structure shall include the following file named: Can_PBcfg.c.
            This file shall contain all post-build time configurable parameters.
   (CAN221) VariantPB: (Mix of precompile and Post Build multiple selectable configurable configurations.
*/
/**
* @file           Can_PBcfg.c
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Can.h"
#include "Can_IPW.h"



/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/*
* @file           Can_PBcfg.c
*/
#define CAN_VENDOR_ID_PBCFG_C                   43
#define CAN_AR_RELEASE_MAJOR_VERSION_PBCFG_C     4
#define CAN_AR_RELEASE_MINOR_VERSION_PBCFG_C     0
/* @violates @ref Can_PBcfg_c_REF_3 Violates MISRA 2004 Rule 1.4, Identifier clash */
#define CAN_AR_RELEASE_REVISION_VERSION_PBCFG_C  3
#define CAN_SW_MAJOR_VERSION_PBCFG_C             1
#define CAN_SW_MINOR_VERSION_PBCFG_C             0
#define CAN_SW_PATCH_VERSION_PBCFG_C             5

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/


/* Check if current file and Can configuration header file are of the same vendor */
#if (CAN_VENDOR_ID_PBCFG_C != CAN_VENDOR_ID)
#error "Can.h and Can_Cfg.h have different vendor ids"
#endif
/* Check if current file and CAN header file are of the same Autosar version */
#if ((CAN_AR_RELEASE_MAJOR_VERSION_PBCFG_C != CAN_AR_RELEASE_MAJOR_VERSION) || \
     (CAN_AR_RELEASE_MINOR_VERSION_PBCFG_C != CAN_AR_RELEASE_MINOR_VERSION) || \
     (CAN_AR_RELEASE_REVISION_VERSION_PBCFG_C != CAN_AR_RELEASE_REVISION_VERSION))
  #error "AutoSar Version Numbers of Can_PBcfg.c and Can.h are different"
#endif
/* Check if current file and CAN header file are of the same Software version */
#if ((CAN_SW_MAJOR_VERSION_PBCFG_C != CAN_SW_MAJOR_VERSION) || \
     (CAN_SW_MINOR_VERSION_PBCFG_C != CAN_SW_MINOR_VERSION) || \
     (CAN_SW_PATCH_VERSION_PBCFG_C != CAN_SW_PATCH_VERSION))
       #error "Software Version Numbers of Can_PBcfg.c and Can.h are different"
#endif

/* Check if current file and Can_IPW configuration header file are of the same vendor */
#if (CAN_VENDOR_ID_PBCFG_C  != CAN_IPW_VENDOR_ID_H)
#error "Can.h and Can_Cfg.h have different vendor ids"
#endif
/* Check if current file and CAN_IPW header file are of the same Autosar version */
#if ((CAN_AR_RELEASE_MAJOR_VERSION_PBCFG_C != CAN_IPW_AR_RELEASE_MAJOR_VERSION_H) || \
     (CAN_AR_RELEASE_MINOR_VERSION_PBCFG_C != CAN_IPW_AR_RELEASE_MINOR_VERSION_H) || \
     (CAN_AR_RELEASE_REVISION_VERSION_PBCFG_C != CAN_IPW_AR_RELEASE_REVISION_VERSION_H))
  #error "AutoSar Version Numbers of Can_PBcfg.c and Can_IPW.h are different"
#endif
/* Check if current file and CAN_IPW header file are of the same Software version */
#if ((CAN_SW_MAJOR_VERSION_PBCFG_C != CAN_IPW_SW_MAJOR_VERSION_H) || \
     (CAN_SW_MINOR_VERSION_PBCFG_C != CAN_IPW_SW_MINOR_VERSION_H) || \
     (CAN_SW_PATCH_VERSION_PBCFG_C != CAN_IPW_SW_PATCH_VERSION_H))
       #error "Software Version Numbers of Can_PBcfg.c and Can_IPW.h are different"
#endif


#if (CAN_PRECOMPILE_SUPPORT == STD_OFF)
/*==================================================================================================
*                                   GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/
#define CAN_START_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Can_PBcfg_c_REF_2 MISRA 2004 Rule 19.15, Repeated include file MemMap.h  */
#include "MemMap.h"

/**
@brief    Prototype of User Notifications
*/

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

/*==================================================================================================*/
/**
* @brief          Filter Masks
* @details        Filter Masks
*
*/
/*==================================================================================================*/
static CONST(Can_IdType, CAN_CONST) Can_FilterMasks0_PB[CAN_MAXFILTERCOUNT_0] =
{   
    /* FilterMasks0[0], "CanFilterMask_0" */
    (Can_IdType)0x1U
};


/*==================================================================================================*/
/**
* @brief          Configuration of FlexCan controller
* @details        Configuration of FlexCan controller
*
*/
/* Compiler_Warning: this warning due to behavior of compiler depend on configs. */ 
static CONST(Can_ControllerBaudrateConfigType, CAN_CONST) ControllerBaudrateCfgSet0_PB_0[CAN_CFGSET0_MAX_BAUDRATE_FC_A_0] =
{
    /*
    =================================================
    Clock Size = 4.0E7 Hz - Clock from external OSC.Clock Prescaler = 8 (1..256)
    CanBitRate = 500 Kbps (1bps..1Mbps)
    Number CANTimeQuantas per bit = 10 (8..25)
    CTRL Register Fields:
    PSEG1 =2(0..7)
    PSEG2 =3(1..7)
    PROPSEG =4(0..7)
    RJW =2(0..3)
    =================================================
    */
    /* Configuration for CanController ID0 == FlexCAN_A */
    {
        /* ===== Control Register - CTRL ===== */
        /* CTRL[PRESDIV] - Clock Prescaler */
        (uint32)(
                  ((uint32)7 << FLEXCAN_CTRL_PRESDIV_SHIFT_U8) |
                  /* CTRL[RJW] - Resynchronization Jump Width */
                  ((uint32)1<< FLEXCAN_CTRL_RJW_SHIFT_U8) |
                  /* CTRL[PSEG1] - Segment 1 */
                  ((uint32)1U << FLEXCAN_CTRL_PSEG1_SHIFT_U8) |
                  /* CTRL[PSEG2] - Segment 2 */
                  ((uint32)2U << FLEXCAN_CTRL_PSEG2_SHIFT_U8) |
                  ((uint32)0<< FLEXCAN_CTRL_CLKSRC_SHIFT_U8) |
                  /* CTRL[PROPSEG] - Propagation segment */
                  (uint32)3
                ),
        
        (uint8)12U, /* CTRL2[TASD] Tx Arbitration Start Delay */
        
        #if (CAN_DUAL_CLOCK_MODE == STD_ON)
        0U,
        #endif /* CAN_DUAL_CLOCK_MODE == STD_ON */
        
        (uint16)500 ,  /* 500kbps baud rate */
        
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        {
            /* False */
            /**/
            (uint32)0U, /*CAN FD Deactivated*/
            (uint32)0U,
            (uint32)0U,
            (uint32)0U, /*TRCV DELAY*/
            (uint32)0U /* The node dos not exist, BRS deactivated */
            #if ( (CAN_CONTROLLER_FD_ISO_CANFD == STD_ON) || (CAN_CONTROLLER_FD_PREXCEN == STD_ON) || (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON))
            ,(uint32)0U
            #endif /* ( (CAN_CONTROLLER_FD_ISO_CANFD == STD_ON) || (CAN_CONTROLLER_FD_PREXCEN == STD_ON) || (CAN_CONTROLLER_FD_EDFLTDIS == STD_ON)) */
        /* @violates @ref Can_PBcfg_c_REF_6 Violates MISRA 2004 Required Rule 10.1*/
        },
        #endif 
        
        #if (CAN_CBT_ENABLE == STD_ON)
        {
            (uint32)0U,
            (uint32)0U,
            (uint32)0U
        },
        #endif
        
        #if (CAN_SET_BAUDRATE_API == STD_ON)
        (uint16)0
        #endif
    }
};


/*==================================================================================================*/
/**
* @brief          Configuration of FlexCan controller
* @details        Configuration of FlexCan controller
*
*/
/* Compiler_Warning: this warning due to behavior of compiler depend on configs. */ 
static CONST(CanStatic_ControllerBaudrateConfigType, CAN_CONST) StaticControllerBaudrateCfgSet0_PB_0[CAN_CFGSET0_MAX_BAUDRATE_FC_A_0] = 
{
    /* Configuration for CanController ID0 == FlexCAN_A */
    {
        /* ===== Control Register - CTRL ===== */
        (uint32)(
                  ((uint32)1<< FLEXCAN_CTRL_LPB_SHIFT_U8) | /* CTRL[LPB] - Loop-back mode */
                  ((uint32)0<< FLEXCAN_CTRL_SMP_SHIFT_U8) | /* CTRL[SMP] - Sampling mode */
                  ((uint32)1<< FLEXCAN_CTRL_BOFFREC_SHIFT_U8) | /* CTRL[BOFF_REC] - Bus off recovery */
                  ((uint32)1<< FLEXCAN_CTRL_LBUF_SHIFT_U8) | /* CTRL[LBUF] - Lowest Buffer Transmitted First */
                  ((uint32)0<< FLEXCAN_CTRL_LOM_SHIFT_U8) /* CTRL[LOM] - Listen only mode */
                )
        
        #if (CAN_DUAL_CLOCK_MODE == STD_ON)
        ,0U
        #endif /* CAN_DUAL_CLOCK_MODE == STD_ON */
    }
};


/*==================================================================================================*/
/**
* @brief          Information about message buffers
* @details        (CAN100)Several TX hardware objects with unique HTHs may be configured. The CanIf module provides the HTH as parameter of the TX request. See Figure 7-2 for a possible configuration.
*
*/
static CONST(Can_MBConfigObjectType, CAN_CONST) MessageBufferConfigs0_PB[CAN_MAXMBCOUNT_0] =
{
    /* CanHardwareObject_0 Message Buffer of Can Controller ID = 0U*/
    {
        /* uIdMaskIndex */
        (Can_HwHandleType)0U,
        /* ControllerId  - based on the order from CanController list */
        (uint8)0U,
        /* ID type: EXTENDED, STANDARD, MIXED */
        (CanIdType)CAN_STANDARD,
        /* Receive/Transmit MB configuration */
        (Can_ObjType)CAN_RECEIVE,
        /* MessageId */
        (Can_IdType)0x1U,
        /* Local priority bits used for arbitration */
        (uint8)0x0U,
        /* Hardware Object ID */
        (Can_HwHandleType)0x0U,
        (uint8)0U,/* HOH reference is from CanMainFunctionRWPeriods_0 */
        
        
        
        (uint16)0x0080U,       /* Address of Message Buffer  */
        (uint8)8U,    /* Payload lenth of Message Buffer */
        (uint8)0U    /* The index of MB in message buffer memory */
    },

    /* CanHardwareObject_1 Message Buffer of Can Controller ID = 0U*/
    {
        /* uIdMaskIndex */
        (Can_HwHandleType)0U,
        /* ControllerId  - based on the order from CanController list */
        (uint8)0U,
        /* ID type: EXTENDED, STANDARD, MIXED */
        (CanIdType)CAN_STANDARD,
        /* Receive/Transmit MB configuration */
        (Can_ObjType)CAN_TRANSMIT,
        /* MessageId */
        (Can_IdType)0x1U,
        /* Local priority bits used for arbitration */
        (uint8)0x0U,
        /* Hardware Object ID */
        (Can_HwHandleType)0x1U,
        (uint8)0U,/* HOH reference is from CanMainFunctionRWPeriods_0 */
        
        
        
        (uint16)0x0090U,       /* Address of Message Buffer  */
        (uint8)8U,    /* Payload lenth of Message Buffer */
        (uint8)1U    /* The index of MB in message buffer memory */
    }
};

/*==================================================================================================*/
/**
* @brief          Description of individual FlexCan controllers on chip
* @details        Description of individual FlexCan controllers on chip
*
*/
static CONST(Can_ControlerDescriptorType, CAN_CONST) ControlerDescriptors0_PB[CAN_MAXCONTROLLERCOUNT_0] =
{
    /* ControlerDescriptor of CanController_0*/
    {
        (uint8)2U, /* No. of Message Buffers for current controller - u8MaxMBCount */
        (uint8)1U, /* No. of BaudRate configured for current controller - u8MaxBaudRateCount */
        (uint8)0U, /* Default BaudRate configured for current controller */
        ControllerBaudrateCfgSet0_PB_0, /* pControllerBaudrateConfigsPtr */
        #if (CAN_RXFIFO_ENABLE == STD_ON)
        (uint32)0U, /*Rx Fifo Global mask value*/
        0U, /* Number of MBs used by Rx Fifo */
        NULL_PTR, /* Pointer to RxFifo Overflow notification function. */
        NULL_PTR, /* Pointer to RxFifo Warning notification function. */
        #endif /* (CAN_RXFIFO_ENABLE == STD_ON) */
        #if (CAN_FD_MODE_ENABLE == STD_ON)
        /* Message Buffer Data Size for three RAM regions */
        (uint32)(
                  0U
                ),
        #endif
        /* ===== Controller Options ===== */
        (uint32)(
                  /* RX Fifo Disabled */ 
                  /* Error interrupt */ 
                  0U
                )
    }
};


/*==================================================================================================*/
/**
* @brief          Description of individual FlexCan controllers on chip
* @details        Description of individual FlexCan controllers on chip
*
*/
static CONST(CanStatic_ControlerDescriptorType, CAN_CONST) StaticControlerDescriptors0_PB[CAN_MAXCONTROLLERCOUNT_0] =
{
    /* ControlerDescriptor of CanController_0 */
    {
        (uint8)FLEXCAN_A_OFFSET, /* Can Controller Offset on chip: Can_A=offset 0, Can_B=offset 1, .. -u8ControllerOffset */
        StaticControllerBaudrateCfgSet0_PB_0, /* pControllerBaudrateConfigsPtr - pControllerBaudrateConfigsPtr */
        
        #if ((CAN_ERROR_NOTIFICATION_ENABLE == STD_ON) && (CPU_BYTE_ORDER==HIGH_BYTE_FIRST))
        NULL_PTR, /* Pointer to Error interrupt notification function (ESR[ERR_INT]). - Can_ErrorNotification */
        #elif(CPU_BYTE_ORDER==LOW_BYTE_FIRST) /* (CAN_ERROR_NOTIFICATION_ENABLE == STD_ON) */
        NULL_PTR, /* Pointer to Error interrupt notification function (ESR[ERR_INT]). */
        #endif
        
        #if (CAN_MIX_MB_SUPPORT == STD_ON)
        /* Maximum MBs supported for this controller. - u8NumberOfMB */
        (uint8)32U,
        #endif /* (CAN_MIX_MB_SUPPORT == STD_ON) */
        
        /* ===== Controller Options ===== */
        (uint32)(
                  CAN_CONTROLLERCONFIG_RXPOL_EN_U32 | /* RxPoll Enabled */
                  CAN_CONTROLLERCONFIG_TXPOL_EN_U32 | /* TxPoll Enabled */
                  CAN_CONTROLLERCONFIG_BOPOL_EN_U32 /* BusOffPoll Enabled */
                )
    }
};

/*==================================================================================================*/
/**
* @brief          Top level structure containing all Can driver configurations
* @details        Top level structure containing all Can driver configurations
*
*/
/* @violates @ref Can_PBcfg_c_REF_4 Violates MISRA 2004 Required Rule 8.10*/
CONST(Can_ConfigType, CAN_CONST) CanConfigSet_0 =
{
    Can_FilterMasks0_PB, /*  - pFilterMasks */
    
    /* MessageBufferConfigContainer - MBConfigContainer */
    {
        MessageBufferConfigs0_PB, /* pMessageBufferConfigsPtr */
        (Can_HwHandleType)2U, /* uMessageBufferConfigCount */
    },
    
    ControlerDescriptors0_PB, /* FlexCAN controller description */
    
    #if (CAN_RXFIFO_ENABLE == STD_ON)
    /* Can_RxFiFoTableIdConfigType */
    NULL_PTR, /* Rx fifo disabled */
    #endif  /* (CAN_RXFIFO_ENABLE == STD_ON) */
    
    (uint32)2U, /*Maximum Object IDs configured - u32CanMaxObjectId*/
    /* The index of the first HTH configured */
    (Can_HwHandleType)1U,
    /*Controller ID mapping - u8ControllerIdMapping*/
    {0U, 0U },
    
    /*Can Object Type mapping - eObjectTypeMapping*/
    {
        (Can_ObjType)CAN_RECEIVE,
        (Can_ObjType)CAN_TRANSMIT
    }
};

    
/*==================================================================================================*/
/**
* @brief          Top level structure containing all Can driver configurations
* @details        Top level structure containing all Can driver configurations
*
*/
/* @violates @ref Can_PBcfg_c_REF_4 Violates MISRA 2004 Required Rule 8.10*/
CONST(CanStatic_ConfigType, CAN_CONST) CanStatic_ConfigSet =
{
    (uint8) 1U, /* Number of CAN controllers configured -u8ControllersConfigured*/
     StaticControlerDescriptors0_PB  /* FlexCAN controller description - ControlerDescriptors*/
};

#endif /* #if (CAN_PRECOMPILE_SUPPORT == STD_OFF) */
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

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

/*
@file  Can_PBcfg.c
@note  Violates MISRA 2004 Advisory Rule 19.1, #include preceded by non preproc directives. - See @ref Can_PBcfg_c_REF_1
@note  Violates MISRA 2004 Required Rule 19.15, Repeated include file MemMap.h - See @ref Can_PBcfg_c_REF_2
*/
#define CAN_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Can_PBcfg_c_REF_1 MISRA 2004  Rule 19.1, #include preceded by non preproc directives.*/
/* @violates @ref Can_PBcfg_c_REF_2 MISRA 2004 Rule 19.15, Repeated include file MemMap.h  */
#include "MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */
