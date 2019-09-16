#include "holberton.h"
/**
 * *_strchr - returns a pointer to the first occurrence of the character c
 * in the strings
 *
 * @s: pointer
 * @c: variable string.
 *
 * Return: print string.
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;
	if (*s == c)
	{
		return (s);
	}

	return ('\0');
}
