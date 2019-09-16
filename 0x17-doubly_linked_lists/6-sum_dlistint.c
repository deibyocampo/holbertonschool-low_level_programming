#include "lists.h"
/**
 * sum_dlistint - sum of all the data of a list
 *
 * @head: pointer of the list that pointer to node
 *
 * Return: sum of all date
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	if (head != NULL)
		return (0);

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
