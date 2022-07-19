#include "sort.h"

/**
 * shell_sort - sort array using shell sort algorithm
 * @array: array to be sorted
 * @size: size of array
 * Return: nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t i;
	int j, temp, inv;

	for (inv = size / 2; inv > 0; inv /= 2)
	{
		print_array(array, size);
		for (i = inv; i < size; i++)
		{
			temp = array[i];
			for (j = i; j >= inv && array[j - inv] > temp; j -= inv)
				array[j] = array[j - inv];
			array[j] = temp;
		}
	}
}
