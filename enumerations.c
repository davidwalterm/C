//An example program to demonstrate working with enums in c
#include <stdio.h>

enum week { Mon, Tue, Wed, Thur, Fri, Sat, Sun };

int main(){
    enum week day;
    day = Wed;
    printf("Wednesday is day number %d ", day+1);
    
    return 0;
}