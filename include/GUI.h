#ifndef _GUI_
#define _GUI_
#include <avr/io.h>
#include "PulseGen.h"
#include "TinyTimber.h"
#include "LCD.h"
#include "PulseGen.h"

typedef struct {
    Object super;
    PulseGen *p1;
    PulseGen *p2;
    int currentP;
}GUI;

#define INITGUI(p1, p2) {initObject(), p1, p2, 0}

void writeToLCD(GUI *this, int arg);
void switchState(GUI *this, int arg);

#endif
