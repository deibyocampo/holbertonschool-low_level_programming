#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list, and returns
 * the head node’s data (n).
 *
 * @head: pointer to pointer of node the list.
 *
 * Return: the node data
 */
int pop_listint(listint_t **head)
{
	listint_t *li;
	int a;

	li = NULL;

	if ((*head) == NULL)
		return (0);

	if ((*head)->next != NULL)
		li = (*head)->next;

	a = (*head)->n;
	free(*head);
	(*head) = li;

	return (a);
}
