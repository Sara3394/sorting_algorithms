#include "sort.h"
/**
 * quicksort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @low: lowest index of the partition to be sorted
 * @high: highest index of the partition to be sorted
 * @size: size of the array
 * Return: void
 */
void quicksort(int *array, int low, int high, size_t size)
{
int pivot;
if (low < high)
{
pivot = partition(array, low, high, size);
quicksort(array, low, pivot - 1, size);
quicksort(array, pivot + 1, high, size);
}
}
/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
quicksort(array, 0, size - 1, size);
}


/**
 * partition - partition the array using Lomuto scheme
 * @array: array to be sorted
 * @low: starting index
 * @high: ending index
 * @size: size of the array
 * Return: index of the pivot element
 */
int partition(int *array, int low, int high, size_t size)
{
int pivot = array[high];
int i = low;
int j;

for (j = low; j <= high; j++)
{
if (array[j] <= pivot)
{
if (i != j)
{
swap(&array[i], &array[j]);
print_array(array, size);
}
i++;
}
}
if (i != high)
{
swap(&array[i + 1], &array[high]);
print_array(array, size);
}
return (i);
}
/**
 * swap - swap two elements
 * @a: first element
 * @b: second element
 */
void swap(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
