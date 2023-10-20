#include "sort.h"

/**
 * swapp - Swap two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 *
 * Description: This function swaps the values of two integers.
*/
void swapp(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}

/**
 * selection_sort - Sort an array of
 * integers using selection sort algorithm
 * @array: Pointer to the array to be sorted
 * @size: The number of elements in the array
 *
 * Description: This function sorts
 * an array of integers in ascending order
 * using the selection sort algorithm.
*/
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
