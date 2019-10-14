#include <stdio.h>
/**
 * main - print fibonacci
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned long a, b, c;
	int d;

	a = 1;
	b = 2;
	d = 1;

	printf("%lu, ", a);
	while (d < 50)
	{
		printf("%lu", b);
		if (d == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
			c = a + b;
			a = b;
			b = c;
		}
		d++;
	}
	return (0);
}
