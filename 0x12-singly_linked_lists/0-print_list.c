#include "lists.h"

/**
 * print_list - ricevies to argument for print data.
 *
 * @h: pointer to the node.
 *
 * Return: a number to node.
 */
size_t print_list(const list_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
	{
		if (h->str == NULL)
			printf("[0] %p\n", h->str);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (a);
}
