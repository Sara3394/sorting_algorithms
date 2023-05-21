#include "sort.h"

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
    int i = low - 1;
    int j;

    for (j = low; j <= high - 1; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            swap(&array[i], &array[j]);
            print_array(array, size);
        }
    }

    swap(&array[i + 1], &array[high]);
    print_array(array, size);

    return (i + 1);
}
