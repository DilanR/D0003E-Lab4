#include "include/BitWriter.h"

void writeToPort(BitWriter *this, Time t) {
    *this->reg ^= (1<<this->PIN);
    AFTER(t, this, writeToPort, 0);
}
