#include <stdio.h>

int main() {
    FILE *fptr;

    //Open file in read mode
    fptr = fopen("filename.txt", "r");

    //Store the content of the file
    char myString[100];

    //Read the content and store it inside myString
    fgets(myString, 100, fptr);

    //Print the file content
    printf("%s", myString);

    //Close the file
    fclose(fptr);

    getch();

    return 0;
}