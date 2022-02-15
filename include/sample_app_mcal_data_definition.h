/**
    @file    sample_app_mcal_data_definition.h
    @version 1.0.5

    @brief   AUTOSAR Sample_app - header file for the initialization task for platform reg file.
    @details .

    Project      : AUTOSAR 4.0 MCAL
    Platform     : PA
    Peripheral   : 
    Dependencies : Base Det Dem Port Dio Mcu Rte Wdg WdgIf CanIf LinIf FrIf EcuM

    ARVersion     : 4.0.3
    ARRevision    : ASR_REL_4_0_REV_0003
    ARConfVariant :
    SWVersion     : 1.0.5
    BuildVersion  : MPC5746C_MCAL_1_0_5_RTM_ASR_REL_4_0_REV_0003_20171214

    (c) Copyright 2017 NXP
    All Rights Reserved.

    This file contains sample code only. It is not part of the production code deliverables.

*/
/*==================================================================================================
==================================================================================================*/

#ifndef SAMPLE_APP_MCAL_DATA_DEFINITION_H
#define SAMPLE_APP_MCAL_DATA_DEFINITION_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
/**
@file        modules.h
@brief Include Standard types & defines
*/

#include "typedefs.h"
#include "Std_Types.h"
#include "modules.h"
#include "sample_app_mcal_uart_console.h"

#if (USE_MCL_MODULE==STD_ON)
    #include "CDD_Mcl.h"
#endif

#if (USE_ADC_MODULE==STD_ON)
    #include "Adc.h"
#endif

#if (USE_CAN_MODULE==STD_ON)
    #include "Can.h"
    #include "EcuM.h"
    #include "CanIf.h"
    #include "CanIf_Cbk.h"
#endif
#include "Det.h"
#include "Dem.h"
#if (USE_DIO_MODULE==STD_ON)
    #include "Dio.h"
#endif
#include "EcuM.h"
#if (USE_FEE_MODULE==STD_ON)
    #include "Fee.h"
#endif
#if (USE_FLS_MODULE==STD_ON)
    #include "Fls.h"
#endif

#if (USE_FR_MODULE==STD_ON)
    #include "Fr.h"
#endif

#if (USE_GPT_MODULE==STD_ON)
    #include "Gpt.h"
#endif
#if (USE_ICU_MODULE==STD_ON)
    #include "Icu.h"
#endif
#if (USE_LIN_MODULE==STD_ON)
    #include "Lin.h"
#endif
#if (USE_MCU_MODULE==STD_ON)
    #include "Mcu.h"
#endif
#include "SchM_Adc.h"
#include "SchM_Can.h"
#include "SchM_Dio.h"
#include "SchM_Fls.h"
#include "SchM_Gpt.h"
#include "SchM_Icu.h"
#include "SchM_Mcu.h"
#include "SchM_Port.h"
#include "SchM_RamTst.h"
#include "SchM_Spi.h"
#include "SchM_Wdg.h"
#if (USE_PORT_MODULE==STD_ON)
    #include "Port.h"
#endif
#if (USE_PWM_MODULE==STD_ON)
    #include "Pwm.h"
#endif
#if (USE_SPI_MODULE==STD_ON)
    #include "Spi.h"
#endif
#if (USE_WDG_MODULE==STD_ON)
    /*#include "Wdg.h"*/
    #include "Wdg_43_Instance0.h"
    #include "Wdg_43_Instance1.h"
    #include "Wdg_43_Instance2.h"
    /*#include "Wdg_43_Instance3.h"*/
    #include "WdgIf_Types.h"
#endif

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/**
@{
@brief Parameters that shall be published within the modules header file.
       The integration of incompatible files shall be avoided.
@remarks Covers
@remarks Implements
*/

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/

#define GPT_TIMER_LED_TICKS             40000000UL


/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/


