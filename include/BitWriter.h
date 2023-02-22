#include "TinyTimber.h"
#include <avr/io.h>

typedef struct{
    uint8_t PIN; //button pin
    uint8_t *reg; //corresponding register for button interupt
}BitWriter;

void writeToPort(BitWriter *this, Time t);
