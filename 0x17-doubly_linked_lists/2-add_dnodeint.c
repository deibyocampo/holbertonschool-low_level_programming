#include "lists.h"
/**
 *
 *
 *
 *
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (node != NULL)
	{
		node->n = n;
		node->next = *head;
		*head = node;
	}

	return (*head);
}
