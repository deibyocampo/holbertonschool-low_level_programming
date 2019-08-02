#include "lists.h"
/**
 * free_list - free node the linked
 *
 * @head: pointer to list
 *
 */
void free_list(list_t *head)
{
	list_t *p;
	list_t *tmp;

	p = head;

	tmp = p->next;
	free(p);
	p = tmp;
}

