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
	dlistint_t *tmp = head;
	int add = 0;

	while (tmp != NULL)
	{
		add += tmp->n;
		tmp = tmp->next;
	}

	return (add);
}
