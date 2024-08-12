#include <stdio.h>

int main(){
    // Create an interger variable that will store the number we get from the user
    int myNum;

    // Ask the user to type an input
    printf("Type a number and press enter: \n");

    // Get and save the number the user types
    scanf("%d", &myNum);

    // Print the number the user typed
    printf("Your number is: %d", myNum);

    getch();

    return 0;
}