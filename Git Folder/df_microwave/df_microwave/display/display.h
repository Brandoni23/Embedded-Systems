/*
 * display.h
 *
 *  Created on: Apr 26, 2020
 *      Author: pkda001
 */

#ifndef DISPLAY_DISPLAY_H_
#define DISPLAY_DISPLAY_H_

#include <stdint.h>

/* NOTES
 * -----
 * The system assumes we are using a 4x20 LCD Character Display.
 * Display positioning starts from index position 0 as follows
 *
 *      0| 1| 2|  ...                                   ... |18|19
 *    -------------------------------------------------------------
 *   0|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
 *    -------------------------------------------------------------
 *    |  |  |  |  | H| E| L| L| O|  |  |  |  |  |  |  |  |  |  |  |
 *    -------------------------------------------------------------
 *    |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
 *    -------------------------------------------------------------
 *   3|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
 *    -------------------------------------------------------------
 *
 *   the "HELLO" starts at line 1, column 4
 */


/* Setup the display */
void Display_setup(void);

/* Clear the screen by erasing everything currently on the screen */
void Display_clear();

/* Display line macros for write and positioning commands */

#define DISPLAY_LINE_0      (0x00)
#define DISPLAY_LINE_1      (0x01)
#define DISPLAY_LINE_2      (0x02)
#define DISPLAY_LINE_3      (0x03)

/* Set the current write position to the specified position.
 * [in] line    the display line DISPLAY_LINE_x, x = 0 ... 3
 * [in] col     the display column col = 0 ... 19
 *              (will set to 0 if out of range)
 */
void Display_setWritePosition(uint_fast8_t line, uint_fast8_t start);

/* Display character c at current cursor location.
 * Increment currrent cursor location by one after displaying character.
 * [in] c   the ASCII character or user character DISPLAY_USER_CHAR(x)
 *
 */
void Display_writeChar(char c);


/* Display a message (msg) starting at a particular position on the
 * display (line, start).
 * [in] line    the line on the display (see display line macros)
 * [in] start   the position on the line on the display to start the message
 * [in] msg     the message (character string) to display (if it won't fit,
 *              the message is truncated at the end of the line)
 *              Assumes that string contains a null terminator.
 */
void Display_writeString(uint8_t line,
                            uint8_t start,
                            char const str[]);


#endif /* DISPLAY_DISPLAY_H_ */
