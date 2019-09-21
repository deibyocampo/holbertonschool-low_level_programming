#include "lists.h"
/**
 * delete_dnodeint_at_index - delete the node at index
 * of a dlistin_t linked list.
 *
 * @head: double pointer to list.
 * @index: index the node that delete.
 * Return: 1 if it success or -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	dlistint_t *node;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);
	tmp = *head;
	if (tmp->next == NULL && tmp->prev == NULL && index == 0)
	{
		*head = NULL;
		free(tmp);
		return (1);
	}
	if (index == 0)
	{
		node = tmp->next;
		node->prev = NULL;
		(*head) = node;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}
	node = tmp->next;
	tmp->next = node->next;
	if (tmp->next != NULL)
		(tmp->next)->prev = tmp;
	free(node);
	return (1);
}
