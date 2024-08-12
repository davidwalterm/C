#include <stdio.h>

int main(){
    int myAge = 43; // Variable declaration
    int * ptr = &myAge; // Pointer declaration

    // Reference: Output the memory address of myAge with the pointer
    printf("%p\n", ptr);

    // Dereferance: Output the value of myAge with the pointer
    printf("%d\n", *ptr);

    getch();

    return 0;
}