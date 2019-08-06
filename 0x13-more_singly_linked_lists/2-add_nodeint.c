#include "lists.h"
/**
 * *add_nodeint - adds a new node at the beginning of a list
 *
 * @head: pointer of pointer that gets adress of node
 * @n: data the node
 *
 * Return: the node of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *li;

	int a;

	li = malloc(sizeof(listint_t));

	if (li == NULL)
		return (NULL);

	a = n;
	li->n = a;
	li->next = (*head);
	(*head) = li;

	return (li);
}
