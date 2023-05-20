#include "sort.h"

/**
 * insertion_sort_list - Insertion sort algorithm
 * @list: list of integers to sort
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *hold;
if (list == NULL || *list == NULL)
return;
current = (*list)->next;
while (current)
{
hold = current->next;
while (current->prev && current->n < current->prev->n)
{
current->prev->next = current->next;
if (current->next)
current->next->prev = current->prev;
current->next = current->prev;
current->prev = current->prev->prev;
current->next->prev = current;
if (current->prev == NULL)
*list = current;
else
current->prev->next = current;
print_list(*list);

}
current = hold;
}
}