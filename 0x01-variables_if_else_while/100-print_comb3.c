#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int ab;
	int bc;

	for (ab = 48 ; ab <= 56 ; ab++)
	{
		for (bc = ab + 1 ; bc <= 57 ; bc++)
		{
			putchar(ab);
			putchar(bc);
			if (ab == 56 && bc == 57)
			{
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
