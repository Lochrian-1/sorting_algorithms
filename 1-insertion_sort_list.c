#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: list to be sorted
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *nxt_node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	nxt_node = (*list)->next;

	while (nxt_node != NULL)
	{
		while (nxt_node->prev != NULL && nxt_node->n < nxt_node->prev->n)
		{
			nxt_node->prev->next = nxt_node->next;

			if (nxt_node->next != NULL)
				nxt_node->next->prev = nxt_node->prev;

			nxt_node->next = nxt_node->prev;
			nxt_node->prev = nxt_node->prev->prev;
			nxt_node->next->prev = nxt_node;

			if (nxt_node->prev == NULL)
				*list = nxt_node;
			else
				nxt_node->prev->next = nxt_node;

			print_list(*list);
		}
		nxt_node = nxt_node->next;
	}
}
