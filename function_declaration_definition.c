#include <stdio.h>

//Function declaration
void myFunction();

//The main method
int main(){
    myFunction(); //call the function
    getch();
    return 0;
}

//Function definition
void myFunction(){
    printf("I just got executed!");
}