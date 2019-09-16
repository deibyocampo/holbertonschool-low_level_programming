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
	size_t a;

	tmp = *h;

	node = malloc(sizeof(dlistint_t));

	node->n = n;

	if (idx == 0)
	{
		node->next = *h;
		*h = node;
		return (*h);
	}

	for (a = 0; tmp != NULL; tmp = tmp->next, a++)
	{
		if (a == idx - 1)
		{
			node->next = tmp->next;
			tmp->next = node;
			return (node);
		}
	}

	return (NULL);
}
