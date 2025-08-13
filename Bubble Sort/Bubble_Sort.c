#include <stdio.h>
#include <stdlib.h>

#define swap(x, y) {int temp; temp = x; x = y; y = temp;}
void Bubble_sort(int *, int);
void show(int *, int );

int main(void) {
    int array[7] = {4,2,7,1,6,3,5};
    int size = sizeof(array) / sizeof(int);
    Bubble_sort(array, size);
    show(array, size);
    return 0;
}

void Bubble_sort(int *array, int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
           if(array[j] > array[j + 1])
           {
               swap(array[j], array[j + 1]);
           }
        }
    }
}

void show(int *array, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}