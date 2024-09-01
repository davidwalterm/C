#include <stdio.h>

int myFunction(int x){
    return 5 + x;
}

int main(){
    printf("Result is: %d", myFunction(3));
    getch();
    return 0;
}