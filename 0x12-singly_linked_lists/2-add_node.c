#include "lists.h"
/**
 * add_node - new node at the beginning of a list.
 *
 * @head: pointer to pointer to node.
 * @str: string pointer to node.
 *
 * Return: the list node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int a;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (node);

	node->str = strdup(str);

	if (node->str == NULL)
	{
		free(node);
		return (node);
	}

	for (a = 0; str[a] != '\0'; a++)
		;

	node->len = a;
	node->next = *head;
	*head = node;

	return (*head);
}
