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
	unsigned int *m;

	if (nmemb == 0)
		return (NULL);

	m = malloc(sizeof(int) * nmemb);

	if (m == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		m[i] = nmemb;

	return (m);
}
