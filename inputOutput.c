//C program to illustrate the basic input and output using
//printf() and scanf()
#include <stdio.h>

int main(){
    int roll_num = 0;
    char name[50];

    //taking input using scanf
    printf("\nEnter Roll No.: ");
    scanf("%d", &roll_num);
    printf("\nEnter Name: ");
    scanf("%s", name);

    //printing output using printf
    printf("Name is %s and Roll Number is %d", name, roll_num);

    return 0;
}