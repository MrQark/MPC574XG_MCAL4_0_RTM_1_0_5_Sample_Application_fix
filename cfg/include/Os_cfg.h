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
*       Description: Configuration Header file
*
*       Note: The implementation that was used is: AUTOSAR_MPC574xG
*       System Generator for AUTOSAR OS/MPC574xG - Version: 4.0 Build 4.0.92
*
********************************************************************************/
#ifndef OSCFG_H
#define OSCFG_H
#define APP_START_SEC_CODE
#include    "Os_memmap.h"

#define OS_START_SEC_CONST_UNSPECIFIED
#include    "Os_sections.h"


/* Applications */

/* Spinlock */

/* Application modes */
#define Mode01 ((AppModeType)0U)           /* AppMode ID */

/* Common stack */
#define OSTASK3STKSIZE 2080U               /* stack size of TASK3 */
#define OSTASK3STKBOS OSRUNNABLESTKBEG     /* TASK3 bos */
#define OSTASK3STKTOS (OSTASK3STKBOS + OSTASK3STKSIZE/4U) /* TASK3 tos */
#define OSTASK2STKSIZE 2080U               /* stack size of TASK2 */
#define OSTASK2STKBOS OSTASK3STKTOS        /* TASK2 bos */
#define OSTASK2STKTOS (OSTASK2STKBOS + OSTASK2STKSIZE/4U) /* TASK2 tos */
#define OSTASK1STKSIZE 2080U               /* stack size of TASK1 */
#define OSTASK1STKBOS OSTASK2STKTOS        /* TASK1 bos */
#define OSTASK1STKTOS (OSTASK1STKBOS + OSTASK1STKSIZE/4U) /* TASK1 tos */

/* Task definitions */
#define TASK3 ((TaskType)OS_MKOBJID(OBJECT_TASK, 0U)) /* Task ID */
extern void FuncTASK3(void); /* Task entry point */
#define TASK2 ((TaskType)OS_MKOBJID(OBJECT_TASK, 1U)) /* Task ID */
extern void FuncTASK2(void); /* Task entry point */
#define TASK1 ((TaskType)OS_MKOBJID(OBJECT_TASK, 2U)) /* Task ID */
extern void FuncTASK1(void); /* Task entry point */
#define LoopTask ((TaskType)OS_MKOBJID(OBJECT_TASK, 3U)) /* Task ID */
extern void FuncLoopTask(void); /* Task entry point */

/* ISR functions */