/*==================================================================================================
                                             ENUMS
==================================================================================================*/
typedef enum
{
    /* CAN state machine */
    CAN_INITIAL_STATE,
    CAN_ERROR_STATE,
    CAN_INITIALIZED_STATE,
    CAN_TRANSMIT_STATE,
    CAN_RECEIVE_STATE,
    CAN_FINAL_STATE,
    CAN_STALLED_STATE,

    /* FLEXRAY state machine */
    FLEXRAY_UNINITIALIZED,
    FLEXRAY_INITIALIZED,
    FLEXRAY_CONFIGURED,
    FLEXRAY_JOINING_CLUSTER,
    FLEXRAY_OPERATIONAL_IDLE,
    FLEXRAY_OPERATIONAL_DATA_UPDATE,
    FLEXRAY_LOST_CONNECTION,
    FLEXRAY_ERROR_MESSAGE,
    FLEXRAY_ERROR_FINAL,

    /* LIN state machine */
    LIN_INITIAL_STATE,
    LIN_ERROR_STATE,
    LIN_OPERATIONAL_STATE,
    LIN_TRANSMIT_STATE,
    LIN_TX_PENDING_STATE,
    LIN_FINAL_STATE,
    LIN_STALLED_STATE,
    LIN_SLEEP_STATE,
    LIN_WAKEUP_STATE,

/* SPI state machine */
    SPI_INITIAL_STATE,
    SPI_ERROR_STATE,
    SPI_INITIALIZED_STATE,
    SPI_TRANSMIT_STATE,
    SPI_TX_PENDING_STATE,
    SPI_FINAL_STATE,
    SPI_STALLED_STATE,

/* ADC state machine*/
    ADC_INITIAL_STATE,
    ADC_ERROR_STATE,
    ADC_INITIALIZED_STATE,
    ADC_CONVERT_PENDING_STATE,
    ADC_FINISH_CONVERT_STATE,
    ADC_COMPLETE_STATE,

/* PWM state machine*/
    PWM_INITIAL_STATE,
    PWM_ERROR_STATE,
    PWM_INITIALIZED_STATE,
    PWM_RUNNING_STATE,
    PWM_COMPLETE_STATE,

/* ICU state machine*/
    ICU_INITIAL_STATE,
    ICU_ERROR_STATE,
    ICU_RUNNING_STATE,
    ICU_FINISHED_MEASUREMENT_STATE,
    ICU_COMPLETE_STATE,


/* FEE state machine */
    FEE_INITIAL_STATE,
    FEE_ERROR_STATE,
    FEE_ERASE_STATE,
    FEE_ERASE_BUSY_STATE,
    FEE_WRITE_STATE,
    FEE_WRITE_BUSY_STATE,
    FEE_READ_STATE,
    FEE_READ_BUSY_STATE,
    FEE_READ_ERROR_STATE,
    FEE_VALIDATE_STATE,
    FEE_FINAL_STATE
} SampleAppDriverState_T;


/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

#if (USE_SPI_MODULE==STD_ON)
/* Spi specific structures */
typedef struct
{
    SampleAppDriverState_T ucState;     /* State machine state */
    uint8 bFlags; /* various application specific flags */
    uint32 ulTimeout;
    Spi_ConfigType * pSpiDriverConfig; /* pointer to the PB configuration structure */
} SpiSpecificData_T;
#endif

#if (USE_CAN_MODULE==STD_ON)
/* Can specific structures */
typedef struct
{
    SampleAppDriverState_T ucState;     /* State machine state */
    uint8 bFlags; /* various application specific flags */
    VAR(uint8, CAN_VAR)  controller;
    uint8 Can_Tx_flag;
    uint8 Can_Rx_flag;
    PduIdType Can_TxConfirmation_CanTxPduId;
    uint8 Can_TxConfirmation;
    uint8 Can_RxIndication;
    VAR(uint8, CAN_VAR)   Can_RxData[8U];
    uint8 Can_RxHandle;
    Can_IdType Can_RxId;
    uint8 Can_RxDlc;
    uint32 ulTimeout;
    Can_PduType CanMessage;
    Can_ConfigType * pCanDriverConfig; /* pointer to the PB configuration structure */
} CanSpecificData_T;
#endif

