#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print the assigned numbers.
 *
 * @a: pointer.
 *
 * @n: the number of elements of the array to be printed.
 *
 * Return: values allocated.
 */
void print_array(int *a, int n)
{
int c;
c = 0;
while (c < n)
{
printf("%d", a[c]);
if (c < n - 1)
printf(", ");
c++;
}
printf("\n");
}
