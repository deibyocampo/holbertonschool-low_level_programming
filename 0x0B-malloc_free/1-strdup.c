#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - function returns a pointer to a new string which
 * is a duplicate of the string s.
 *
 * @str: pointer
 *
 * Return: pointer a duplicate string
 */
char *_strdup(char *str)
{
	int i;
	int s;
	char *a;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	a = malloc((sizeof(char) * i) + 1);

	if (a == NULL)
		return (NULL);

	for (s = 0; s <= i; s++)
	{
		a[s] = str[s];
	}

	return (a);
}
