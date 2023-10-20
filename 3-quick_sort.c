#include "sort.h"


void swapper(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *array, int low, int high, size_t size) 
{
    int pivot = array[high]; /* Choose the last element as the pivot */
    int i = low - 1;

    for (int j = low; j < high; j++) 
    {
        if (array[j] < pivot) 
        {
            i++;
            swapper(&array[i], &array[j]);
        }
    }

    swapper(&array[i + 1], &array[high]);
    print_array(array, size);

    return i + 1;
}

void quicksort(int *array, int low, int high, size_t size) 
{
    if (low < high) 
    {
        int pi = partition(array, low, high, size);
        quicksort(array, low, pi - 1, size);
        quicksort(array, pi + 1, high, size);
    }
}

void quick_sort(int *array, size_t size) 
{
    if (array == NULL || size < 2) 
    {
        return;
    }

    quicksort(array, 0, size - 1, size);
}
