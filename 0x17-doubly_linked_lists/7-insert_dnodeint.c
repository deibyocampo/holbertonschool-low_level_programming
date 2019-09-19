#include "lists.h"
/**
 * *insert_dnodeint_at_index - nserts a new node at a given position.
 *
 * @h: double pointer of the list
 * @idx: index of the list
 * @n: data for the node
 *
 * Return: the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *node;
	unsigned int counter = 0;

	if (h == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	tmp = *h;

	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (node);
	}

	while (tmp != NULL && counter < idx)
	{
		tmp = tmp->next;
		counter++;
	}

	if (tmp == NULL)
	{
		add_dnodeint_end(h, n);
		return (node);
	}

	node->next = tmp;
	node->prev = tmp->prev;
	tmp->prev->next = node;
	tmp->prev = node;

	return (node);
}
