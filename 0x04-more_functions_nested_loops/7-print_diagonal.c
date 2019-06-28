#include "holberton.h"
/**
 * print_diagonal - print a space when the condition is met.
 *
 * @n: the character to print.
 *
 * Return: print the space. 
 */
void print_diagonal(int n)
{
int m, p;
if (n >= 0)
{
for (m = 0; m < n; m++) 
{
for (p = 0; p < m; p++)
{
_putchar(' ');
} 
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
}
