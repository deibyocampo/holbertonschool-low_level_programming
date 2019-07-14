#include "holberton.h"
/**
 * _abs - find the absolute value of an integer.
 *
 * @r: the caracter to print.
 *
 * Return: returns the absolute value of an integer regardless
 * of whether it is positive or negative.
 */
int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else
	{
		return (-r);
	}
}
