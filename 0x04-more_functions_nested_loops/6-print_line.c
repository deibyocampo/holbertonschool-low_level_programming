#include "holberton.h"
/**
 * print_line - print _ instead of numbers
 *
 * @n: variable that has the values to print _
 *
 * Return: returns the variables in _
 */
void print_line(int n)
{
int m;
if (n > 0)
{
for (m = 0; m < n; m++)
{
_putchar('_');
}
}
_putchar('\n');
}
