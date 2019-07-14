#include "holberton.h"
/**
 * *_strcat - function to print a string of characters.
 *
 * @dest: variable where the character string is stored.
 *
 * @src: variable leading the way.
 *
 * Return: character string.
 */
char *_strcat(char *dest, char *src)
{
	int agg;
	int comp;

	agg = 0;
	comp = 0;

	while (dest[agg] != '\0')
		agg++;
	while (src[comp] != '\0')
	{
		dest[agg + comp] = src[comp];
		comp++;
	}
	return (dest);
}
