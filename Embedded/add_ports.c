#include "reg51.h"

void main()
{
    unsigned char a, b, c;
    P1 = 0xFF;      //make port 1 as input port
    P2 = 0xFF;      //make port 2 as input port
    a = P1;
    b = P2;
    c = a + b;
    P3 = c;
    printf("%c", P3);
}