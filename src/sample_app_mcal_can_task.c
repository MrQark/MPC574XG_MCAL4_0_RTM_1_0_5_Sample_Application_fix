/**
    @file        sample_app_mcal_can_task.c
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

#include "sample_app_mcal_can_task.h"

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
#define CAN_TRANSMIT_TIMEOUT              1000
#define CAN_RECEIVE_TIMEOUT               1000
#define CAN_DATA_LENGTH                   8
#define CAN_CONTROLLER_ID                 0U


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
#if (USE_CAN_MODULE==STD_ON)
/**
@brief      Can_Test_Tx_Cbk - callback function to simulate CanIf
@details

@return     none
@retval     none

@pre None
@post None
*/
/*================================================================================================*/
FUNC (void, AUTOMATIC) Can_Test_Tx_Cbk(void)
{
    stSampleAppData.stCanData.Can_Tx_flag = 1;
}
#endif  /* USE_CAN_MODULE==STD_ON */


#if (USE_CAN_MODULE==STD_ON)
/**
@brief      Can_Test_Rx_Cbk - callback function to simulate CanIf
@details

@return     none
@retval     none

@pre None
@post None
*/
/*================================================================================================*/
FUNC (void, AUTOMATIC) Can_Test_Rx_Cbk(void)
{
    stSampleAppData.stCanData.Can_Rx_flag = 1;
}
#endif  /* USE_CAN_MODULE==STD_ON */


#if (USE_CAN_MODULE==STD_ON)
/**
@brief      CanIf_CancelTxConfirmation - callback function to simulate CanIf
@details

@return     none
@retval     none

@pre None
@post None
*/
/*================================================================================================*/
FUNC (void, CANIF_CODE) CanIf_CancelTxConfirmation(PduIdType CanTxPduId, const PduInfoType * PduInfoPtr)
{
    return;
}
#endif  /* USE_CAN_MODULE==STD_ON */

#if (USE_CAN_MODULE==STD_ON)
/**
@brief      CanIf_ControllerBusOff - callback function to simulate CanIf
@details

@return     none
@retval     none

@pre None
@post None
*/
/*================================================================================================*/
FUNC(void, CAN_CODE) CanIf_ControllerBusOff(uint8 Controller)
{
    return;
}
#endif  /* USE_CAN_MODULE==STD_ON */


#if (USE_CAN_MODULE==STD_ON)
/**
@brief      CanIf_TxConfirmation - callback function to simulate CanIf
@details

@return     none
@retval     none

@pre None
@post None
*/
/*================================================================================================*/
FUNC(void, CAN_CODE) CanIf_TxConfirmation( PduIdType CanTxPduId)
{
    /** Increment counter to record transmission of a message */
    stSampleAppData.stCanData.Can_TxConfirmation++;

    /** Store the PDU ID for debug purposes */
    stSampleAppData.stCanData.Can_TxConfirmation_CanTxPduId = CanTxPduId;

    Can_Test_Tx_Cbk();

}
#endif  /* USE_CAN_MODULE==STD_ON */


#if (USE_CAN_MODULE==STD_ON)
/**
@brief      CanIf_RxIndication - callback function to simulate CanIf
@details

@return     none
@retval     none

@pre None
@post None
*/
/*================================================================================================*/
FUNC (void, CANIF_CODE) CanIf_RxIndication( Can_HwHandleType Hrh, Can_IdType CanId, uint8 CanDlc, const uint8* CanSduPtr )
{

    /** Local variable */
    VAR(uint8, CAN_VAR) i = 0U;

    /** Increment counter to record reception of a message */
    stSampleAppData.stCanData.Can_RxIndication++;

    for (i = 0; i < CanDlc; i++)
    {
        /** Pointer to received L-SDU (payload) */
        stSampleAppData.stCanData.Can_RxData[i] = CanSduPtr[i];
    }

    /** Get the id of the corresponding hardware object: Range is 0 .. (total number of HRH-1) */
    stSampleAppData.stCanData.Can_RxHandle = Hrh;
    /** standard/Extended Can ID of L-PDU  that has been successfully received */
    stSampleAppData.stCanData.Can_RxId = CanId;
    /** Data length code (length of L0PDU payload) */
    stSampleAppData.stCanData.Can_RxDlc = CanDlc;

    Can_Test_Rx_Cbk();

}
#endif  /* USE_CAN_MODULE==STD_ON */


