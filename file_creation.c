#include <stdio.h>

int main(){
    FILE *fptr;

    //Create a file on your computer(filename.txt)
    fptr = fopen("filename.txt", "w");

    //Close the file
    fclose(fptr);

    getch();

    return 0;
}