#include "holberton.h"
/**
 * _abs - find the absolute value of an integer.
 *
 * @n: the caracter to print.
 *
 * Return: returns the absolute value of an integer regardless
 * of whether it is positive or negative.
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
