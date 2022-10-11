#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using
 * the Bubble sort algorithm
 * @array: array of integers
 * @size: size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int temp = 0;
	int next = 0;

	if (array == NULL)
		return;

	while (next >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (array[i + 1] < array[i])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				next++;
				print_array(array, size);
			}
			i++;
		}
		if (next == 0)
		{
			next = -1;
		}
		else
		{
			next = 0;
		}
	}
}
