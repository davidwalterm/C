#include <stdio.h>

//Create a structure called my structure
struct myStructure{
    int myNum;
    char myLetter;
};

int main(){
    //Create a structure variable of myStructure called structure 1
    struct myStructure s1;

    //Assign values to members of s1
    s1.myNum = 13;
    s1.myLetter = 'B';

    //Print values
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %d\n", s1.myLetter);

    getch();

    return 0;
}