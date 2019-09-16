#include "holberton.h"
/**
 * _strspn - alculates the length (in bytes).
 *
 * @s: pointer.
 * @accept: pointers.
 *
 * Return: the number of bytes in the initial.
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
		}
		if (accept[b] == '\0')
			break;
	}
	return (c);
}
