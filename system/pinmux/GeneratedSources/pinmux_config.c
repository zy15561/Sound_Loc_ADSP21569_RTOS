/*
 **
 ** Source file generated on ���� 8, 2024 at 16:04:44.	
 **
 ** Copyright (C) 2011-2024 Analog Devices Inc., All Rights Reserved.
 **
 ** This file is generated automatically based upon the options selected in 
 ** the Pin Multiplexing configuration editor. Changes to the Pin Multiplexing
 ** configuration should be made by changing the appropriate options rather
 ** than editing this file.
 **
 ** Selected Peripherals
 ** --------------------
 ** UART0 (RX, TX)
 **
 ** GPIO (unavailable)
 ** ------------------
 ** PA06, PA07
 */

#include <sys/platform.h>
#include <stdint.h>

#define UART0_RX_PORTA_MUX  ((uint16_t) ((uint16_t) 1<<14))
#define UART0_TX_PORTA_MUX  ((uint16_t) ((uint16_t) 1<<12))

#define UART0_RX_PORTA_FER  ((uint16_t) ((uint16_t) 1<<7))
#define UART0_TX_PORTA_FER  ((uint16_t) ((uint16_t) 1<<6))

int32_t adi_initpinmux(void);

/*
 * Initialize the Port Control MUX and FER Registers
 */
int32_t adi_initpinmux(void) {
    /* PORTx_MUX registers */
    *pREG_PORTA_MUX = UART0_RX_PORTA_MUX | UART0_TX_PORTA_MUX;

    /* PORTx_FER registers */
    *pREG_PORTA_FER = UART0_RX_PORTA_FER | UART0_TX_PORTA_FER;
    return 0;
}

