#include "holberton.h"
/**
 * puts2 - prints multiples of two.
 *
 * @str: character array.
 *
 * return: prints multiples of two.
 */
void puts2(char *str)
{
int n;
int m;
n = 0;
m = 0;
while (str[n] != '\0')
n++;
while (m < n)
{
_putchar(str[m]);
m += 2;
}
_putchar('\n');
}
