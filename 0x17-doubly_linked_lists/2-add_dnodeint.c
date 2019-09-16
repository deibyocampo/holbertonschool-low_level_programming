#include "lists.h"
/**
 * *add_dnodeint - add a new node to the top of the list
 *
 * @head: double pointer of node
 * @n: date within the node
 *
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (node == NULL)
		return(NULL);
	
	node->n = n;
	node->prev = NULL;
	node->next = *head;

	if (*head != NULL)
		(*head)->prev = node;

	*head = node;

	return (node);
}
