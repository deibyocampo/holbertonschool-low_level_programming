#include <stdio.h>
/**
 * main - print fibonacci
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned long a, b, c;
	unsigned long d;

	a = 1;
	b = 2;
	d = 0;

	while (b < 4000000)
	{
		if (b % 2 == 0)
		{
			d += b;
		}
		c = a + b;
		a = b;
		b = c;
	}
	printf("%lu\n", d);
	return (0);
}
