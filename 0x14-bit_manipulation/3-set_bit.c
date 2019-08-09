#include "holberton.h"
/**
 * set_bit - set the value of bit to one at a given index.
 * @n: input values.
 * @index: index.
 *
 * Return: 1 if successful or -1 if there is an error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int proct = 1;

	if (index > (sizeof(n) * 8))
		return (-1);

	proct = proct << index;

	*n = (*n | proct);
		return (1);
}
