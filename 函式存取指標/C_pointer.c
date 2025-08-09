#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int main() 
{
    int *A = (int*)malloc(sizeof(int));
    int *B = A;
    int *C = (int*)malloc(sizeof(int));

    *A = 123;
    *C = 456;
    printf("B is %d\n", *B); // printf : B is 123

    A = C;

    printf("A is %d\n", *A); // printf : A is 456
    printf("B is %d\n", *B); // printf : B is 123
    return 0;
}