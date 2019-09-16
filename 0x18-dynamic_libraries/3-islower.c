#include "holberton.h"
/**
 * _islower - check the code if a character is of a lowercase type.
 *
 * @c: the character to print.
 *
 * Return: returns 1 if the character is lowercase and 0 if it is not.
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
