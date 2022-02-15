/**
    @file    sample_app_mcal_lin_task.h
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

#ifndef SAMPLE_APP_MCAL_LIN_TASK_H
#define SAMPLE_APP_MCAL_LIN_TASK_H

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
#include "sample_app_mcal_data_definition.h"

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

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

FUNC (Std_ReturnType, SAMPLE_APP_CODE) SampleAppLinInit(P2VAR(SampleAppData_T, AUTOMATIC, SAMPLE_APP_VAR) pstSampleAppData);

FUNC (Std_ReturnType, SAMPLE_APP_CODE) SampleAppLinTask(P2VAR(SampleAppData_T, AUTOMATIC, SAMPLE_APP_VAR) pstSampleAppData);


#ifdef __cplusplus
}
#endif

#endif /* SAMPLE_APP_MCAL_LIN_TASK_H */

