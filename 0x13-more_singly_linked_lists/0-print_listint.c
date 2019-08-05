#include "lists.h"
/**
 * print_listint - print to node and the quantity of nodes in the list
 *
 * @h: pointer the node that inicialized int the head
 *
 * Return: the node and quantity the nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t a;

	while(h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return(a);
}
