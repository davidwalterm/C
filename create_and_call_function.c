#include <stdio.h>

//Create a function
void myFunction(){
    printf("I just got executed!");
}

int main(){
    myFunction();//call the function

    getch();
    return 0;
}