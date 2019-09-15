#include "lists.h"
/**
 * print_dlistint - prints data from a list.
 *
 * @h: pointer of node.
 *
 * Return: number of nodes in the structure.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count;

	count = 0;
	tmp = h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
