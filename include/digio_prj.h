#ifndef PinMode_PRJ_H_INCLUDED
#define PinMode_PRJ_H_INCLUDED

#include "hwdefs.h"

/* Here you specify generic IO pins, i.e. digital input or outputs.
 * Inputs can be floating (INPUT_FLT), have a 30k pull-up (INPUT_PU)
 * or pull-down (INPUT_PD) or be an output (OUTPUT)
*/

#define DIG_IO_LIST \
    DIG_IO_ENTRY(spics,       GPIOA, GPIO4,  PinMode::OUTPUT)   \
    DIG_IO_ENTRY(led_alive,     GPIOB, GPIO7,  PinMode::OUTPUT)   \
    DIG_IO_ENTRY(statec_out,  GPIOB, GPIO4,  PinMode::OUTPUT)   \
    DIG_IO_ENTRY(red_out,     GPIOB, GPIO2,  PinMode::OUTPUT)   \
    DIG_IO_ENTRY(green_out,   GPIOB, GPIO10, PinMode::OUTPUT)   \
    DIG_IO_ENTRY(blue_out,    GPIOB, GPIO11, PinMode::OUTPUT)   \
    DIG_IO_ENTRY(contact_out, GPIOA, GPIO1,  PinMode::OUTPUT)   \
    DIG_IO_ENTRY(trigger_wakeup,  GPIOB, GPIO0,  PinMode::OUTPUT)   \
    DIG_IO_ENTRY(keep_power_on,   GPIOB, GPIO1,  PinMode::OUTPUT)   \

#endif // PinMode_PRJ_H_INCLUDED
