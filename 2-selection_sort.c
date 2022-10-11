#include "sort.h"

/**
 * selection_sort - sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: array to be sorted
 * @size: size of array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t lower, i, j;
	int temp = 0;

	for (i = 0; i < size - 1; i++)
	{
		lower = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[lower])
			{
				lower = j;
			}
		}
		if (lower != i)
		{
			temp = array[i];
			array[i] = array[lower];
			array[lower] = temp;
			print_array(array, size);
		}
	}
}
