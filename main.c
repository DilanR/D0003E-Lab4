#include <avr/io.h>
#include "include/PulseGen.h"

static PulseGen PWM1 = INITPULSEGEN(0, 0, &PORTE, PINE4);
static PulseGen PWM2 = INITPULSEGEN(0, 3, &PORTE, PINE6);
int main(void) {
    //TODO init LCD, cpu, Button
}
