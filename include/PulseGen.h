#include "TinyTimber.h"
#include <avr/io.h>

typedef struct {
    Object super;
    int freq;
    int prevFreq;
    int PrintIndex;
    uint8_t Port;
}PulseGen;

void inc_freq(PulseGen *p, int arg);
void dec_freq(PulseGen *p, int arg);
void reset_freq(PulseGen *p);
int get_freq(PulseGen *p);
