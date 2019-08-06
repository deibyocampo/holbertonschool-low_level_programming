#include "lists.h"
/**
 *
 *
 *
 *
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *li;
	int a;

	li = NULL;

	if ((*head) == NULL)
		return (0);

	if ((*head)->next != NULL)
		li = (*head)->next;

	a = (*head)->n;
	free(*head);
	(*head) = li;

	return (a);
}
