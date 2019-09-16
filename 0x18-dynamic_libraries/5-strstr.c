#include "holberton.h"
/**
 * *_strstr - finds the first occurrence of the substring.
 *
 * @haystack: pointers.
 * @needle: pointer.
 *
 * Return: a pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int d;
	int e;

	if (needle == 0)
		return (haystack);

	for (d = 0; haystack[d] != '\0'; d++)
	{
		for (e = 0; needle[e] != '\0'; e++)
		{
			if (haystack[d + e] != needle[e])
				break;
		}
		if (needle[e] == '\0')
			return (haystack + d);
	}
	return (0);
}
