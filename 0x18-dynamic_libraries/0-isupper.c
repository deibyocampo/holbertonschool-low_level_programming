#include "holberton.h"
/**
 * _isupper - function that compares if a character is uppercase or lowercase.
 *
 * @c: the character to print.
 *
 * Return: returns 1 if the character is lowercase and 0 if it is not.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
