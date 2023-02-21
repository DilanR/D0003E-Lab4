#include "TinyTimber.h"
#include "gui.h"
#include <avr/io.h>

//TODO Change to correct pin
#define UP PINB7
#define DOWN PINB7
#define RIGHT PINB7
#define LEFT PINB7
#define CENTER PINB7

typedef struct {
    Object super;
    GUI *gui; //TODO gui
}ButtonHandler;

void buttonInit(void);
void buttonLR(ButtonHandler *this, int arg); //argument to switch gui
void buttonUDC(ButtonHandler *this, int arg);
