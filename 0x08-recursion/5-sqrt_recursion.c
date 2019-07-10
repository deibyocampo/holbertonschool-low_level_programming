#include "holberton.h"
/**
 * _sqrt_compute check square root 
 *
 * @m: number.
 *
 * @n: result
 *
 * Return: square root.
 */
int sqrt_compute(int m, int n)
{
	if (m * m == n)
	{
		return (m);
	}
	if (m * m > n)
	{
		return (-1);
	}
	return(sqrt_compute(m += 1, n));
}
/**
 * _sqrt_recursion - square root of a number.
 *
 * @n: number.
 *
 * Return: square root of a number.
 */
int _sqrt_recursion(int n)
{
	int m;
	int r;

	m = 1;
	r = 0;
	r = sqrt_compute(m, n);
	return(r);
}
