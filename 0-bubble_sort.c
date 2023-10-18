#include "sort.h"

void swap(int *a, int *b)
{
    size_t temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
    
}
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        { 
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
                print_array(array, size);
            }
        }
    }
}
