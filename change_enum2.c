#include <stdio.h>

enum Level {
    LOW = 5,
    MEDIUM,
    HIGH
};

int main() {
    enum Level myVar = MEDIUM;
    printf("%d", myVar);

    getch();

    return 0;
}