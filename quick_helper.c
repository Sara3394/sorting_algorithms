#include "sort.h"

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
