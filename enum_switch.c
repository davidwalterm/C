#include <stdio.h>

enum Level {
    LOW = 1,
    MEDIUM,
    HIGH
};

int main(){
    enum Level myVar = MEDIUM;

    switch(myVar) {
        case 1:
            printf("Low Level");
            break;
        case 2:
            printf("Medium Level");
            break;
        case 3:
            printf("High Level");
            break;
    }

    getch();

    return 0;
}