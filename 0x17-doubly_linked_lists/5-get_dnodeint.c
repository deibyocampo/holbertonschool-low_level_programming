#include "lists.h"
/**
 * *get_dnodeint_at_index - the nth node of a linked list
 *
 * @head: pointer to nodes
 * @index: is the index of the node
 *
 * Return: the nth node of a linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int add = 0;

	tmp = head;

	while (tmp != NULL)
	{
		if (add == index)
			return (tmp);

		tmp = tmp->next;
		add++;
	}
	return (tmp);
}
