/*
 * system.h
 *
 *  Created on: Apr 29, 2020
 *      Author: pkda001
 */

#ifndef SYSTEM_SYSTEM_H_
#define SYSTEM_SYSTEM_H_

#include <stdint.h>

/* Configure the system architecture
 * (do this before setting anything else up)
 *
 * Reset all pins to inputs with pulldown resistors
 */
void System_setup(void);

/* Start the system so any interrupts can be processed */
void System_start(void);

/* Software-based waiting
 * [in] iterations  number of iterations of polling to execute
 *
 */
void System_pollWait(uint32_t iterations);


#endif /* SYSTEM_SYSTEM_H_ */
