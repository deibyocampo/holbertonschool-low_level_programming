#include "lists.h"
/**
 * sum_listint - sum all numbers of node.
 *
 * @head: pointer to node in the list.
 *
 * Return: the sum the numbers.
 */
int sum_listint(listint_t *head)
{
	int a;

	if (head == NULL)
		return (0);

	a = 0;
	while (head != NULL)
	{
		a += head->n;
		head = head->next;
	}
	return (a);
}
