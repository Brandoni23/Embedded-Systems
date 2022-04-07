/*
 * myuart.c
 *
 *  Created on: May 1, 2020
 *      Author: pkda001, <your name>
 */

/* DriverLib Includes */
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

/* Standard Includes */
#include <stdint.h>
#include <stdbool.h>

/* Module includes */
#include "uart.h"

/* You can provide implementations for any of the functions in uart.h
 *
 * This module can be a bit complicated so try another module first before you
 * try this one. You can find how to do UART things in the example code in
 * resource explorer.
 *
 * Also, if you try to implement void UART_setup(void), you will need to
 * also implement the UART interrupt handler that fills a buffer for the
 * void UART_getMessage(char * buffer) function. All UART messages from
 * the python scripts end in the new line character (\n).
 *
 */


