#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_calloc - allocates memory for an array.
 *
 * @nmemb: size in bytes.
 *
 * @size: size the pointer.
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		*((char *) m + i) = 0;

	return (m);
}