#if (USE_FR_MODULE==STD_ON)
/* FlexRay specific structures*/
typedef struct
{
    SampleAppDriverState_T ucState;     /* State machine state */
    uint8 bFlags; /* various application specific flags */
    Fr_ConfigurationType *pFlexRay_Config;
    uint32 ulTimeout;
    Fr_POCStatusType POCStatus;/* POC state */
} FlexRaySpecificData_T;
#endif

#if (USE_LIN_MODULE==STD_ON)
/* Lin specific structures */
typedef struct
{
    SampleAppDriverState_T  ucState;                /* State machine state */
    uint8                   bFlags;                 /* various application specific flags */
    Lin_ConfigType          *pLinDriverConfig;
    Lin_PduType             tosend_header;
    uint32                  ulSleepTimeout;
    uint32                  ulGetStatusTimeout;
} LinSpecificData_T;
#endif  /* USE_LIN_MODULE==STD_ON */

#if (USE_ADC_MODULE==STD_ON)
/* ADC specific structures */
typedef struct
{
    SampleAppDriverState_T ucState;     /* State machine state */
    uint16 usValueConverted;            /* Value read by adc */
    uint32 ulTimeout;                   /* Value of timeout*/
    uint16 usAdcMaxValueRes;             /* Adc resolution*/
    Adc_ConfigType  *pAdcDriverConfig;  /* Pointer to the PB configuration structure */
} AdcSpecificData_T;
#endif  /* USE_ADC_MODULE==STD_ON */

#if (USE_PWM_MODULE==STD_ON)
/* PWM specific structures */
typedef struct
{
    SampleAppDriverState_T ucState;     /* State machine state */
    uint8  ucNoOfSamples;               /* Number of samples measured**/
    uint16 usDutyCycle;                 /* The duty cycle set up depending on Adc conversion*/
    Pwm_ConfigType  *pPwmDriverConfig;  /* Pointer to the PB configuration structure */
} PwmSpecificData_T;
#endif  /* USE_PWM_MODULE==STD_ON */

#if (USE_ICU_MODULE==STD_ON)
/* ICU specific structures */
typedef struct
{
    SampleAppDriverState_T ucState;     /* State machine state */
    Icu_DutyCycleType IcuDuty;          /* sampled duty of the pwm signal */
    Icu_ConfigType  *pIcuDriverConfig;  /* Pointer to the PB configuration structure */
} IcuSpecificData_T;
#endif  /* USE_ICU_MODULE==STD_ON */

#if (USE_FEE_MODULE==STD_ON)
/* Fee specific structures */
typedef struct
{
    SampleAppDriverState_T ucState;     /* State machine state */
    uint8 bFlags; /* various application specific flags */
    Fls_ConfigType * pFlsDriverConfig; /* pointer to the PB configuration structure of the Fee driver*/
} FeeSpecificData_T;
#endif  /* USE_FEE_MODULE==STD_ON */

/* Sample app specific structures */
typedef struct
{
#if (USE_CAN_MODULE==STD_ON)
    CanSpecificData_T stCanData;
#endif
#if (USE_FR_MODULE==STD_ON)
    FlexRaySpecificData_T stFlexRayData;
#endif
#if (USE_LIN_MODULE==STD_ON)
    LinSpecificData_T stLinData;
#endif
#if (USE_SPI_MODULE==STD_ON)
    SpiSpecificData_T stSpiData;
#endif
#if (USE_FEE_MODULE==STD_ON)
    FeeSpecificData_T stFeeData;
#endif
#if (USE_ADC_MODULE==STD_ON)
    AdcSpecificData_T stAdcData;
#endif
#if (USE_PWM_MODULE==STD_ON)
    PwmSpecificData_T stPwmData;
#endif
#if (USE_ICU_MODULE==STD_ON)
    IcuSpecificData_T stIcuData;
#endif

    uint32 dummy_var;       /* covering the case when none of above are enabled */
} SampleAppData_T;

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

extern volatile VAR(SampleAppData_T, AUTOMATIC) stSampleAppData;
/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* SAMPLE_APP_MCAL_DATA_DEFINITION_H */

