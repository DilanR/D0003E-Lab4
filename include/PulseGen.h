#ifndef _PULSEGEN_
#define _PULSEGEN_
#include "TinyTimber.h"
#include <avr/io.h>


//https://www.tutorialspoint.com/cprogramming/c_typedef.htm
typedef struct {
    Object super;
    int freq;
    int prevFreq; //save state at reset
    int index; //where to write
    uint8_t PIN; //button pin
    uint8_t *reg; //corresponding register for button interupt
}PulseGen;

#define INITPULSEGEN(freq, index, reg, PIN) {initObject(), freq, index, reg, PIN}

void inc_freq(PulseGen *p, int arg);
void dec_freq(PulseGen *p, int arg);
int get_freq(PulseGen *this, int arg);
int get_index(PulseGen *this, int arg);
void reset_freq(PulseGen *p, int arg);
void writePulse(PulseGen *this, int arg);

#endif
