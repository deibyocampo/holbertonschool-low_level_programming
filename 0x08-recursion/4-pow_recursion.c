#include "holberton.h"
/**
 * _pow_recursion - raised to the power.
 *
 * @x: number.
 * @y:power.
 *
 * Return: power of an integer.
 */
int _pow_recursion(int x, int y)
{
	int r;

	r = 0;

	if (y == 0)
	{
		r = 1;
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	if (y > 0)
	{
		return (r / x * _pow_recursion(x, y + 1));
	}
	return (r);
}
