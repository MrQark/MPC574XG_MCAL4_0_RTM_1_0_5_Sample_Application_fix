/**
    @file    sample_app_mcal_fee_task.h
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

#ifndef SAMPLE_APP_MCAL_FEE_TASK_H
#define SAMPLE_APP_MCAL_FEE_TASK_H

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
/* define block number */
#define FEE_BLOCK_1 1
/*==================================================================================================
                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

extern volatile VAR(SampleAppData_T, AUTOMATIC) stSampleAppData;
/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

/* Fee upper layer Job End Notifications */
void Fee_JobEndNotif(void);
/* Fee upper layer Job Error Notifications */
void Fee_JobErrorNotif(void);

FUNC (Std_ReturnType, SAMPLE_APP_CODE) SampleAppFeeInit(P2VAR(SampleAppData_T, AUTOMATIC, SAMPLE_APP_VAR) pstSampleAppData);

FUNC (Std_ReturnType, SAMPLE_APP_CODE) SampleAppFeeTask(P2VAR(SampleAppData_T, AUTOMATIC, SAMPLE_APP_VAR) pstSampleAppData);

/*********************************************************************
 *
 * Copyright:
 *  Freescale Semiconductor, INC. All Rights Reserved.
 *  You are hereby granted a copyright license to use, modify, and
 *  distribute the SOFTWARE so long as this entire notice is
 *  retained without alteration in any modified and/or redistributed
 *  versions, and that such modified versions are clearly identified
 *  as such. No licenses are granted by implication, estoppel or
 *  otherwise under any patents or trademarks of Freescale
 *  Semiconductor, Inc. This software is provided on an "AS IS"
 *  basis and without warranty.
 *
 *  To the maximum extent permitted by applicable law, Freescale
 *  Semiconductor DISCLAIMS ALL WARRANTIES WHETHER EXPRESS OR IMPLIED,
 *  INCLUDING IMPLIED WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A
 *  PARTICULAR PURPOSE AND ANY WARRANTY AGAINST INFRINGEMENT WITH
 *  REGARD TO THE SOFTWARE (INCLUDING ANY MODIFIED VERSIONS THEREOF)
 *  AND ANY ACCOMPANYING WRITTEN MATERIALS.
 *
 *  To the maximum extent permitted by applicable law, IN NO EVENT
 *  SHALL Freescale Semiconductor BE LIABLE FOR ANY DAMAGES WHATSOEVER
 *  (INCLUDING WITHOUT LIMITATION, DAMAGES FOR LOSS OF BUSINESS PROFITS,
 *  BUSINESS INTERRUPTION, LOSS OF BUSINESS INFORMATION, OR OTHER
 *  PECUNIARY LOSS) ARISING OF THE USE OR INABILITY TO USE THE SOFTWARE.
 *
 *  Freescale Semiconductor assumes no responsibility for the
 *  maintenance and support of this software
 *
 ********************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* SAMPLE_APP_MCAL_FEE_TASK_H */

