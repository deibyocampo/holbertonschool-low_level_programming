#include "holberton.h"
/**
 * strLen - finds the length of a string.
 *
 * @z: pointer
 *
 * Return: length of a string
 */
int strLen(char *z)
{
	int ng;

	ng = 0;

	if (*z != '\0')
	{
		ng = 1 + strLen(z + 1);
		return (ng);
	}
	return (ng);
}
/**
 * string - compare a string and thus evaluate which
 * is the greater or lesser.
 *
 * @z: pointer.
 * @i: variable that compares.
 * @f: variable that compares.
 *
 * Return: if the length of the string is equal to another string returns 1
 * if it does not return 0.
 */
int string(char *z, int i, int f)
{
	if (i == f)
		return (1);
	if (z[i] != z[f])
		return (0);
	if (i < f + 1)
		return (string(z, i + 1, f - 1));
	return (1);
}
/**
 * is_palindrome - returns 1 if the character string
 * is a polindrome otherwise 0
 *
 * @s: pointer.
 *
 * Return: character is a polindrome 1 otherwise 0.
 */
int is_palindrome(char *s)
{
	int fn;
	int in;
	int dec;

	in = 0;
	fn = strLen(s) - 1;
	dec = string(s, in, fn);
	return (dec);
}
