//C program to illustrate Pointers
#include <stdio.h>

//Driver program
int main()
{
    int var=10;

    //declare pointer variable
    int * ptr;

    //note the data type of integer and pointer must be the same
    ptr = &var;

    //assign the address of a variable to a pointer
    printf("Value at pointer ptr is address = %p\n", ptr);
    printf("Value of variable var = %d\n", var);
    printf("Value at address of *ptr = %d\n", *ptr);

    return 0;
}

