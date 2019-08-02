#include "lists.h"

/**
 * list_len - print number of elements in a linked.
 *
 * @h: pointer to the list
 *
 * Return: elements of linked
 */
size_t list_len(const list_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
	{
		h = h->next;
	}
	return (a);
}
