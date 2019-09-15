#include "lists.h"
/**
 * dlistint_len - list of elements of a linked list
 *
 * @h: pointer of nodes
 *
 * Return: list number of items in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count;

	count = 0;
	tmp = h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}

	return (count);
}
