#include "lists.h"
/**
 * *add_nodeint_end - adds a new node at the end of a list.
 *
 * @head: pointer to pointer that gets adress the node.
 *
 * Return: the list of node one after another.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *li;
	listint_t *ol;

	li = malloc(sizeof(listint_t));

	if (li == NULL)
		return (NULL);

	li->n = n;
	li->next = NULL;
	ol = *head;

	if (*head == NULL)
	{
		*head = li;
		return (li);
	}

	while(ol->next != NULL)
		ol = ol->next;
	ol->next = li;

	return (li);
}
