#include "holberton.h"
/**
 * print_square - print _ instead of numbers
 *
 * @size: variable that has the values to print #
 *
 * Return: returns the variables in #
 */
void print_square(int size)
{
int m, n;
if (size > 0)
{
for (m = 0; m < size; m++)
{
_putchar('#');
for (n = 1; n < size; n++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
