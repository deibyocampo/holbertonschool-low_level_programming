#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: numbers in decimal.
 * @index: is the index.
 *
 * Return: the value of the bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitt = 1;

	if (index > (sizeof(n) * 8))
		return (-1);

	bitt = bitt << index;

	if (n & bitt)
		return (1);
	else
		return (0);
}
