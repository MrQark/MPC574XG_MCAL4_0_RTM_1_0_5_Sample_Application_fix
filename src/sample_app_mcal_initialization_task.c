/**
    @file        sample_app_mcal_initialization_task.c
    @version     1.0.5

    @brief       AUTOSAR - Autosar  Sample Application.
    @details     Sample application using AutoSar MCAL drivers.

    Project      : AUTOSAR 4.0 MCAL
    Platform     : PA
    Peripheral   : 
    Dependencies : Base Det Dem Port Dio Mcu Rte Wdg WdgIf CanIf LinIf FrIf EcuM

    Autosar Version       : 4.0.3
    Autosar Revision      : ASR_REL_4_0_REV_0003
    Autosar Conf. Variant :
    Software Version      : 1.0.5
    Build Version         : MPC5746C_MCAL_1_0_5_RTM_ASR_REL_4_0_REV_0003_20171214

    (c) Copyright 2017 NXP
    All Rights Reserved.

    This file contains sample code only. It is not part of the production code deliverables.

*/
/*==================================================================================================
==================================================================================================*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "StdRegMacros.h"
#include "sample_app_mcal_initialization_task.h"


/*==================================================================================================
                                        LOCAL MACROS
==================================================================================================*/


/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/
#define SIUL_PCR_OBE_MASK           (uint16)0x0200
#define SIUL_PCR_IBE_MASK           (uint16)0x0100


/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
volatile   VAR(uint8, MCU_VAR)  u8SwitchToSupervisor = 0U; 
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/
#if defined(AUTOSAR_OS_NOT_USED)
extern const vuint32_t IntcVectorTableHw[];
#endif

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/**
@brief This is the global variable that holds all the sample app specific data
*/

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/
FUNC (void, SAMPLE_APP_CODE) SampleApp_Int_Init(void);


/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
/*=================================================================================================*/
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT

/* make the switch to supervisor mode.
Return how many times the supervisor mode was entered */

uint8 Sys_GoToSupervisor(void)
{

    u8SwitchToSupervisor++;
    Mcal_goToSupervisor()

    return u8SwitchToSupervisor;
}

/*make the switch back to user mode, return a uint32 value passed as parameter */
uint32 Sys_GoToUser_Return(uint32 u32returnValue)
{
    /* if previously, the supervisor mode was accessed, then switch back to UserMode */
    if(1UL == u8SwitchToSupervisor) 
    { 
        Mcal_goToUser(); 
    } 
    if(0UL < u8SwitchToSupervisor)
    {
        u8SwitchToSupervisor--;
    }
    /* return the value from the driver's call */
    return u32returnValue; 
}
/*make the switch back to user mode, return 0. */
void Sys_GoToUser(void)
{
    /* if previously, the supervisor mode was accessed, then switch back to UserMode */
    if(1UL == u8SwitchToSupervisor) 
    { 
        Mcal_goToUser(); 
    } 
    if(0UL < u8SwitchToSupervisor)
    {
        u8SwitchToSupervisor--;
    }
}
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */





/**
@brief      SampleApp_Int_Init - Interrupt initialization
@details    This function is called at the initialization stage to setup interrupts priorities

@return     none
@retval     none

@pre None
@post None
*/
#if defined(AUTOSAR_OS_NOT_USED)
FUNC (void, SAMPLE_APP_CODE) SampleApp_Int_Init(void)
{
    /* Setup all the needed interrupts(and their priorities) */

#if (USE_GPT_MODULE==STD_ON)
    /* Gpt interrupts*/
    REG_WRITE16(INTC_PSR(226), 0x8007);     /* Gpt_PIT_TIMER_0_ISR */
    REG_WRITE16(INTC_PSR(227), 0x8007);    /* Gpt_PIT_TIMER_1_ISR */
#endif

#if (USE_WDG_MODULE==STD_ON)

    /* Wdg interrupts*/
    REG_WRITE16(INTC_PSR(32), 0x8007);    /* Wdg_Swt0_Isr */
#endif

#if (USE_ADC_MODULE==STD_ON)
    /* Adc Interrupts */
    /* REG_WRITE16(INTC_PSR(548), 0x8007);  */  /* Adc_EndGroupConvUnit0 */
    REG_WRITE16(INTC_PSR(554), 0x8007);   /* Adc_EndGroupConvUnit1 */
#endif

#if (USE_PWM_MODULE==STD_ON)
    /* Pwm Interrupts */
    REG_WRITE16(INTC_PSR(706), 0x8007);    /* EMIOS_0_CH_0_CH_1_ISR */
#endif

#if (USE_ICU_MODULE==STD_ON)
    /* Icu Interrupts */
    /*REG_WRITE16(INTC_PSR(706), 0x8007);*/    /* EMIOS_0_CH_0_CH_1_ISR */
#endif

#if (USE_SPI_MODULE==STD_ON)
    /* SPI Interrupts */
    REG_WRITE16(INTC_PSR(262), 0x8007);    /* Spi_Dspi_IsrEOQ_DSPI_0 */
#endif


#if (USE_LIN_MODULE==STD_ON)
    /* LIN Interrupts */
    REG_WRITE16(INTC_PSR(379), 0x8007);   /* Lin_Linflex_IsrRx_LINFlex_1 */
    REG_WRITE16(INTC_PSR(380), 0x8007);   /* Lin_Linflex_IsrTx_LINFlex_1 */
    REG_WRITE16(INTC_PSR(381), 0x8007);   /* Lin_Linflex_IsrError_LINFlex_1 */
    
#endif
    /* UART APP Interrupts */
    REG_WRITE16(INTC_PSR(383), 0x8007);    /* LINFLEX_SCI_Isr_UART_TX */
    

    /* Ensure INTC's current priority is 0 */
     /* INTC_0.CPR[0].B.PRI = 0;*/
      (*(volatile uint32*)(0xFC040010))= (uint32)(0);

    /* Enable external Interrupts */
    /*ASM_KEYWORD(" wrteei 1");*/
}
#endif

