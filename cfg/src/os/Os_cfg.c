/******************************************************************************
*
*       Freescale(TM) and the Freescale logo are trademarks of Freescale Semiconductor, Inc.
*       All other product or service names are the property of their respective owners.
*       (C) Freescale Semiconductor, Inc. 2017
*
*       THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
*       BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
*       Freescale Semiconductor, Inc.
*
*       Description: Configuration Data file
*
*       Note: The implementation that was used is: AUTOSAR_MPC574xG
*       System Generator for AUTOSAR OS/MPC574xG - Version: 4.0 Build 4.0.92
*
********************************************************************************/
#include    <Os.h>
#include    <Os_internal_config.h>
#define OSTEXT_START_SEC_CODE
#include    "Os_sections.h"

#define OS_START_SEC_CONST_UNSPECIFIED
#include    "Os_sections.h"


/* Task Configuration table */
const    OSTSK   OsTaskCfgTable[OSNTSKS] = 
{
    {
        (OSTASKENTRY) &FuncTASK3, /* entry point of task */
        OSTASK3STKTOS, /* top of task stack */
        OSTASK3STKBOS, /* bottom of task stack */
        0U | OSTSKEXTENDED | OSTSKACTIVATE, /* properties of task OSTSKACTIVATE, OSTSKEXTENDED, OSTSKNONPREMPT */
        0U, /* task id (task number in the task table) */
    }, /* TASK3 */
    {
        (OSTASKENTRY) &FuncTASK2, /* entry point of task */
        OSTASK2STKTOS, /* top of task stack */
        OSTASK2STKBOS, /* bottom of task stack */
        0U | OSTSKEXTENDED | OSTSKACTIVATE, /* properties of task OSTSKACTIVATE, OSTSKEXTENDED, OSTSKNONPREMPT */
        1U, /* task id (task number in the task table) */
    }, /* TASK2 */
    {
        (OSTASKENTRY) &FuncTASK1, /* entry point of task */
        OSTASK1STKTOS, /* top of task stack */
        OSTASK1STKBOS, /* bottom of task stack */
        0U | OSTSKEXTENDED | OSTSKACTIVATE, /* properties of task OSTSKACTIVATE, OSTSKEXTENDED, OSTSKNONPREMPT */
        2U, /* task id (task number in the task table) */
    }, /* TASK1 */
    {
        (OSTASKENTRY) &FuncLoopTask, /* entry point of task */
        0U, /* top of task stack */
        0U, /* bottom of task stack */
        0U | OSTSKACTIVATE, /* properties of task OSTSKACTIVATE, OSTSKEXTENDED, OSTSKNONPREMPT */
        3U, /* task id (task number in the task table) */
    }, /* LoopTask */
};
const    OSISRCFGTYPE   OsIsrCfg[OSNISR + 1] =  /*Interrupts config table*/
{
    {
        OSISRSystemTimer, /* actual ISR function */
        OSSYSINTERRUPT, /* ISR type */
        36U, /* index in OsIsr */
        1U|0x80U, /* Interrupt priority */
    }, /* SysTimer */
    {
        OS_isr_LINFLEX_SCI_Isr_UART_TX, /* actual ISR function */
        OSISR1, /* ISR type */
        383U,  
        5U|0x80U, /* ISR PRIORITY */
    }, /* LINFLEX_SCI_Isr_UART_TX */
    {
        OS_isr_Wdg_Swt0_Isr, /* actual ISR function */
        OSISR1, /* ISR type */
        32U,  
        10U|0x80U, /* ISR PRIORITY */
    }, /* Wdg_Swt0_Isr */
    {
        OS_isr_Gpt_PIT_0_TIMER_0_ISR, /* actual ISR function */
        OSISR1, /* ISR type */
        226U,  
        11U|0x80U, /* ISR PRIORITY */
    }, /* Gpt_PIT_0_TIMER_0_ISR */
    {
        OS_isr_Gpt_PIT_0_TIMER_1_ISR, /* actual ISR function */
        OSISR1, /* ISR type */
        227U,  
        11U|0x80U, /* ISR PRIORITY */
    }, /* Gpt_PIT_0_TIMER_1_ISR */
    {
        OS_isr_Lin_Linflex_IsrRx_LINFlex_1, /* actual ISR function */
        OSISR1, /* ISR type */
        379U,  
        3U|0x80U, /* ISR PRIORITY */
    }, /* Lin_Linflex_IsrRx_LINFlex_1 */
    {
        OS_isr_Lin_Linflex_IsrTx_LINFlex_1, /* actual ISR function */
        OSISR1, /* ISR type */
        380U,  
        3U|0x80U, /* ISR PRIORITY */
    }, /* Lin_Linflex_IsrTx_LINFlex_1 */
    {
        OS_isr_Lin_Linflex_IsrError_LINFlex_1, /* actual ISR function */
        OSISR1, /* ISR type */
        381U,  
        3U|0x80U, /* ISR PRIORITY */
    }, /* Lin_Linflex_IsrError_LINFlex_1 */
    {
        OS_isr_Spi_Dspi_IsrTCF_DSPI_0, /* actual ISR function */
        OSISR1, /* ISR type */
        262U,  
        3U|0x80U, /* ISR PRIORITY */
    }, /* Spi_Dspi_IsrTCF_DSPI_0 */
    {
        OS_isr_Adc_Adcdig_EndGroupConvUnit1, /* actual ISR function */
        OSISR1, /* ISR type */
        554U,  
        5U|0x80U, /* ISR PRIORITY */
    }, /* Adc_Adcdig_EndGroupConvUnit1 */
    {
        OS_isr_EMIOS_0_CH_0_CH_1_ISR, /* actual ISR function */
        OSISR1, /* ISR type */
        706U,  
        5U|0x80U, /* ISR PRIORITY */
    }, /* EMIOS_0_CH_0_CH_1_ISR */
    {
        OSISRException, /* actual ISR function */
        OSSYSINTERRUPT, /* ISR type */
        OSISREXCEPTIONIDX, /* Index of interrupt */
        OSISREXCEPTIONPRIO, /* Interrupt priority */
    }, /* Exception */
};
const    OSSHORT   OsIsr[OSNINTC] =  /* OSNINTERRUPTS external interrupt handlers table */
{
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, 2U, OSNISR, OSNISR, OSNISR, 0U, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 3U, 4U, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, 8U, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 5U, 
    6U, 7U, OSNISR, 1U, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, 9U, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 10U, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
    OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, OSNISR, 
};
const    OSPRIOTYPE   OsResPrioTbl[OSNRESS + OSNISRRESS] = 
{
    0U, /* RES_SCHEDULER */
};

