#include "sort.h"

/**
 * partition - Lomuto partition scheme
 * @array: array to be sorted
 * @size: size of array
 * @left: left
 * @right: right
 *
 * Return: index
 */

int partition(int *array, size_t size, int left, int right)
{
	int pivot = array[right];
	int i = left - 1;
	int j = 0;
	int temp = 0;

	for (j = left; j <= right - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
	temp = array[right];
	array[right] = array[i + 1];
	array[i + 1] = temp;

	return (i + 1);
}

/**
 * sort_array - sorts array
 * @array: array to be sorted
 * @size: size of array
 * @left: left
 * @right: right
 *
 * Return: void
 */

void sort_array(int *array, size_t size, int left, int right)
{
	int part;

	if (left < right)
	{
		part = partition(array, size, left, right);
		sort_array(array, size, left, part - 1);
		sort_array(array, size, part + 1, right);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array to be sorted
 * @size: size of array
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;

	sort_array(array, size, 0, size - 1);
}
