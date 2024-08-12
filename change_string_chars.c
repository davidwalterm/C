#include <stdio.h>

int main(){
    char greetings[] = "Hello World!";

    greetings[0] = 'J';

    printf("%s", greetings);

    getch();

    return 0;
}