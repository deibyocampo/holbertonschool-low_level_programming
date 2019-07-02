#include "holberton.h"
/**
 * puts_half - function to print half of the characters.
 *
 * @str: array containing characters.
 *
 * Return: the value of the array.
 */
void puts_half(char *str)
{
int a;
int b;
a = 0;
b = 0;
while (str[a] != '\0')
a++;
if (a % 2 == 0)
{
b = a / 2;
}
else
{
b = (a + 1) / 2;
}
while (b < a)
{
_putchar(str[b]);
b++;
}
_putchar('\n');
}