/* ISRs definition */
#define OSISRLINFLEX_SCI_Isr_UART_TX() OSISR1DISP(LINFLEX_SCI_Isr_UART_TX) /* IrqChannel is EXTERNAL */
extern void OS_isr_LINFLEX_SCI_Isr_UART_TX(void); /* irq: LINFLEX_SCI_Isr_UART_TX; channel: EXTERNAL; category: 1 */
#define LINFLEX_SCI_Isr_UART_TXLEVEL 5U    /* interrupt level of LINFLEX_SCI_Isr_UART_TX */
#define LINFLEX_SCI_Isr_UART_TXPRIORITY 5U /* priority of LINFLEX_SCI_Isr_UART_TX */
#define OSISRWdg_Swt0_Isr() OSISR1DISP(Wdg_Swt0_Isr) /* IrqChannel is EXTERNAL */
extern void OS_isr_Wdg_Swt0_Isr(void); /* irq: Wdg_Swt0_Isr; channel: EXTERNAL; category: 1 */
#define Wdg_Swt0_IsrLEVEL 10U              /* interrupt level of Wdg_Swt0_Isr */
#define Wdg_Swt0_IsrPRIORITY 10U           /* priority of Wdg_Swt0_Isr */
#define OSISRGpt_PIT_0_TIMER_0_ISR() OSISR1DISP(Gpt_PIT_0_TIMER_0_ISR) /* IrqChannel is EXTERNAL */
extern void OS_isr_Gpt_PIT_0_TIMER_0_ISR(void); /* irq: Gpt_PIT_0_TIMER_0_ISR; channel: EXTERNAL; category: 1 */
#define Gpt_PIT_0_TIMER_0_ISRLEVEL 11U     /* interrupt level of Gpt_PIT_0_TIMER_0_ISR */
#define Gpt_PIT_0_TIMER_0_ISRPRIORITY 11U  /* priority of Gpt_PIT_0_TIMER_0_ISR */
#define OSISRGpt_PIT_0_TIMER_1_ISR() OSISR1DISP(Gpt_PIT_0_TIMER_1_ISR) /* IrqChannel is EXTERNAL */
extern void OS_isr_Gpt_PIT_0_TIMER_1_ISR(void); /* irq: Gpt_PIT_0_TIMER_1_ISR; channel: EXTERNAL; category: 1 */
#define Gpt_PIT_0_TIMER_1_ISRLEVEL 11U     /* interrupt level of Gpt_PIT_0_TIMER_1_ISR */
#define Gpt_PIT_0_TIMER_1_ISRPRIORITY 11U  /* priority of Gpt_PIT_0_TIMER_1_ISR */
#define OSISRLin_Linflex_IsrRx_LINFlex_1() OSISR1DISP(Lin_Linflex_IsrRx_LINFlex_1) /* IrqChannel is EXTERNAL */
extern void OS_isr_Lin_Linflex_IsrRx_LINFlex_1(void); /* irq: Lin_Linflex_IsrRx_LINFlex_1; channel: EXTERNAL; category: 1 */
#define Lin_Linflex_IsrRx_LINFlex_1LEVEL 3U /* interrupt level of Lin_Linflex_IsrRx_LINFlex_1 */
#define Lin_Linflex_IsrRx_LINFlex_1PRIORITY 3U /* priority of Lin_Linflex_IsrRx_LINFlex_1 */
#define OSISRLin_Linflex_IsrTx_LINFlex_1() OSISR1DISP(Lin_Linflex_IsrTx_LINFlex_1) /* IrqChannel is EXTERNAL */
extern void OS_isr_Lin_Linflex_IsrTx_LINFlex_1(void); /* irq: Lin_Linflex_IsrTx_LINFlex_1; channel: EXTERNAL; category: 1 */
#define Lin_Linflex_IsrTx_LINFlex_1LEVEL 3U /* interrupt level of Lin_Linflex_IsrTx_LINFlex_1 */
#define Lin_Linflex_IsrTx_LINFlex_1PRIORITY 3U /* priority of Lin_Linflex_IsrTx_LINFlex_1 */
#define OSISRLin_Linflex_IsrError_LINFlex_1() OSISR1DISP(Lin_Linflex_IsrError_LINFlex_1) /* IrqChannel is EXTERNAL */
extern void OS_isr_Lin_Linflex_IsrError_LINFlex_1(void); /* irq: Lin_Linflex_IsrError_LINFlex_1; channel: EXTERNAL; category: 1 */
#define Lin_Linflex_IsrError_LINFlex_1LEVEL 3U /* interrupt level of Lin_Linflex_IsrError_LINFlex_1 */
#define Lin_Linflex_IsrError_LINFlex_1PRIORITY 3U /* priority of Lin_Linflex_IsrError_LINFlex_1 */
#define OSISRSpi_Dspi_IsrTCF_DSPI_0() OSISR1DISP(Spi_Dspi_IsrTCF_DSPI_0) /* IrqChannel is EXTERNAL */
extern void OS_isr_Spi_Dspi_IsrTCF_DSPI_0(void); /* irq: Spi_Dspi_IsrTCF_DSPI_0; channel: EXTERNAL; category: 1 */
#define Spi_Dspi_IsrTCF_DSPI_0LEVEL 3U     /* interrupt level of Spi_Dspi_IsrTCF_DSPI_0 */
#define Spi_Dspi_IsrTCF_DSPI_0PRIORITY 3U  /* priority of Spi_Dspi_IsrTCF_DSPI_0 */
#define OSISRAdc_Adcdig_EndGroupConvUnit1() OSISR1DISP(Adc_Adcdig_EndGroupConvUnit1) /* IrqChannel is EXTERNAL */
extern void OS_isr_Adc_Adcdig_EndGroupConvUnit1(void); /* irq: Adc_Adcdig_EndGroupConvUnit1; channel: EXTERNAL; category: 1 */
#define Adc_Adcdig_EndGroupConvUnit1LEVEL 5U /* interrupt level of Adc_Adcdig_EndGroupConvUnit1 */
#define Adc_Adcdig_EndGroupConvUnit1PRIORITY 5U /* priority of Adc_Adcdig_EndGroupConvUnit1 */
#define OSISREMIOS_0_CH_0_CH_1_ISR() OSISR1DISP(EMIOS_0_CH_0_CH_1_ISR) /* IrqChannel is EXTERNAL */
extern void OS_isr_EMIOS_0_CH_0_CH_1_ISR(void); /* irq: EMIOS_0_CH_0_CH_1_ISR; channel: EXTERNAL; category: 1 */
#define EMIOS_0_CH_0_CH_1_ISRLEVEL 5U      /* interrupt level of EMIOS_0_CH_0_CH_1_ISR */
#define EMIOS_0_CH_0_CH_1_ISRPRIORITY 5U   /* priority of EMIOS_0_CH_0_CH_1_ISR */

