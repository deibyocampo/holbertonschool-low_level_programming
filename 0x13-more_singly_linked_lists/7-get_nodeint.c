#include "lists.h"
/**
 * *get_nodeint_at_index - returns a node from the list.
 *
 * @head: pointer pointing to a node in the list.
 * @index: count of node in the list.
 *
 * Return: the address of node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	a = 0;
	while (a < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		a++;
	}

	return (head);
}
