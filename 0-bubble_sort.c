#include "sort.h"

/**
 * bubble_sort - Bubble sort algorithm
 * @array: array of integers to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int switched;
if (array == NULL || size < 2)
return;
for (i = 0; i < size; i++)
{
switched = 0;
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
switched = 1;
array[j] = array[j] + array[j + 1];
array[j + 1] = array[j] - array[j + 1];
array[j] = array[j] - array[j + 1];
print_array(array, size);
}
}
if (switched == 0)
break;
}
}
