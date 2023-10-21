#include "sort.h"

/**
 * swaping - Swaps two integers in an array
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */
void swaping(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - Partitions an array using Lomuto partition scheme
 * @array: Array to be partitioned
 * @low: Starting index of the partition
 * @high: Ending index of the partition
 * @size: Size of the array
 * Return: Index of the pivot element after partition
 */
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
	return (i);
}

/**
 * quicksort_recursion - Recursive function to perform quick sort
 * @array: Array to be sorted
 * @low: Starting index of the partition
 * @high: Ending index of the partition
 * @size: Size of the array
 */
void quicksort_recursion(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int piv_idx = partition(array, low, high, size);

		quicksort_recursion(array, low, piv_idx - 1, size);
		quicksort_recursion(array, piv_idx + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers using Quick Sort algorithm
 * @array: Array to be sorted
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2 || !array)
		return;

	quicksort_recursion(array, 0, size - 1, size);

}
