#include "sort.h"


void swapper(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int lomuto_partition(int *array, int low, int high, size_t size)
{
    int pivot = array[high];
    int i = low - 1;
    int j;

    for (j = low; j <= high - 1; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            if (i != j)
            {
                swap(&array[i], &array[j]);
                print_array(array, size);
            }
        }
    }

    if (array[i + 1] != array[high])
    {
        swap(&array[i + 1], &array[high]);
        print_array(array, size);
    }

    return (i + 1);
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
