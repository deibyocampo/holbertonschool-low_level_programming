#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of
 * integers in ascending order
 * @list: doubly pointer in the list
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *p;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	p = (*list)->next;

	while (p != NULL)
	{
		while (p->prev && p->n < p->prev->n)
		{
			p->prev->next = p->next;
			if (p->next)
				p->next->prev = p->prev;
			p->next = p->prev;
			p->prev = p->prev->prev;
			p->next->prev = p;
			if (p->prev == NULL)
				*list = p;
			else
				p->prev->next = p;
			print_list(*list);
		}
		p = p->next;
	}
}
