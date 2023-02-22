#include "include/GUI.h"

void writeToLCD(GUI *this, int arg){
    printAt(this->p1->freq, this->p1->index);
    printAt(this->p2->freq, this->p2->index);
}

void switchState(GUI *this, int arg) {
    if (this->currentP == 1) {
        this->currentP = 2;
    }else {
        this->currentP = 1;
    }
    writeToLCD(this, 0);
}

