#include "lists.h"
/**
 * free_listint2 - free the memory of node in the list.
 *
 * @head: pointer to pointer.
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *li;
	listint_t *ol;

	if (head != NULL)
	{
		li = *head;

		while (li != NULL)
		{
			ol = li->next;
			free(li);
			li = ol;
		}
		*head = NULL;
	}
}
