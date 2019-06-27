#include "holberton.h"
/**
 * print_most_numbers - print the numbers from 0 to 9.
 *
 * Return: sequence of numbers from 0 to 9.
 */
void print_most_numbers(void)
{
int a;
a = 0;
while (a < 10)
{
if (a != 2 && a != 4)
{
_putchar(a + '0');
}
a++;
}
_putchar('\n');
}
