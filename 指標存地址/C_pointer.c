#include <stdio.h>
#include <stdlib.h>

int main() 
{
    printf("=== 原本的版本 ===\n");
    {
        int *A = (int*)malloc(sizeof(int));
        int *B = A; // B 複製 A 的地址
        int *C = (int*)malloc(sizeof(int));

        *A = 123;
        *C = 456;

        printf("A is %d, address is %p\n", *A, A); // 123
        printf("B is %d, address is %p\n", *B, B); // 123
        printf("C is %d, address is %p\n", *C, C); // 456

        A = C; // 改變 A 的地址

        printf("A is %d, address is %p\n", *A, A); // 456
        printf("B is %d, address is %p\n", *B, B); // 123 (B 沒變)
        
        free(B); // 原本 A 的記憶體
        free(A); // C 的記憶體
    }

    printf("\n=== 指標的指標版本 ===\n");
    {
        int *A = (int*)malloc(sizeof(int));
        int **B = &A; // B 指向 A 的變數位置
        int *C = (int*)malloc(sizeof(int));

        *A = 123;
        *C = 456;

        printf("B is %d\n", **B); // 123

        A = C; // 改變 A 的地址

        printf("A is %d\n", *A);   // 456
        printf("B is %d\n", **B);  // 456 (B 跟著變)
        
        free(*B); // 釋放 C 的記憶體
    }

    return 0;
}

/*
=== 原本的版本 ===
A is 123, address is 0000000000711420
B is 123, address is 0000000000711420
C is 456, address is 0000000000711440
A is 456, address is 0000000000711440
B is 123, address is 0000000000711420

=== 指標的指標版本 ===
B is 123
A is 456
B is 456
*/

