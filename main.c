#include <avr/io.h>
#include "include/TinyTimber.h"
#include "include/PulseGen.h"
#include "include/Joystick.h"
#include "include/LCD.h"
#include "include/GUI.h"

static PulseGen PWM1 = INITPULSEGEN(0, 0, &PORTE, PINE4);
static PulseGen PWM2 = INITPULSEGEN(0, 4, &PORTE, PINE6);
static GUI gui = INITGUI(&PWM1,&PWM2);
static ButtonHandler Bh = INITJOYSTICK(&gui);

void interrupts(void){

    ASYNC(&PWM1, writePulse, 0);
    ASYNC(&PWM2, writePulse, 0);
}

int main(void) {
    //TODO init LCD, cpu, Button

    LCDInit();
    buttonInit();
    INSTALL(&Bh, buttonUDC, IRQ_PCINT1);
    INSTALL(&Bh, buttonLR, IRQ_PCINT0);

    return TINYTIMBER(&Bh, interrupts, 0);

}
