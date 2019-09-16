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
	unsigned int add = 0;

	if (h == NULL)
		return (NULL);

	node = (dlistint_t *) malloc(sizeof(dlistint_t));

	node->n = n;
	tmp = *h;

	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (node);
	}

	while (tmp != NULL && add < idx)
	{
		tmp = tmp->next;
		add++;
	}

	if (idx != add)
		return (NULL);

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
