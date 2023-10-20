#include "sort.h"
void swapp(int *a, int *b)
{
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
    
}


void selection_sort(int *array, size_t size)
{
    size_t i, j, min;
    
    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min])
                min = j;
        }
            if (min != i)
            {
                swapp(&array[min], &array[i]);
                print_array(array, size);
            }
    }
    
}
