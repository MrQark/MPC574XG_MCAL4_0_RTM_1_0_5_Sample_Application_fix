/**
    @file        sample_app_mcal_uart_console.c
    @version     1.0.5

    @brief       AUTOSAR - Autosar  Sample Application.
    @details     The standard C library routine printf() over serial , but without all the garbage

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

#include "sample_app_mcal_uart_console.h"
#include "StdRegMacros.h"
#include "Reg_eSys.h"
#include "Reg_eSys_LINFlex.h"
#include "Mcal.h"
#include "Mcal_Os.h"
#include <stdio.h>
#include <stdarg.h>

/*==================================================================================================
                                        LOCAL MACROS
==================================================================================================*/

#define LINFLEX_PORT        2U
#ifndef LINFLEX_UARTSR_DTF_MASK_U32
#define LINFLEX_UARTSR_DTF_MASK_U32     0x00000002UL
#endif
/* LINFLEX IPG Clock in Hz*/
#define LIN_IPG_CLK           80000000UL
/* LINFLEX Baudrate */
#define LIN_BAUDRATE        115200UL
/* Calculate LINBRR value by the formula */
#define LINBRR              ((LIN_IPG_CLK / 16 ) / LIN_BAUDRATE)
/* Calculate LINFBRR value by the formula */
#define LINFBRR100_EXACT    (((LIN_IPG_CLK / 16 ) * 100) / LIN_BAUDRATE)
#define LINFBRR             (((LINFBRR100_EXACT - (LINBRR * 100)) * 16) / 100)

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/
#define TX_BUF_SIZE     0x100U
#define TX_ON           0x1U
#define TX_OFF          0x0U

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
@brief This is the TX buffer used as a FIFO
*/
static char uart_tx_buf[TX_BUF_SIZE] = {0};
/**
@brief head index points to the location from the uart_tx_buf for the next char to send
*/
static volatile uint16_t    head = 0U;
/**
@brief tail index points to the location from the uart_tx_buf for the next char to put in the buffer
*/
static volatile uint16_t    tail = 0U;
/**
@brief Represents the state of the UART. TX_ON if the uart is busy, TX_OFF if the UART is idle
*/
static volatile uint8_t     tx_state = TX_OFF;

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

static void uart_str(const char * buf, unsigned int len);

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/
/**
@brief   Send a character buffer to the UART console
@details

@return None
@retval None

@pre None
@post None
*/
static void uart_str(const char * buf, unsigned int len)
{
    unsigned int i = 0;
    
    while (i != len)
    {
        sci_a_putchar(buf[i]);
        i++;
    }
}

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/
ISR(LINFLEX_SCI_Isr_UART_TX);


/**
@brief   Print a formated string to the UART, add a CR to the end o the string
@details

@return number of characters printed
@retval None

@pre None
@post None
*/
int my_printf (const char *fmt, ...)
{
    char buf[256];
    int len=0;
    va_list args;

    /*get the list of arguments*/
    va_start (args, fmt);
    /*print the string to the buffer*/
    len = vsprintf (buf, fmt, args);
    /* Send the buffer to uart*/
    uart_str (buf, (unsigned int)len);
    /*send CR char*/
    sci_a_putchar('\r');
    va_end (args);
    return len;
}

