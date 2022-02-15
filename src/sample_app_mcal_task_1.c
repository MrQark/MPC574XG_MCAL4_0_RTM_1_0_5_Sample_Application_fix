/**
    @file        sample_app_mcal_task_1.c
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

#include "sample_app_mcal_task_1.h"

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


/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

static VAR(Dio_LevelType, AUTOMATIC) GptLed_state=STD_HIGH;
static volatile VAR(uint8, AUTOMATIC) wdg_state = 0x0U;
static volatile VAR(uint8, AUTOMATIC) wdg_start = 0x0U;

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/


/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

/**
@brief      SampleAppGptLed - Notification function called from Gpt driver
@details    This notification function is called by Gpt driver after the timer expire.

@return     none
@retval     none

@pre None
@post None
*/
#if (USE_GPT_MODULE == STD_ON)
FUNC (void, SAMPLE_APP_CODE) SampleAppGptLed(void)
{
#if (USE_DIO_MODULE == STD_ON)
    if (STD_HIGH == GptLed_state)
    {
        GptLed_state = STD_LOW;
    }
    else
    {
        GptLed_state = STD_HIGH;
    }

    Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_Dio_Led3, (Dio_LevelType)GptLed_state);
#endif  /* #if (USE_DIO_MODULE == STD_ON) */
}
#endif  /* (USE_GPT_MODULE == STD_ON) */


/**
@brief      WdgExpire_Callback - Callback Function called from Wdg_Isr
@details    This notification function is called by Wdg driver after the timer expires.

@return     none
@retval     none

@pre None
@post None
*/
#if (USE_WDG_MODULE == STD_ON)
FUNC (void, SAMPLE_APP_CODE) WdgExpire_Callback (void)
{
    /* Turn OFF the Led2 */
    Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_Dio_Led2, (Dio_LevelType)STD_HIGH);

    /* Restart Wdg */
    /*Wdg_SetMode(WDGIF_SLOW_MODE);*/
    /*Wdg_43_Instance0_SetMode(WDGIF_OFF_MODE);*/
    Wdg_43_Instance0_SetMode(WDGIF_SLOW_MODE);
    CONSOLE_MESSAGE("WatchDog EVENT!!!\n");
    /*Wdg_43_Instance0_SetTriggerCondition(5000);*/
    /*Dem_ReportErrorStatus(0x0U, 0x0U);*/
    Dem_SetEventStatus(0x0U, 0x0U);
    /* move to normal operation state*/
    wdg_state=0x0U;
    
}
#endif /*USE_WDG_MODULE == STD_ON)*/


/*================================================================================================*/
/**
@brief      SampleAppTask1 - Task1 function
@details    This function is called periodically by the OS or by the main() function.

@return     Returns the value of success
@retval     E_OK or E_NOT_OK

@pre None
@post None
*/
FUNC (Std_ReturnType, SAMPLE_APP_CODE) SampleAppTask1(P2VAR(SampleAppData_T, AUTOMATIC, SAMPLE_APP_VAR) pstSampleAppData)
{
    /* local variables here */
    Std_ReturnType stdRet = E_OK;

#if ((USE_WDG_MODULE == STD_ON) && (USE_DIO_MODULE == STD_ON))
    VAR(Dio_LevelType, AUTOMATIC) level;

    /* Read the status of the button */
    level = Dio_ReadChannel((Dio_ChannelType)DioConf_DioChannel_Dio_Key1);

 /* Check if Button pressed */
 /* LOW - LED ON */
 /* HIGH - LED OFF */
 if (1U == wdg_start)
 {
    if ((0x1U == level) && (0x0U == wdg_state))
    {
        /* Button pressed */
        CONSOLE_MESSAGE("Going to reset the LED NOW\n");
        wdg_state = 0x01U;
        Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_Dio_Led2, (Dio_LevelType)STD_LOW);
        Wdg_43_Instance0_SetTriggerCondition(0);
    }

    if (0x0U == wdg_state)
    {
         /* Button was not pressed since last Wdg event - Normal Operation mode */
         /* Keep Led2 OFF */
         Dio_WriteChannel((Dio_ChannelType)DioConf_DioChannel_Dio_Led2, (Dio_LevelType)STD_HIGH);
         /* Trigger the Watchdog */
         Wdg_43_Instance0_SetTriggerCondition(3000);
    }
 }
#endif  /* ((USE_WDG_MODULE == STD_ON) && (USE_DIO_MODULE == STD_ON)) */

#if ((USE_FEE_MODULE == STD_ON) && (USE_FLS_MODULE == STD_ON))

    if (FEE_FINAL_STATE != stSampleAppData.stFeeData.ucState)
    {
        /* start Watchdog and the Gpt timer after the Fee driver finished the execution */
        if (FEE_VALIDATE_STATE == stSampleAppData.stFeeData.ucState)
        {
#if (USE_WDG_MODULE == STD_ON)
           Gpt_EnableNotification(1);
           Wdg_43_Instance0_SetMode(WDGIF_SLOW_MODE);
           wdg_start = 1;
#endif  /* (USE_WDG_MODULE == STD_ON) */

#if (USE_GPT_MODULE == STD_ON)
            Gpt_EnableNotification(0);
            Gpt_StartTimer(0, GPT_TIMER_LED_TICKS);
#endif  /* (USE_GPT_MODULE == STD_ON) */
        }
        /* execute Fee task */
        stdRet = SampleAppFeeTask(pstSampleAppData);
    }
#else /* ((USE_FEE_MODULE == STD_ON) && (USE_FLS_MODULE == STD_ON)) */
#if (USE_WDG_MODULE==STD_ON)
    if (0U == wdg_start)
    {
        Wdg_43_Instance0_SetMode(WDGIF_SLOW_MODE);
        wdg_start = 1U;
    }
#endif /* (USE_WDG_MODULE==STD_ON) */
#if (USE_GPT_MODULE == STD_ON)
    Gpt_EnableNotification(0);
    Gpt_StartTimer(0, GPT_TIMER_LED_TICKS);
#endif  /* (USE_GPT_MODULE == STD_ON) */
#endif  /* ((USE_FEE_MODULE == STD_ON) && (USE_FLS_MODULE == STD_ON)) */

    return (stdRet);
}
/*================================================================================================*/

#ifdef __cplusplus
}
#endif
