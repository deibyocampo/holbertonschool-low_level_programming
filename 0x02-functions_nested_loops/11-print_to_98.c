#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print on the screen the numbers that we assign.
 * @n: variable.
 * Return: numbers of higher to lower.
 */
void print_to_98(int n)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
while (n > 98)
{
printf("%d, ", n);
n--;
}
if (n == 98)
{
printf("%d\n", n);
}
}
