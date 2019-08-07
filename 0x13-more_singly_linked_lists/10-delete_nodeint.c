#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of linked list.
 *
 * @head: the pointer to the pointer of a linked list.
 *
 * @index: the index to remove the node from the linked list.
 *
 * Return: returns the data before being deleted.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *new;
	unsigned int a;

	temp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		new = temp->next;
		free(temp);
		*head = new;
		return (1);
	}

	a = 0;
	while (a < index - 1)
	{
		if (temp->next == NULL)
		{
			return (-1);
		}
		temp = temp->next;
		a++;
	}
	new = temp->next;
	temp->next = new->next;
	free(new);
	return (1);
}
