#include "holberton.h"
/**
 * pri_num - calculate if a number is prime.
 *
 * @a: variable
 *
 * @p: factors
 *
 * Return: prime number
 */
int pri_num(int a, int p)
{
	if (p == a)
		return (1);
	if (p > a || a % p == 0)
		return (0);
	p += 1;
	return (pri_num(a, p));
}
/**
 * is_prime_number -  the input integer is a prime number.
 *
 * @n: varable.
 *
 * Return: prime number is 1 or 0.
 */
int is_prime_number(int n)
{
	int p;

	p = 2;

	if (n <= 1 || n == 4)
		return (0);
	if (n == 2)
		return (1);
	if (pri_num(n, p))
	{
		return (1);
	}
	return (0);
}