/*================================================================================================*/
/**
@brief   Setup LINFlex for SCI/UART mode for 115200 bps
@details

@return None
@retval None

@pre None
@post None
*/
/*================================================================================================*/
void uart_console_init(void)
{
    uint16_t counter =0;
    uint32_t temp_reg = 0;

    tx_state = TX_OFF;

    REG_BIT_CLEAR32(LINFLEX_LINCR1_ADDR32(LINFLEX_PORT), LINFLEX_LINCR1_SLEEP_MASK_U32);

    /* prepare for INIT mode */
    REG_BIT_SET32(LINFLEX_LINCR1_ADDR32(LINFLEX_PORT), LINFLEX_LINCR1_INIT_MASK_U32);

    /* UART mode enable */
    REG_BIT_SET32(LINFLEX_UARTCR_ADDR32(LINFLEX_PORT), LINFLEX_UARTCR_UART_MASK_U32);

    /* word length: 8bits */
#if IPV_LINFLEX <= IPV_LINFLEX_00_10_00
    temp_reg = LINFLEX_UARTCR_WL_MASK_U32;
#elif IPV_LINFLEX == IPV_LINFLEX_03_00_00
    temp_reg = LINFLEX_UARTCR_WL0_MASK_U32;
#else
    temp_reg = 0x2UL;
#endif
    REG_BIT_SET32(LINFLEX_UARTCR_ADDR32(LINFLEX_PORT), temp_reg);

    for (counter=0;counter < 0x1000; counter++) {};

    /* parity odd */
#if IPV_LINFLEX <= IPV_LINFLEX_00_10_00
    temp_reg = LINFLEX_UARTCR_OP_MASK_U32;
#elif IPV_LINFLEX == IPV_LINFLEX_03_00_00
    temp_reg = LINFLEX_UARTCR_PC0;
#else
    temp_reg = 0x8UL;
#endif
    REG_BIT_SET32(LINFLEX_UARTCR_ADDR32(LINFLEX_PORT), temp_reg);

    /* parity enable */
    REG_BIT_CLEAR32(LINFLEX_UARTCR_ADDR32(LINFLEX_PORT), LINFLEX_UARTCR_PCE_MASK_U32);
    /* write Baudrate registers */
    REG_WRITE32(LINFLEX_LINFBRR_ADDR32(LINFLEX_PORT), LINFBRR);
    REG_WRITE32(LINFLEX_LINIBRR_ADDR32(LINFLEX_PORT), LINBRR);

#if IPV_LINFLEX <= IPV_LINFLEX_00_10_00
    temp_reg = LINFLEX_UARTCR_RDFL_MASK_U32 | LINFLEX_UARTCR_TDFL_MASK_U32;
#elif IPV_LINFLEX == IPV_LINFLEX_03_00_00
    temp_reg = LINFLEX_UARTCR_RDFLRFC_MASK_U32 | LINFLEX_UARTCR_TDFLTFC_MASK_U32;
#endif

    /* buffer size is 1 byte for transmit */
    /* buffer size is 1 byte for receive */
    REG_BIT_CLEAR32(LINFLEX_UARTCR_ADDR32(LINFLEX_PORT), temp_reg);

    /* transmit enable */
    /* receive enable */
    REG_BIT_SET32(LINFLEX_UARTCR_ADDR32(LINFLEX_PORT), LINFLEX_UARTCR_TXEN_MASK_U32 | LINFLEX_UARTCR_RXEN_MASK_U32);

    /* exit from INIT mode -> NORMAL mode */
    REG_BIT_CLEAR32(LINFLEX_LINCR1_ADDR32(LINFLEX_PORT), LINFLEX_LINCR1_INIT_MASK_U32);

    /* Enable Tx interrupt */
    REG_BIT_SET32(LINFLEX_LINIER_ADDR32(LINFLEX_PORT), LINFLEX_LINIER_DTIE_MASK_U32);
}

/*================================================================================================*/
/**
@brief   Wait until a character is received on UART and return it
@details

@return The Received char
@retval None

@pre None
@post None
*/
/*================================================================================================*/
char sci_a_getchar (void)
{
    char new_char;
    uint32_t temp_reg ;

#if IPV_LINFLEX <= IPV_LINFLEX_00_10_00
    temp_reg = LINFLEX_UARTSR_RMB_MASK_U32 | LINFLEX_UARTSR_DRF_MASK_U32 ;
#elif IPV_LINFLEX == IPV_LINFLEX_03_00_00
    temp_reg = LINFLEX_UARTSR_RMB_MASK_U32 | LINFLEX_UARTSR_DRFRFE_MASK_U32;
#else
    temp_reg = LINFLEX_UARTSR_RMB_MASK_U32 | 0x4UL;
#endif
    /* Wait until character has been received */
    /* RMB=1 - buffer ready to be read by software w1c */
    while ( temp_reg != (temp_reg & REG_READ32(LINFLEX_UARTSR_ADDR32(LINFLEX_PORT))) )
    {
        /* wait for a char */
    };

    /* char is present: read it and reset the flags */
    new_char = (char) (REG_READ32(LINFLEX_BDRM_ADDR32(LINFLEX_PORT)) & LINFLEX_BDRM_DATA4_MASK_U32);

    /* w1c */
    /* clear RMB and DRF flags */
    REG_WRITE32(LINFLEX_UARTSR_ADDR32(LINFLEX_PORT), temp_reg);

    return new_char;
}


