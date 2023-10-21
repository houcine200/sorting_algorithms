#include "sort.h"

void swaping(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *array, int low, int high, size_t size)
{
    int i = low, j, pivot = array[high];
    for (j = low; j < high; j++)
    {
        if (array[j] < pivot)
        {
            if (i != j)
            {
                swaping(&array[j], &array[i]);
                print_array(array, size);
            }
            i++;
        }
    }
    if (array[i] > pivot)
    {
    swaping(&array[i], &array[high]);
    print_array(array, size);
    }
    return i;
}

void quicksort_recursion(int *array, int low, int high, size_t size)
{
    if (low < high)
    {
        int piv_idx = partition(array, low, high, size);
        quicksort_recursion(array, low, piv_idx - 1, size);
        quicksort_recursion(array, piv_idx + 1, high, size);
    }
}
void quick_sort(int *array, size_t size) 
{
    if (size < 2 || !array)
        return;
    
    quicksort_recursion(array, 0, size -1, size);
    
}
