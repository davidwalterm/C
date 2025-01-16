#include "reg51.h"

void main(void)
{
    unsigned char X;
    P0 = 0xFF;          //P0 as input port
    P1 = 0x00;          //P1 as output port
    while(1)
    {
        X = P0;
        P1 = X;
    }
}