/*================================================================================================*/
/**
@brief   Send a character on UART. If the tx is busy transmitting then put in the buffer.
@details

@return None
@retval None

@pre None
@post None
*/
/*================================================================================================*/
void sci_a_putchar (char ch)
{
    /*check if uart is  busy */
    if (TX_ON == tx_state)
    {
        /* Disable interrupts*/
        /*SuspendAllInterrupts();*/
        /* Put a character in the circular buffer */
        /* save the char in to the buffer*/
        uart_tx_buf[tail] = ch;
        /* increment the index */

        tail++;
        /* check the tail index from the buffer */
        if (TX_BUF_SIZE <= tail)
        {
            /* adjust if necessary  for overflow*/
            if (0 == head)
            {
                tail = TX_BUF_SIZE - 1;
            }
            else
            {
                tail = 0;
            }
        }
        else
        {
            /* buffer full */
            if (head == tail)
            {
                tail--;
            }
        }
        /* Enable interrupts */
        /*ResumeAllInterrupts();*/
    }
    else
    {
        /* Send the character */
        tx_state = TX_ON;
        REG_WRITE32(LINFLEX_BDRL_ADDR32(LINFLEX_PORT), (uint32_t)ch);
    }
}

/*================================================================================================*/
/**
@brief   Check if a char was received in the receive buffer.
@details

@return  - 1 if the char is present in UART buffer and 0 if none
@retval None

@pre None
@post None
*/
/*================================================================================================*/
int sci_a_getchar_present (void)
{
    return (0x0U != (LINFLEX_UARTSR_RMB_MASK_U32 & REG_READ32(LINFLEX_UARTSR_ADDR32(LINFLEX_PORT))));
}

/*================================================================================================*/
/**
@brief   UART Tx ISR Process function.
@details

@return None
@retval None

@pre None
@post None
*/
/*================================================================================================*/
ISR(LINFLEX_SCI_Isr_UART_TX)
{
    uint32_t reg_temp;

    reg_temp = LINFLEX_UARTSR_ADDR32(LINFLEX_PORT);
    if ( LINFLEX_UARTSR_DTF_MASK_U32 == (LINFLEX_UARTSR_DTF_MASK_U32 & REG_READ32(reg_temp)) )
    {
        /*clear interrupt flag*/
        /* w1c */
        REG_WRITE32(reg_temp, LINFLEX_UARTSR_DTF_MASK_U32);

        /* Disable interrupts*/
        /*SuspendAllInterrupts();*/

        /* check for more chars to send */
        if (0x0U == (tail - head))
        {
            tx_state = TX_OFF;
            head = 0x0U;
            tail = 0x0U;
        }
        else
        {
            /* adjust the head index if necessary */
            if (TX_BUF_SIZE <= head)
            {
                head = 0x0U;
            }
            /* send the next char from buffer */
            REG_WRITE32(LINFLEX_BDRL_ADDR32(LINFLEX_PORT), (uint32_t)uart_tx_buf[head]);
            /* increment the index*/
            head++;
        }
        /* Enable interrupts */
        /*ResumeAllInterrupts();*/

    }
    EXIT_INTERRUPT();
}
/*================================================================================================*/


/*================================================================================================*/
/**
@brief   Wait for the uart to send.
@details

@return None
@retval None

@pre None
@post None
*/
/*================================================================================================*/
void sci_wait_tx(void)
{
    while(TX_OFF != tx_state)
    {
        /* wait */
    }
}

/*================================================================================================*/
#ifdef __cplusplus
}
#endif
