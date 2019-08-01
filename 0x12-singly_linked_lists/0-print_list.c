#include "lists.h"
#include <stdio.h>
/**
 * print_list - ricevies to argument for print data.
 *
 * @h: pointer.
 *
 * Return: a number to nodes.
 */
size_t print_list(const list_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}

	return (a);
}