/* ISR1 id */
#define LINFLEX_SCI_Isr_UART_TX ((ISRType)OS_MKOBJID(OBJECT_ISR, 1U)) /* ISR ID */
#define Wdg_Swt0_Isr ((ISRType)OS_MKOBJID(OBJECT_ISR, 2U)) /* ISR ID */
#define Gpt_PIT_0_TIMER_0_ISR ((ISRType)OS_MKOBJID(OBJECT_ISR, 3U)) /* ISR ID */
#define Gpt_PIT_0_TIMER_1_ISR ((ISRType)OS_MKOBJID(OBJECT_ISR, 4U)) /* ISR ID */
#define Lin_Linflex_IsrRx_LINFlex_1 ((ISRType)OS_MKOBJID(OBJECT_ISR, 5U)) /* ISR ID */
#define Lin_Linflex_IsrTx_LINFlex_1 ((ISRType)OS_MKOBJID(OBJECT_ISR, 6U)) /* ISR ID */
#define Lin_Linflex_IsrError_LINFlex_1 ((ISRType)OS_MKOBJID(OBJECT_ISR, 7U)) /* ISR ID */
#define Spi_Dspi_IsrTCF_DSPI_0 ((ISRType)OS_MKOBJID(OBJECT_ISR, 8U)) /* ISR ID */
#define Adc_Adcdig_EndGroupConvUnit1 ((ISRType)OS_MKOBJID(OBJECT_ISR, 9U)) /* ISR ID */
#define EMIOS_0_CH_0_CH_1_ISR ((ISRType)OS_MKOBJID(OBJECT_ISR, 10U)) /* ISR ID */

/* Resources definitions */
#define RES_SCHEDULER ((ResourceType)OS_MKOBJID(OBJECT_RESOURCE, 0U)) /* Resource ID */

/* Events definition */
#define OsEvent_Task1 ((EventMaskType)1U)  /* Event mask */
#define OsEvent_Task2 ((EventMaskType)1U)  /* Event mask */
#define OsEvent_Task3 ((EventMaskType)1U)  /* Event mask */

/* Alarms identification */
#define OsAlarm_Task1 ((AlarmType)OS_MKOBJID(OBJECT_ALARM, 0U)) /* Alarm ID */
#define OsAlarm_Task2 ((AlarmType)OS_MKOBJID(OBJECT_ALARM, 1U)) /* Alarm ID */
#define OsAlarm_Task3 ((AlarmType)OS_MKOBJID(OBJECT_ALARM, 2U)) /* Alarm ID */

/* Counters identification */
#define SYSTEMTIMER ((CounterType)OS_MKOBJID(OBJECT_COUNTER, 0U)) /* Counter ID */
#define OSMINCYCLE_SYSTEMTIMER ((TickType)0x1U) /* SYSTEMTIMER */
#define OSMAXALLOWEDVALUE_SYSTEMTIMER ((TickType)0xffffffffU) /* SYSTEMTIMER */
#define OSTICKSPERBASE_SYSTEMTIMER 10UL    /* SYSTEMTIMER */
#define OS_TICKS2NS_SYSTEMTIMER(ticks) (PhysicalTimeType)(ticks*20000U) /*  */
#define OS_TICKS2US_SYSTEMTIMER(ticks) (PhysicalTimeType)((OSQWORD)(ticks)*20000ULL/1000UL) /*  */
#define OS_TICKS2MS_SYSTEMTIMER(ticks) (PhysicalTimeType)((OSQWORD)(ticks)*20000ULL/1000000UL) /*  */
#define OS_TICKS2SEC_SYSTEMTIMER(ticks) (PhysicalTimeType)((OSQWORD)(ticks)*20000ULL/1000000000UL) /*  */
#define OSMINCYCLE ((TickType)0x1U)        /* SysTimer */
#define OSMAXALLOWEDVALUE ((TickType)0xffffffffU) /* SysTimer */
#define OSTICKSPERBASE 10UL                /* SysTimer */
#define OSTICKDURATION 20000UL             /* SysTimer */

/* Messages identification */

/* Flags identification */

/* Message callback prototypes */

/* scheduletable */
#define SCHEDTAB ((ScheduleTableType)OS_MKOBJID(OBJECT_SCHEDULETABLE, 0U)) /* ScheduleTable ID */
#define OS_STOP_SEC_CONST_UNSPECIFIED
#include    "Os_sections.h"

#define APP_STOP_SEC_CODE
#include    "Os_memmap.h"

#endif /* OSCFG_H */

