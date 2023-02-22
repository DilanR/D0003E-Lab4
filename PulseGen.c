#include "include/PulseGen.h"
#include "include/BitWriter.h"
#include "include/TinyTimber.h"

int get_freq(PulseGen *this, int arg) {
    return this->freq;
}

int get_index(PulseGen *this, int arg) {
    return this->index;
}

void inc_freq(PulseGen *p, int arg) {
    if (p->freq < 99) { 
        p->freq = p->freq + 1; 
    }else p->freq = 99;
}

void dec_freq(PulseGen *p, int arg) {
    if (p->freq > 0) { 
        p->freq = p->freq - 1; 
    }else p->freq = 0;
}

void reset_freq(PulseGen *p, int arg) {
    if (p->freq != 0) { 
        p->prevFreq = p->freq; 
        p->freq = 0;
    }else {
        p->freq = (p->prevFreq == NULL) ? 0 : p->prevFreq;
    }
}

void writePulse(PulseGen *this, int arg) {
    // READ BEFORE AFTER PRIMITIVS
    if (this->freq) {
       *(this->reg) ^= this->PIN;
       AFTER(MSEC(1000/this->freq), this, writePulse, 0);
    }

}

