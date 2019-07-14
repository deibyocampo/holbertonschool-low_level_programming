#include "holberton.h"
/**
 * *_strncpy - function to print a string of characters.
 *
 * @dest: variable where the character string is stored.
 *
 * @src: variable leading the way.
 *
 * @n: variable that obtains the limit of a string.
 * Return: character string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cpy;

	for (cpy = 0; src[cpy] != '\0' && cpy < n; cpy++)
		dest[cpy] = src[cpy];
	for (; cpy < n; cpy++)
		dest[cpy] = '\0';
	return (dest);
}
