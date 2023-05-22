#include "sort.h"

/**
 * shell_sort - implements shell sort algorithm
 * @array: array of integers
 * @size: size of the array
 *
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t interval = 1, i, j;
	int tmp;

	if (array == NULL || size < 2)
		return;

	while (interval < size / 3)
		interval = interval * 3 + 1;

	while (interval > 0)
	{
		for (i = interval; i < size; i++)
		{
			tmp = array[i];
			for (j = i; j >= interval && array[j - interval] > tmp; j -= interval)
				array[j] = array[j - interval];
			array[j] = tmp;
		}
		print_array(array, size);
		interval /= 3;
	}
}
