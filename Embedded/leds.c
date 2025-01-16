#include "reg51.h"

sbit LED = 0x01;

void delay(void);

void main(void)
{
    while(1)
    {
        LED = 1;
        delay();
        LED = 0;
        delay();
    }
}

void delay(void)
{
    unsigned char i, k;
    for(i = 0; i < 70; i++)
        for(k = 0; k < 255; k++);
}
