#include "lists.h"
/**
 * listint_len - calculate the quantity of nodes
 *
 * @h: pointer that initialize in the head
 *
 * Return: the quantity of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
		h = h->next;

	return (a);
}
