//C program to illustrate the dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //using malloc to allocate the int array of size 10
    int *ptr = (int*)malloc(sizeof(int) * 10);

    //allocating same array using calloc
    int *ptr2 = (int*)calloc(10, sizeof(int));

    printf("malloc Array Size: %d\n", 10);
    printf("calloc Array Size: %d\n", 10);

    //reallocating the size of the first array
    ptr = realloc(ptr, sizeof(int)*5);
    printf("malloc Array Size after using realloc: %d", 5);

    //freeing all memory
    free(ptr);

    return 0;
}