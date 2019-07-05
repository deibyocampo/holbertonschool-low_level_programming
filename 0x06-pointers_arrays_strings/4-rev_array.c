#include "holberton.h"
/**
 * reverse_array - print the numbers backwards.
 *
 * @a: pointer
 *
 * @n: integer
 *
 * Return: print numbers
 */
void reverse_array(int *a, int n)
{
int m;
int d;
for (d = 0; d < n / 2; d++)
{
m = a[d];
a[d] = a[n - d - 1];
a[n - d - 1] = m;
}
}
