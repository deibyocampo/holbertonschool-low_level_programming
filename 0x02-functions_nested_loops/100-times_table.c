#include "stdio.h"
#include "holberton.h"
/**
 * print_times_table - prints the n times table
 * @n: times table starting with zero
 *
 */
void print_times_table(int n)
{
	int i, a, b;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (a = 0; a <= n; a++)
		{
			b = i * a;
			if (a == 0)
				_putchar(b % 10 + '0');
			else if (b <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(b % 10 + '0');
			}
			else if (b <= 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(b / 10 + '0');
				_putchar(b % 10 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(b / 100 + '0');
				_putchar(b / 10 % 10 + '0');
				_putchar(b % 10 + '0');
			}
		}
		printf("\n");
	}
}
