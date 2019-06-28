#include "holberton.h"
/**
 * print_triangle - print triangle
 * @size: size of triangle
 * Description: prints a triangle to size n
 *
 * Return: 0 for success
 */
void print_triangle(int size)
{
int a;
int b;
int c;
if (size <= 0)
{
_putchar('\n');
}
else if (size >= 0)
{
for (a = 0; a < size; a++)
{
for (b = 1; b < (size - a); b++)
{
_putchar(' ');
}
for (c = b; c <= size; c++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
