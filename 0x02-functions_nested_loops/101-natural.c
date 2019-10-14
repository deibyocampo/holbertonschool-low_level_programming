#include <stdio.h>
/**
 * main - prints sum of multiples of 3 or 5 below 1024
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	int add = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			add += i;
		}
		i++;
	}
	printf("%d", add);
	putchar('\n');
	return (0);
}
