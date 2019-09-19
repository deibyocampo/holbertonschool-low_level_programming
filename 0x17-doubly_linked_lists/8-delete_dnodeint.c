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
	unsigned int count = 0, idx_count;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	if (index >= count)
		return (-1);
	if (index == 0 && count == 1)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	if (index == 0 && count > 1)
	{
		*head = tmp->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	for (idx_count = 0; idx_count < index; idx_count++)
		tmp = tmp->next;
	if (tmp->next == NULL)
	{
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}
	else if (tmp->prev && tmp->next)
	{
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
		free(tmp);
		return (1);
	}
	return (-1);
}
