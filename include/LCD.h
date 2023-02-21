#include <avr/io.h>
#define MASK_0	0xF
#define MASK_1	0xF0
#define MASK_2	0xF00
#define MASK_3	0xF000

uint16_t scc[10];
void LCDInit(void);
void writeChar(char ch, int pos);
void PrintAt(long num, int pos);
