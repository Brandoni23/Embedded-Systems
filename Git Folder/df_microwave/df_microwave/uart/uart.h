/*
 * uart.h
 *
 *  Created on: Apr 26, 2020
 *      Author: pkda001
 */

#ifndef UART_UART_H_
#define UART_UART_H_

#include <stdint.h>
#include <stdbool.h>

#define UART_msgAcquireLock() MAP_Interrupt_disableInterrupt(INT_EUSCIA0)
#define UART_msgReleaseLock() MAP_Interrupt_enableInterrupt(INT_EUSCIA0)

#define UART_MAX_MESSAGE_SIZE 8

extern volatile bool UART_msgReady;

/* Is UART setup? */
bool UART_isSetup(void);

/* Setup UART communications */
void UART_setup(void);

/* Send message on UART */
void UART_send(char * msg, uint8_t len);

/* Get received message
 * [in]  buffer  the buffer to store the received message in
 * [out] buffer  the buffer with the received message stored in it.
 */
uint8_t UART_getMessage(char * buffer);

#endif /* UART_UART_H_ */
