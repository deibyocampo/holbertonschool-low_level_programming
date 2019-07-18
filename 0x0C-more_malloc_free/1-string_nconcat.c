#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings.
 *
 * @s1: pointer of first string.
 *
 * @s2: pointer of second string.
 *
 * @n: size of integer.
 *
 * Return: concatenates string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x;
	unsigned int y;
	unsigned int total;
	char *conc;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;

	for (y = 0; s2[y] != '\0'; y++)
		;

	if (n > y)
		n = y;

	total = x + n + 1;

	conc = malloc(sizeof(char) * total);

	if (conc == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		conc[x] = s1[x];

	for (y = 0; y < n; y++)
		conc[x + y] = s2[y];

	conc[x + y] = '\0';
	return (conc);
}