/* Alarms table */
const    OSALM   OsAlarmsCfg[OSNUSERALMS] = 
{
    {
        2U, /* task to notify */
        OsEvent_Task1, /* if event==0 then alarm activates task else it set event for this task */
        0U, /* attached Counter ID */
    }, /* OsAlarm_Task1 */
    {
        1U, /* task to notify */
        OsEvent_Task2, /* if event==0 then alarm activates task else it set event for this task */
        0U, /* attached Counter ID */
    }, /* OsAlarm_Task2 */
    {
        0U, /* task to notify */
        OsEvent_Task3, /* if event==0 then alarm activates task else it set event for this task */
        0U, /* attached Counter ID */
    }, /* OsAlarm_Task3 */
};

/* Auto started Alarms */
const    OSALMAUTOTYPE   OsAutoAlarms[OSNAUTOALMS] = 
{
    {
        &OsAllAlarms.OsAlarms[0U], /* Reference to alarm */
        (TickType)5000U, /* Time to start (relative) */
        (TickType)5000U, /* Alarm cycle, 0U for non-cycled */
        OSALMRELATIVE, /* The type of autostart alarm */
    }, /* OsAlarm_Task1 */
    {
        &OsAllAlarms.OsAlarms[1U], /* Reference to alarm */
        (TickType)10000U, /* Time to start (relative) */
        (TickType)10000U, /* Alarm cycle, 0U for non-cycled */
        OSALMRELATIVE, /* The type of autostart alarm */
    }, /* OsAlarm_Task2 */
    {
        &OsAllAlarms.OsAlarms[2U], /* Reference to alarm */
        (TickType)15000U, /* Time to start (relative) */
        (TickType)15000U, /* Alarm cycle, 0U for non-cycled */
        OSALMRELATIVE, /* The type of autostart alarm */
    }, /* OsAlarm_Task3 */
};

/* Counter table */
const    OSCTR   OsCountersCfg[OSNCTRS] = 
{
    {
        (TickType) (0xffffffffU), /* maximum allowed counter value */
        10U, /* conversion constant */
        (TickType) (0x1U), /* minimum period value for alarm */
    }, /* SYSTEMTIMER */
};
static const    OSSCTEP   OSSCHEDTAB_actions[] = 
{
    {
        (OSSCTEPREF) &OSSCHEDTAB_actions[0U], /* the next expiry point */
        { 2U, /* Task to start or to set Event */0U, /* if event==0 alarm activates task else it sets event for this task */ }, /* action */
        30000U, /* Delay to the next expiry point */
        30000U, /* expiry point offset */
    }, /* TASK1 TASKACTIVATION */
};
const    OSSCT   OsScheduleTablesCfg[OSNSCTS] = 
{
    {
        0U, /* attached Counter ID */
        0U, /* Initial Offset of the Schedule Table */
        (OSSCTEPREF) &OSSCHEDTAB_actions[0U], /* the pointer to first expiry point in the Schedule Table */
        OSSCTCFGPERIODIC, /* config byte of the Schedule Table */
    }, /* OSSCHEDTAB */
};
#define OS_STOP_SEC_CONST_UNSPECIFIED
#include    "Os_sections.h"

#define OSTEXT_STOP_SEC_CODE
#include    "Os_sections.h"

