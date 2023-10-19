#include "sort.h"

void swap(int *a, int *b)
{
	size_t temp;

	temp = *a;
	*a = *b;
	*b = temp;

}

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size; i++)
	{

		min = i;

		for (j = i + 1; j < size; j++)
		{

			if (array[j] < array[min])
			{

				min = j;

			}
		}

		if (min != i)
			swap(&array[min], &array[i]);

		print_array(array, size);

	}
}
