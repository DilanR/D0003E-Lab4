#include <avr/io.h>
#include "PulseGen.h"
#include "TinyTimber.h"

typedef struct {
    Object super;
    PulseGen *p1;
    PulseGen *p2;
    int currentP;
}GUI;

#define INITGUI(p1, p2) {initObject(), p1, p2}

void switchState();
int getState(GUI *this);
void printFreq(GUI *this, int arg);
