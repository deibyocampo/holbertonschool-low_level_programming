#include "holberton.h"
/**
 * print_sign - verify if the variable is larger or smaller print it in + or.
 *
 * @n: the caracter to print.
 *
 * Return: will return 1 if the variable is greater than 0 will
 * return 0 if the variable equals 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
