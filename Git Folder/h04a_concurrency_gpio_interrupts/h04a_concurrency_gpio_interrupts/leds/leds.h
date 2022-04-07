/*****************************************************************************
* Product: Support module for basic concurrency (button interrupts)
* Version: 0.2
* Updated: Feb 20, 2019
*
* Authors: Philip Asare, Reed Evans
*
* Copyright (C) 2019 Philip Asare, Reed Evans. See TI_COPYRIGHT
*               All rights reserved.
*
*
* Contacts:
*           Philip Asare (pkda001@bucknell.edu)
*           Reed Evans (rae018@bucknell.edu)
*****************************************************************************/

#ifndef LEDS_H_
#define TIMING_H_

/* DriverLib Includes */
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

/* Standard Includes */
#include <stdint.h>
#include <stdbool.h>

#define LED_RED             (GPIO_PIN0)
#define LED_GREEN           (GPIO_PIN1)
#define LED_BLUE            (GPIO_PIN2)

#define LED_ALL             (LED_RED | LED_GREEN | LED_BLUE)


/* Set up the system.
 *  - Reset all pins to inputs with pull down resistors
 *  - Set up the LEDs
 */
void LEDS_setup(void);

/* Toggle the specified LEDs
 * [in] LEDS:  the LEDS to toggle
 *              valid values are:
 *              LED_RED
 *              LED_GREEN
 *              LED_BLUE
 *
 *              or combinations (ored together) of these
 */
void LEDS_toggle(uint16_t LEDS);

/* Turn on the specified LEDs
 * [in] LEDS:  the LEDS to turn on
 *              valid values are:
 *              LED_RED
 *              LED_GREEN
 *              LED_BLUE
 *
 *              or combinations (ored together) of these
 */
void LEDS_turnOn(uint16_t LEDS);

/* Turn off the specified LEDs
 * [in] LEDS:  the LEDS to turn off
 *              valid values are:
 *              LED_RED
 *              LED_GREEN
 *              LED_BLUE
 *
 *              or combinations (ored together) of these
 */
void LEDS_turnOff(uint16_t LEDS);

#endif /* LEDS_H_ */
