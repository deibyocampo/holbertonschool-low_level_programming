#include "holberton.h"
/**
 * *_memset - function fills the first n bytes of the memory area.
 *
 * @s: pointer.
 * @b: constant byte.
 * @n: the size of the memory
 *
 * Return: a pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
