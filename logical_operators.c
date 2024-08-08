#include <stdio.h>

int main(){
    int x = 5;
    int y = 3;

    //Return 1(true) because 5 is greater than 3 AND 5 is less then 10
    printf("%d", x > 3 && x < 10);
    getch();
    return 0;
}