#include "holberton.h"
/**
 * flip_bits - checks for the number of bits need to flip from n to m
 * @n: the number to compare with m
 * @m: the number to compare with n
 *
 * Return: return the number of bits counted from flipping bits of n and m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int proct = 1;
	unsigned long int temp = 0;


	temp = n ^ m;
	proct = 0;

	while (temp)
	{
		proct += temp & 1;
		temp >>= 1;
	}

	return (proct);
}
