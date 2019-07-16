#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - create array of characters.
 *
 * @size: the size of memory to print.
 *
 * @c: the address of memory to print.
 *
 * Return: pointer.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int s;
	char *b;

	if (size == 0)
	{
		return ('\0');
	}

	b = malloc(size * sizeof(char));

	if (b == '\0')
		return ('\0');

	for (s = 0; s < size; s++)
	{
		b[s] = c;
	}
	return (b);
}
