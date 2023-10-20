#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers using
 * the Insertion sort algorithm
 * @list: Pointer to a pointer to the head of the list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *key, *prev;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr = (*list)->next;

	for (; curr; curr = curr->next)
	{
		key = curr;
		prev = curr->prev;

		while (prev && prev->n > curr->n)
		{
			prev->next = key->next;
			if (key->next != NULL)
				key->next->prev = prev;

			key->next = prev;
			key->prev = prev->prev;
			prev->prev = key;

			if (key->prev != NULL)
				key->prev->next = key;
			else
				*list = key;

			prev = key->prev;
			print_list(*list);
		}
	}
}
