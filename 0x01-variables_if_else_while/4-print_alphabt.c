#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		if (s != 'e' && s != 'q')
		{
			putchar(s);
		}
	}
	putchar('\n');
	return (0);
}
