#include "holberton.h"
/**
 * print_rev - prints a string of characters.
 *
 * @s: variable that has a character string.
 *
 * Return: prints a string of characters backwards.
 */
void print_rev(char *s)
{
int n;
n = 0;
while (s[n] != '\0')
n++;
n -= 1;
while (n >= 0)
{
_putchar(s[n]);
n--;
}
_putchar('\n');
}
