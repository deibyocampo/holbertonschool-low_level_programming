#include "holberton.h"
/**
 i

 * *string_toupper - print in capitals.
 *
 * @s: pointers.
 *
 * Return: print character string
 */
char *string_toupper(char *s)
{
|	int n;

		for (n = 0; s[n] != 0; n++)
		{
		if (s[n] >= 'a' && s[n] <= 'z')
		{
			s[n] -= 32;
		}
		}
	return (s);
}
