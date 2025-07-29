#include <stdio.h>

int main() 
{
    int arr[3];
    int *ptr = arr;

    printf("arr address is %p\n", arr); // print : arr address is 000000000061FE0C
    printf("ptr address is %p\n", ptr); // print : ptr address is 000000000061FE0C
    return 0;
}