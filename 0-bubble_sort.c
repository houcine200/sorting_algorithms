#include "sort.h"

/**
 * swap - Swaps two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */

void swap(int *a, int *b)
{
	size_t temp;

	temp = *a;
	*a = *b;
	*b = temp;

}

/**
 * bubble_sort - Sorts an array of integers
 * in ascending order using Bubble Sort
 * @array: Pointer to the array to be sorted
 * @size: The number of elements in the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 2 || !array)
		return;

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
