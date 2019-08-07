#include "lists.h"
/**
 * *reverse_listint - reverses a linked list.
 *
 * @head: pointer to pointer.
 *
 * Return: pointer to the first node reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *new = NULL;


	while (*head)
	{
		new = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = new;
	}

	*head = temp;

	return (*head);
}
