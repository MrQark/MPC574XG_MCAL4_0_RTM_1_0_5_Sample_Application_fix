/**
    @file        sample_app_mcal_pwm_task.c
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

#include "sample_app_mcal_pwm_task.h"
#if (USE_PWM_MODULE==STD_ON)
#include "Pwm_Cfg.h"
#endif  /* USE_PWM_MODULE==STD_ON */

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
/**
@brief This constant defines the maximum value of the pwm's duty cycle
*/
#define PWM_DUTY_CYCLE_MAX_VALUE 0x8000U

/**
@brief This constant defines number of periods
*/
#define PWM_PERIODS              10U
#define PWM_DUTY_TRIM            0x50U
/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/


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
#if ((USE_PWM_MODULE==STD_ON) && (USE_ICU_MODULE==STD_ON))
/**
@brief      Pwm_Led1Notification - Notification function for channel Pwm_Led1
@details    This notification starts the Icu signal measurement and sets Icu in the finish
            measurement state, after a number of PWM_PERIODS had passed

@return     void

@pre None
@post None
*/
void Pwm_Led1Notification(void)
{
    uint8 IcuState = stSampleAppData.stIcuData.ucState;

    if ( ICU_INITIAL_STATE == IcuState )
    {
        /* Start the duty cycle measurement of PWM signals using ICU*/
        if (6 >= --stSampleAppData.stPwmData.ucNoOfSamples)
        {
            Icu_StartSignalMeasurement(IcuConf_IcuChannel_Pwm_measure);
            stSampleAppData.stIcuData.ucState         = ICU_RUNNING_STATE;
        }
    }
    else if ( ICU_RUNNING_STATE == IcuState )
    {
        if (0 == --stSampleAppData.stPwmData.ucNoOfSamples)
        {
            /* after a certain number of periods the icu is switch to finish measurement state*/
            stSampleAppData.stIcuData.ucState = ICU_FINISHED_MEASUREMENT_STATE;
            Pwm_DisableNotification(PwmConf_PwmChannelConfigSet_Pwm_Led1);
        }

    }
    else
    {
        stSampleAppData.stIcuData.ucState = ICU_ERROR_STATE;
        stSampleAppData.stPwmData.ucState = PWM_ERROR_STATE;
        Pwm_DisableNotification(PwmConf_PwmChannelConfigSet_Pwm_Led1);
        CONSOLE_MESSAGE("PWM Error: ICU was not in INITIAL STATE nor RUNNING STATE when the PWM notification was called");
    }

}
#endif  /* (USE_PWM_MODULE==STD_ON) && (USE_ICU_MODULE==STD_ON) */


/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

/**
@brief      SampleAppPwmInit - Initialize the Pwm task
@details    After calling this function the task containing PWM should be initialize

@return     Returns the value of success
@retval     E_OK or E_NOT_OK

@pre None
@post None
*/
/*================================================================================================*/
#if (USE_PWM_MODULE==STD_ON)
FUNC (Std_ReturnType, SAMPLE_APP_CODE) SampleAppPwmInit(P2VAR(SampleAppData_T, AUTOMATIC, SAMPLE_APP_VAR) pstSampleAppData)
{
    Std_ReturnType stdRet = E_OK;

    pstSampleAppData->stPwmData.pPwmDriverConfig = (Pwm_ConfigType *)(&PwmChannelConfigSet_0);

    /* Initialize the PWM with the post build configuration pointer*/
    Pwm_Init(pstSampleAppData->stPwmData.pPwmDriverConfig);

    pstSampleAppData->stPwmData.ucState = PWM_INITIAL_STATE;

    return stdRet;
}
#endif  /* USE_PWM_MODULE==STD_ON */


#if ((USE_PWM_MODULE==STD_ON) && (USE_ICU_MODULE==STD_ON))
/**
@brief      SampleAppPwmTask - Contains the Pwm task
@details

@return     Returns the value of success of executing the Pwm task
@retval     E_OK or E_NOT_OK

@pre None
@post None
*/
/*================================================================================================*/
FUNC (Std_ReturnType, SAMPLE_APP_CODE) SampleAppPwmTask(P2VAR(SampleAppData_T, AUTOMATIC, SAMPLE_APP_VAR) pstSampleAppData)
{
    Std_ReturnType stdRet = E_OK;

    /* Pwm state machine*/
    switch(pstSampleAppData->stPwmData.ucState)
    {
        case PWM_INITIAL_STATE:
            if (pstSampleAppData->stAdcData.ucState == ADC_COMPLETE_STATE)
            {
                pstSampleAppData->stPwmData.ucNoOfSamples   = PWM_PERIODS;
                pstSampleAppData->stPwmData.usDutyCycle     = (uint16)( (pstSampleAppData->stAdcData.usValueConverted * PWM_DUTY_CYCLE_MAX_VALUE) /pstSampleAppData->stAdcData.usAdcMaxValueRes);
                pstSampleAppData->stPwmData.ucState         = PWM_INITIALIZED_STATE;

                /* Compensate duty at limit values for the ICU readings*/
                if ( (PWM_DUTY_CYCLE_100 - PWM_DUTY_TRIM) <= pstSampleAppData->stPwmData.usDutyCycle)
                {
                    pstSampleAppData->stPwmData.usDutyCycle = PWM_DUTY_CYCLE_100 - PWM_DUTY_TRIM;
                }
                else if (PWM_DUTY_TRIM >= pstSampleAppData->stPwmData.usDutyCycle)
                {
                    pstSampleAppData->stPwmData.usDutyCycle = PWM_DUTY_TRIM;
                }
            }
            else
            {
                break;
            }

        case PWM_INITIALIZED_STATE:

            /* Enable the notification service and set up the pwm duty cycle*/
            pstSampleAppData->stPwmData.ucState = PWM_RUNNING_STATE;

            Pwm_SetDutyCycle(PwmConf_PwmChannelConfigSet_Pwm_Led1, pstSampleAppData->stPwmData.usDutyCycle);
            Pwm_EnableNotification(PwmConf_PwmChannelConfigSet_Pwm_Led1,PWM_RISING_EDGE);


        case PWM_RUNNING_STATE:

            if (pstSampleAppData->stIcuData.ucState == ICU_FINISHED_MEASUREMENT_STATE)
            {
                pstSampleAppData->stPwmData.ucState = PWM_COMPLETE_STATE;
                /*CONSOLE_MESSAGE("PWM state-machine state:%d", pstSampleAppData->stPwmData.ucState);*/
            }
            else
            {
                break;
            }

        case PWM_COMPLETE_STATE:

            stdRet = E_OK;

            break;

        case PWM_ERROR_STATE:

            stdRet = E_NOT_OK;

            break;

        default:

            stdRet = E_NOT_OK;

            break;
    }
    return (stdRet);
}
#endif  /* (USE_PWM_MODULE==STD_ON) && (USE_ICU_MODULE==STD_ON) */


/*================================================================================================*/
#ifdef __cplusplus
}
#endif
