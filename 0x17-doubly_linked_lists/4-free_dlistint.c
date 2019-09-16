#include "lists.h"
/**
 * free_dlistint - function that free list
 *
 * @head: pointer to the list
 * Return: free the node in the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;

	while (tmp != NULL)
	{
		head = head->next;
		free(head);
	}
}
