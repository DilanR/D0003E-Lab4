#include "include/joystick.h"


void buttonInit(void){                                                                        
        EIMSK |= (1<<PCIE1) | (1<<PCIE0); //Enable external interrupts for pins [15:8]   
        PCMSK1 |= (1<<PCINT15) | (1<<PCINT14) | (1<<PCINT12); //Enable interrupt on pin 15.
        PCMSK0 |= (1<<PCINT3) | (1<<PCINT2); //Enable interrupt on pin 15.
        PORTB |= (1<<PINB7) | (1<<PINB6) | (1<<PINB4);
        PORTE |= (1<<PINE3) | (1<<PINE2);
}

void buttonLR(ButtonHandler *this, int arg) {
    //Context switch
}

void buttonUDP(ButtonHandler *this, int arg) {
    //call PulseGen methods
}
