/*****************************************************************************
* Product: Buttons module interface for complex concurrency (QPC introduction)
* Version: 0.1
* Updated: Mar 25, 2019
*
* Authors: Philip Asare
*
* Copyright (C) 2019 Philip Asare. See TI_COPYRIGHT
*               All rights reserved.
*
*
* Contacts:
*           Philip Asare (pkda001@bucknell.edu)
*****************************************************************************/

#ifndef BUTTONS_H_
#define BUTTONS_H_

/* DriverLib Includes */
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

/* Standard Includes */
#include <stdint.h>
#include <stdbool.h>

/* Button pin structure
 *
 * This is a C data structure that helps keep information about the pin
 * all in one variable.
 */
typedef struct {
    uint_fast8_t port;
    uint_fast16_t pin;
} ButtonPin;


/* The button information. This assumes only two buttons*/

/*
 * Buttons for the button module. Must be configured by the application
 */
/* b1 */
extern ButtonPin Buttons_b1;

/* b2 */
extern ButtonPin Buttons_b2;

/* The port interrupt for the b1
 * NOTE: This should correspond to the port on which b1 is.
 */
extern uint32_t Buttons_b1IntPort;

/* The port interrupt for the b2
 * NOTE: This should correspond to the port on which b1 is.
 */
extern uint32_t Buttons_b2IntPort;


/* Set up the buttons */
void Buttons_setup(void);

/* Handle the interrupts associated with the button press (GPIO) */
void Button_handleButtonPress(void);

/* Report the button that was pressed
 *
 * NOTE: this function must be implemented by the application.
 */
void Buttons_reportButtonPressed(void);

/*
 * Check if the button is pressed
 *
 *  [in] port: the port of the button pin
 *        pin: the pin of the button pin
 *
 * [out] bool: the state of the button.
 *                  true  if the button is held down
 *                  false if the button is not held down (i.e. released)
 */
bool Buttons_isPressed(uint_fast8_t port, uint_fast8_t pin);

#endif /* BUTTONS_H_ */