/**
@brief      SampleAppInitTask - Sample Application Initialization
@details    This function is called at the initialization stage to initialize all MCAL drivers

@return     Returns the value of success
@retval     E_OK or E_NOT_OK

@pre None
@post None
*/
FUNC (Std_ReturnType, SAMPLE_APP_CODE) SampleAppInitTask(P2VAR(SampleAppData_T, AUTOMATIC, SAMPLE_APP_VAR) pstSampleAppData)
{
    /* local variables here */
    Std_ReturnType stdRet = E_OK;
/******************************************************************************/
/* DEM                                                                        */
/******************************************************************************/
    Dem_ReportErrorStatus(0, 0);
    Dem_SetEventStatus(0, 0);

/******************************************************************************/
/* DET                                                                        */
/******************************************************************************/
    Det_Init();
    Det_ReportError(0, 0, 0, 0);
    Det_Start();


/******************************************************************************/
/* PORT                                                                       */
/******************************************************************************/
#if (USE_PORT_MODULE==STD_ON)
    Port_Init(&PortConfigSet_0);
#endif

/******************************************************************************/
/* ECUM                                                                       */
/******************************************************************************/
    EcuM_SetWakeupEvent(0);
    EcuM_ValidateWakeupEvent(0);
    EcuM_CheckWakeup(0);

/******************************************************************************/
/* FEE                                                                        */
/******************************************************************************/
#if (USE_FEE_MODULE==STD_ON)
    stdRet = SampleAppFeeInit(pstSampleAppData);
#endif



/******************************************************************************/
/* ADC                                                                        */
/******************************************************************************/
#if (USE_ADC_MODULE==STD_ON)
    stdRet = SampleAppAdcInit(pstSampleAppData);
    if (stdRet != E_OK)
    {
        return (E_NOT_OK);
    }
#endif


/******************************************************************************/
/* CAN                                                                        */
/******************************************************************************/
#if (USE_CAN_MODULE==STD_ON)
    stdRet = SampleAppCanInit(pstSampleAppData);
#endif

/******************************************************************************/
/* DIO                                                                        */
/******************************************************************************/
#if (USE_DIO_MODULE==STD_ON)
#endif

/******************************************************************************/
/* FLS                                                                        */
/******************************************************************************/
#if (USE_FLS_MODULE==STD_ON)
#endif

/******************************************************************************/
/* FR                                                                        */
/******************************************************************************/
#if (USE_FR_MODULE==STD_ON)
    stdRet = SampleAppFrInit(pstSampleAppData);
#endif


/******************************************************************************/
/* LIN                                                                        */
/******************************************************************************/
#if (USE_LIN_MODULE==STD_ON)
    stdRet = SampleAppLinInit(pstSampleAppData);
#endif


/******************************************************************************/
/* ICU                                                                        */
/******************************************************************************/
#if (USE_ICU_MODULE==STD_ON)
    stdRet = SampleAppIcuInit(pstSampleAppData);
    if (stdRet != E_OK)
    {
        return (E_NOT_OK);
    }
#endif

/******************************************************************************/
/* SPI                                                                        */
/******************************************************************************/
#if (USE_SPI_MODULE==STD_ON)
    stdRet = SampleAppSpiInit(pstSampleAppData);
    if (stdRet != E_OK)
    {
        return (E_NOT_OK);
    }
#endif

/******************************************************************************/
/* PWM                                                                        */
/******************************************************************************/
#if (USE_PWM_MODULE==STD_ON)
    stdRet = SampleAppPwmInit(pstSampleAppData);
    if (stdRet != E_OK)
    {
        return (E_NOT_OK);
    }
#endif


#if defined(AUTOSAR_OS_NOT_USED)
/******************************************************************************/
/* Init Interrupts                                                            */
/******************************************************************************/
    SampleApp_Int_Init();
#endif
/******************************************************************************/
/* Init uart console                                                          */
/******************************************************************************/
    uart_console_init();
    CONSOLE_MESSAGE("\nMCAL SAMPLE APPLICATION\n");

    return (E_OK);
}
/*================================================================================================*/

#ifdef __cplusplus
}
#endif
