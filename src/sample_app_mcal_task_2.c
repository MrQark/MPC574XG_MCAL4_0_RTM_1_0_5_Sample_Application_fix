/**
    @file        sample_app_mcal_task_2.c
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

#include "sample_app_mcal_task_2.h"

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

/**
@brief This is the global variable that holds all the sample app specific data
*/

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
@brief      SampleAppTask2 - Task2 function
@details    This function is called periodicaly by the OS or by the main() function.

@return     Returns the value of success
@retval     E_OK or E_NOT_OK

@pre None
@post None
*/
FUNC (Std_ReturnType, SAMPLE_APP_CODE) SampleAppTask2(P2VAR(SampleAppData_T, AUTOMATIC, SAMPLE_APP_VAR) pstSampleAppData)
{
    /* local variables here */
    Std_ReturnType stdRet;
    stdRet = E_OK;

#if (USE_SPI_MODULE==STD_ON)
    stdRet = SampleAppSpiTask(pstSampleAppData);
    if (stdRet != E_OK)
    {
        CONSOLE_MESSAGE("Error from SPI task call");
    }
#endif /* (USE_SPI_MODULE==STD_ON) */

#if (USE_LIN_MODULE==STD_ON)
    stdRet = SampleAppLinTask(pstSampleAppData);
    if (stdRet != E_OK)
    {
        CONSOLE_MESSAGE("Error from LIN task call");
        return (E_NOT_OK);
    }
#endif /* (USE_LIN_MODULE==STD_ON) */

#if (USE_FR_MODULE==STD_ON)
    stdRet = SampleAppFrTask(pstSampleAppData);
    if (stdRet != E_OK)
    {
        CONSOLE_MESSAGE("Error from FlexRay task call");
    }
#endif    /* (USE_FR_MODULE==STD_ON) */

#if (USE_CAN_MODULE==STD_ON)
    stdRet = SampleAppCanTask(pstSampleAppData);
    if (stdRet != E_OK)
    {
        CONSOLE_MESSAGE("Error from Can task call");
    }
#endif /* (USE_CAN_MODULE==STD_ON) */

    return (E_OK);
}
/*================================================================================================*/

#ifdef __cplusplus
}
#endif
