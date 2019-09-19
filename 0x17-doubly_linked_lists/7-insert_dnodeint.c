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
	size_t i;

	if (h == NULL)
		return (NULL);

	node = (dlistint_t *) malloc(sizeof(dlistint_t));

	tmp = *h;
	node->n = n;

	if (idx == 0)
	{
		node->next = *h;
		*h = node;
		return (*h);
	}

	for (i = 0; tmp != NULL; tmp = tmp->next, i++)
	{
		if (i == idx - 1)
		{
			node->next = tmp->next;
			tmp->next = node;
			return (node);
		}
	}

	return (node);
}
