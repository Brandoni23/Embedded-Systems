/*
 * architecture.c
 *
 *  Created on: May 5, 2020
 *      Author: pkda001
 */

/* DriverLib Includes */
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

#include "buttons.h"

/* make sure buttons are on the same port for simplicity */
/* b1 = pin P3.5 and b2 = pin P3.6 */
ButtonPin Buttons_b1 = {.port = GPIO_PORT_P3 , .pin= GPIO_PIN5};
ButtonPin Buttons_b2 = {.port = GPIO_PORT_P3 , .pin= GPIO_PIN6};

/* the port on which the buttons are for dealing with the interrupts */
uint32_t Buttons_b1IntPort = INT_PORT3;
uint32_t Buttons_b2IntPort = INT_PORT3;


