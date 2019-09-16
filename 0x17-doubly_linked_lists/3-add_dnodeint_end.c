#include "lists.h"
/**
 * *add_dnodeint_end - add a new node at the end of the list
 *
 * @head: double pointer of the list
 * @n: date of the list that goes on the list
 *
 * Return: the address of the new elements or null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *tmp;

	tmp = *head;

	node = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;

	if (tmp == NULL)
	{
		*head = node;
		node->prev = NULL;
		node->next = tmp;
		return (node);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = node;
	node->prev = tmp;
	node->next = NULL;

	return (node);
}
