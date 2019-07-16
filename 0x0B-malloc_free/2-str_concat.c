#include "holberton.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two string.
 *
 * @s1: string 1.
 *
 * @s2: string 2.
 *
 * Return: two string in one.
 */
char *str_concat(char *s1, char *s2)
{
	int a;
	int b;
	int c;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	c = a + b + 1;

	s3 = malloc(sizeof(char) * c);

	if (s3 == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		s3[a] = s1[a];

	for (b = 0; s2[b] != '\0'; b++)
		s3[a + b] = s2[b];

	s3[a + b] = '\0';

	return (s3);
}
