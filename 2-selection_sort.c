#include "sort.h"
/**
* selection_sort - sorts an array of integers in ascending order
*@array: array to be sorted
*@size: size of the array
*Return: void
*/

void selection_sort(int *array, size_t size)
{
size_t i, j, min_index, temp;
if (array == NULL || size < 2)
return;
for (i = 0; i < size - 1; i++)
{
min_index = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min_index])
min_index = j;
}
if (array[min_index] != array[i])
{
temp = array[i];
array[i] = array[min_index];
array[min_index] = temp;

print_array(array, size);
}
}
}
