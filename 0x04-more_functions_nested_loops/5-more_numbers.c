#include "holberton.h"
/**
 * more_numbers - Function to print numbers from 1 to 14.
 *
 * Return: print numbers 10 times.
 */
void more_numbers(void)
{
int a, b;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 14; b++)
{
if (b > 9)
{
_putchar(48 + (b / 10));
}
_putchar(48 + (b % 10));
}
_putchar('\n');
}
}

