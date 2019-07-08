#include "holberton.h"
/**
 * *_strpbrk - ocates the first occurrence in the string s
 *
 * @s: pointer
 * @accept: pointer
 *
 * Return:  a pointer to the byte in s that matches one of the bytes in accept.
 */
char *_strpbrk(char *s, char *accept)
{
	int c;
	int d;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; accept[d] != '\0'; d++)
		{
			if (s[c] == accept[d])
				return (&s[c]);
		}
	}
	return (0);
}
