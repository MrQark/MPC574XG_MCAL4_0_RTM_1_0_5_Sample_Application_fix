/**
    @file        sample_app_mcal_task_3.c
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

#include "sample_app_mcal_task_3.h"

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
@brief      SampleAppTask3 - Task3 function
@details    This function is called periodically by the OS or by the main() function.

@return     Returns the value of success
@retval     E_OK or E_NOT_OK

@pre None
@post None
*/
FUNC (Std_ReturnType, SAMPLE_APP_CODE) SampleAppTask3(P2VAR(SampleAppData_T, AUTOMATIC, SAMPLE_APP_VAR) pstSampleAppData)
{
    
    Std_ReturnType stdRet;
    
    stdRet = SampleAppAdcTask(pstSampleAppData);
    if (stdRet == E_OK)
    {
        #if (USE_PWM_MODULE==STD_ON)
        stdRet = SampleAppPwmTask(pstSampleAppData);
        if (stdRet == E_OK)
        {
            #if (USE_ICU_MODULE==STD_ON)
            stdRet = SampleAppIcuTask(pstSampleAppData);
            #endif /* USE_ICU_MODULE==STD_ON */
        }
        #endif /*USE_PWM_MODULE==STD_ON */
    }

    return (stdRet);
}
/*================================================================================================*/

#ifdef __cplusplus
}
#endif