#if (USE_CAN_MODULE==STD_ON)
FUNC (void, CANIF_CODE) CanIf_ControllerModeIndication( uint8 Controller, CanIf_ControllerModeType ControllerMode )
{
}
#endif  /* USE_CAN_MODULE==STD_ON */

#if (USE_CAN_MODULE==STD_ON)
/**
@brief      SampleAppCanInit - Initialize the Can task
@details    After calling this function the task containing Can should be initialize

@return     Returns the value of success
@retval     E_OK or E_NOT_OK

@pre None
@post None
*/
/*================================================================================================*/
FUNC (Std_ReturnType, SAMPLE_APP_CODE) SampleAppCanInit(P2VAR(SampleAppData_T, AUTOMATIC, SAMPLE_APP_VAR) pstSampleAppData)
{
    /* local variables here */
    Can_ReturnType canRet;

    /* set the first state in the state-machine */
    pstSampleAppData->stCanData.ucState = CAN_INITIAL_STATE;

    Can_Init( &CanConfigSet_0 );

    /* set the controller ID */
    pstSampleAppData->stCanData.controller = CAN_CONTROLLER_ID;

    pstSampleAppData->stCanData.Can_TxConfirmation = 0;
    pstSampleAppData->stCanData.Can_RxIndication = 0;

    pstSampleAppData->stCanData.pCanDriverConfig = (Can_ConfigType *)(&CanConfigSet_0);

    Can_DisableControllerInterrupts( pstSampleAppData->stCanData.controller);

    canRet = Can_SetControllerMode( pstSampleAppData->stCanData.controller, CAN_T_START);
    if (canRet != CAN_OK)
    {
        CONSOLE_MESSAGE("CAN: Error %d returned by Can_SetControllerMode()", canRet);
        /*CONSOLE_MESSAGE("CAN state-machine state:%d", pstSampleAppData->stCan1Data.ucState);*/
        pstSampleAppData->stCanData.ucState = CAN_ERROR_STATE;
        return (E_OK);
    }

    /* Can initialized - proceed to next steps */
    pstSampleAppData->stCanData.ucState = CAN_INITIALIZED_STATE;
    /*CONSOLE_MESSAGE("CAN state-machine state:%d", pstSampleAppData->stCan1Data.ucState);*/
    return(E_OK);
}
#endif  /* USE_CAN_MODULE==STD_ON */


