#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list.
 *
 * @head: start of linked list.
 * @str: string that will be added.
 *
 * Return: count, number of nodes.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *ptr;
	int a;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	node->next = NULL;

	ptr = *head;

	for (a = 0; str[a] != '\0'; a++)
		;

	node->len = a;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = node;

	return (node);
}
