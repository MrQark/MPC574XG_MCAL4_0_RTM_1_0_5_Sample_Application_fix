/**
    @file        sample_app_mcal_icu_task.c
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

#include "sample_app_mcal_icu_task.h"
#if (USE_ICU_MODULE==STD_ON)
#include "Icu_Cfg.h"
#endif  /* USE_ICU_MODULE==STD_ON */

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
@brief MASK
*/
#define THRESHOLD       4

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


/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

#if (USE_ICU_MODULE==STD_ON)
/**
@brief      SampleAppIcuInit - Initialize the Icu task
@details    After calling this function the task containing Icu should be initialize

@return     Returns the value of success
@retval     E_OK or E_NOT_OK

@pre None
@post None
*/
/*================================================================================================*/
FUNC (Std_ReturnType, SAMPLE_APP_CODE) SampleAppIcuInit(P2VAR(SampleAppData_T, AUTOMATIC, SAMPLE_APP_VAR) pstSampleAppData)
{
    Std_ReturnType stdRet = E_OK;

    pstSampleAppData->stIcuData.pIcuDriverConfig = (Icu_ConfigType *)(&IcuConfigSet_0);

    /* Initialize the PWM with the post build configuration pointer */
    Icu_Init(pstSampleAppData->stIcuData.pIcuDriverConfig);

    pstSampleAppData->stIcuData.ucState = ICU_INITIAL_STATE;


    return stdRet;
}
#endif  /* USE_ICU_MODULE==STD_ON */


#if (USE_ICU_MODULE==STD_ON)
/**
@brief      SampleAppIcuTask - Contains the Icu task
@details

@return     Returns the value of success of executing the Icu task
@retval     E_OK or E_NOT_OK

@pre None
@post None
*/
/*================================================================================================*/
FUNC (Std_ReturnType, SAMPLE_APP_CODE) SampleAppIcuTask(P2VAR(SampleAppData_T, AUTOMATIC, SAMPLE_APP_VAR) pstSampleAppData)
{
    Std_ReturnType stdRet = E_OK;
    VAR(Icu_DutyCycleType, AUTOMATIC) sigDutyCycle;
    VAR (uint16, AUTOMATIC) IcuValueDutyCycle, AdcPercentageValue;
    VAR (uint16, AUTOMATIC) tol_positive = 0;

    /* ICU state machine */
    switch(pstSampleAppData->stIcuData.ucState)
    {

        case ICU_FINISHED_MEASUREMENT_STATE:

            /* if the pwm_state was changed in complete, icu state can be also changed */
            if (PWM_COMPLETE_STATE == pstSampleAppData->stPwmData.ucState)
            {
                if (ICU_ACTIVE != Icu_GetInputState(IcuConf_IcuChannel_Pwm_measure))
                {
                    /* ICU measurement not ended */
                    break;
                }
                else
                {
                    Icu_GetDutyCycleValues(IcuConf_IcuChannel_Pwm_measure, &sigDutyCycle);
                    pstSampleAppData->stIcuData.IcuDuty.ActiveTime = sigDutyCycle.ActiveTime;
                    pstSampleAppData->stIcuData.IcuDuty.PeriodTime = sigDutyCycle.PeriodTime;

                    Icu_StopSignalMeasurement(IcuConf_IcuChannel_Pwm_measure);

                    if (sigDutyCycle.ActiveTime == 0)
                    {
                        pstSampleAppData->stIcuData.ucState = ICU_ERROR_STATE;

                        CONSOLE_MESSAGE("ICU Error: Wrong value measured for Duty Cycle.");
                        stdRet = E_NOT_OK;
                        break;
                    }
                    else
                    {
                        IcuValueDutyCycle  = (sigDutyCycle.ActiveTime * 100) / sigDutyCycle.PeriodTime;
                    }


                    AdcPercentageValue = (pstSampleAppData->stAdcData.usValueConverted * 100) / pstSampleAppData->stAdcData.usAdcMaxValueRes;

                    tol_positive = IcuValueDutyCycle < AdcPercentageValue ? (AdcPercentageValue - IcuValueDutyCycle) : (IcuValueDutyCycle - AdcPercentageValue);

                    if (tol_positive > THRESHOLD)
                    {
                        pstSampleAppData->stIcuData.ucState = ICU_ERROR_STATE;
                        CONSOLE_MESSAGE("ICU Error: Duty cycle measured by ICU, was not the one set up using the value on ADC");
                        stdRet = E_NOT_OK;
                        break;
                    }
                    else
                    {
                        pstSampleAppData->stIcuData.ucState = ICU_COMPLETE_STATE;
                    }
                }
            }
            else
            {
                break;
            }

        case ICU_COMPLETE_STATE:
            /* Set up initial states to Adc, Pwm, Icu state machine */
            pstSampleAppData->stAdcData.ucState = ADC_INITIAL_STATE;
            pstSampleAppData->stPwmData.ucState = PWM_INITIAL_STATE;
            pstSampleAppData->stIcuData.ucState = ICU_INITIAL_STATE;

        case ICU_INITIAL_STATE:
        case ICU_RUNNING_STATE:
            stdRet = E_OK;
            break;

        case ICU_ERROR_STATE:
            stdRet = E_NOT_OK;
            break;

        default:
            stdRet = E_NOT_OK;
            break;

    }
    return (stdRet);
}
#endif  /* USE_ICU_MODULE==STD_ON */

/*================================================================================================*/
/*================================================================================================*/
#ifdef __cplusplus
}
#endif
