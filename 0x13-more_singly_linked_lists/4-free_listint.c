#include "lists.h"
/**
 * free_listint - free node the linked
 *
 * @head: pointer to list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *li;

	while (head != NULL)
	{
		li = head->next;
		free(head);
		head = li;
	}
}