#if (USE_CAN_MODULE==STD_ON)
/**
@brief      SampleAppCanTask - Contains the can task
@details

@return     Returns the value of success of executing the Can task
@retval     E_OK or E_NOT_OK

@pre None
@post None
*/
/*================================================================================================*/
FUNC (Std_ReturnType, SAMPLE_APP_CODE) SampleAppCanTask(P2VAR(SampleAppData_T, AUTOMATIC, SAMPLE_APP_VAR) pstSampleAppData)
{
    /* local variables here */
    Can_ReturnType canRet;
    VAR(uint8, CAN_VAR)  data[8U] = {0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31};

    /* state-machine logic */
    switch(pstSampleAppData->stCanData.ucState)
    {
        case CAN_INITIALIZED_STATE:
        {
            /** ID, length, etc. */
            pstSampleAppData->stCanData.CanMessage.length = 8U;
            pstSampleAppData->stCanData.CanMessage.swPduHandle = 1U;
            pstSampleAppData->stCanData.CanMessage.sdu = data;
            pstSampleAppData->stCanData.CanMessage.id = 0x31U;

            /* canRet = Can_Write(CanConf_CanHardwareObject_CanHardwareObject_1, &(pstSampleAppData->stCanData.CanMessage)); */
            canRet = Can_Write(CanHardwareObject_1, &(pstSampleAppData->stCanData.CanMessage));
            if (canRet != CAN_OK)
            {
                CONSOLE_MESSAGE("CAN Error %d returned by Can_Write()", canRet);
                /*CONSOLE_MESSAGE("CAN state-machine state:%d", pstSampleAppData->stCan1Data.ucState);*/
                pstSampleAppData->stCanData.ucState = CAN_ERROR_STATE;
                return (E_OK);
            }

            pstSampleAppData->stCanData.ulTimeout = 0;
            pstSampleAppData->stCanData.Can_Tx_flag = 0;
            /* the message was prepared for transmission - proceed to transmit state */
            pstSampleAppData->stCanData.ucState = CAN_TRANSMIT_STATE;
            return (E_OK);
        }

        case CAN_TRANSMIT_STATE:
        {
            /** Wait for  Tx confirmation */
            if ( (pstSampleAppData->stCanData.Can_Tx_flag == 0U) &&
                    (pstSampleAppData->stCanData.ulTimeout < CAN_TRANSMIT_TIMEOUT) )
            {
                Can_MainFunction_Write();

                pstSampleAppData->stCanData.ulTimeout++;
                return (E_OK);
            }
            else
            {
                if (pstSampleAppData->stCanData.Can_Tx_flag == 0U)
                {
                    /* transmission timeout */
                    CONSOLE_MESSAGE("CAN Error - CAN 1 transmission timeout", canRet);
                    /*CONSOLE_MESSAGE("CAN state-machine state:%d", pstSampleAppData->stCan1Data.ucState);*/
                    pstSampleAppData->stCanData.ucState = CAN_ERROR_STATE;
                    return (E_OK);
                }
                else
                {
                    /* transmission ended ok - proceed to receive */
                    pstSampleAppData->stCanData.ulTimeout = 0;
                    pstSampleAppData->stCanData.Can_Rx_flag = 0;
                    pstSampleAppData->stCanData.ucState = CAN_RECEIVE_STATE;
                    return (E_OK);
                }
            }
        }

        case CAN_RECEIVE_STATE:
        {
            /** Wait for  Rx confirmation */
            if ((pstSampleAppData->stCanData.Can_Rx_flag == 0U) &&
                (pstSampleAppData->stCanData.ulTimeout < CAN_RECEIVE_TIMEOUT) )
            {
                Can_MainFunction_Read();

                pstSampleAppData->stCanData.ulTimeout++;
                return (E_OK);
            }
            else
            {
                if (pstSampleAppData->stCanData.Can_Rx_flag == 0U)
                {
                    /* transmission timeout */
                    CONSOLE_MESSAGE("Error - CAN 1 receive timeout", canRet);
                    /*CONSOLE_MESSAGE("CAN state-machine state:%d", pstSampleAppData->stCan1Data.ucState);*/
                    pstSampleAppData->stCanData.ucState = CAN_ERROR_STATE;
                    return (E_OK);
                }
                else
                {
                    /* reception ended ok - proceed to final state */
                    pstSampleAppData->stCanData.ucState = CAN_FINAL_STATE;
                    return (E_OK);
                }
            }
        }

        case CAN_FINAL_STATE:
        {
            /* the task ended successfully */
            CONSOLE_MESSAGE("CAN task ended OK.\n");
            /*CONSOLE_MESSAGE("CAN state-machine state:%d", pstSampleAppData->stCanData.ucState);*/
            pstSampleAppData->stCanData.ucState = CAN_STALLED_STATE;
            /*CONSOLE_MESSAGE("CAN state-machine state:%d", pstSampleAppData->stCanData.ucState);*/
            return (E_OK);
        }

        case CAN_ERROR_STATE:
        {
            /* we ended up in error - do nothing */
            return (E_OK);
        }

        case CAN_STALLED_STATE:
        {
            /* everything went fine for this module - task stalled */
            asm("nop");
            return (E_OK);
        }

        default:
        {
            /* if we got here, something went terribly wrong*/
        }
        break;
    }
    return (E_NOT_OK);
}
#endif  /* USE_CAN_MODULE==STD_ON */

/*================================================================================================*/

/*================================================================================================*/
/*================================================================================================*/
#ifdef __cplusplus
}
#endif
