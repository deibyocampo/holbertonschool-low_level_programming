#include "holberton.h"
/**
 * binary_to_uint - converter number bynary a decimal.
 *
 * @b: pointer to string.
 *
 * Return: the number decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int c = 0;
	int mult = 1;

	if (b == NULL)
		return (0);

	for (a = 0; b[a] != '\0'; a++)
		;
	for (a = a - 1; a >= 0; a--)
	{
		if (b[a] == '1')
		{
			c += mult;
		}

		mult = mult * 2;

		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	return (c);
}
