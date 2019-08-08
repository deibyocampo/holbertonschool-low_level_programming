#include "holberton.h"
/**
 * print_binary - converter to numbers decimal a binary.
 *
 * @n: number in decimal
 *
 * we use recursion
 */
void print_binary(unsigned long int n)
{
	unsigned long int decimal;

	decimal = n & 1;

	n = n >> 1;

	if (n > 0)
		print_binary(n);

	_putchar(decimal + '0');
}
