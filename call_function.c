#include <stdio.h>

// Create function
void myFunction(){
    printf("I just got executed!\n");
}

int main(){
    myFunction(); // call the function
    myFunction(); // call the function
    myFunction(); //call the function

    getch();

    return 0;
}