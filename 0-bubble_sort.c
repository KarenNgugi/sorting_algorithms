#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using
 * the bubble sort algorithm
 * @array: array to be sortd
 * @size: length of array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp, swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				print_array(array, size);
				swapped = 1;
			}
		}

		if (swapped == 0)
			break;
	}
}
