#include "holberton.h"
/**
 * _puts - Recived a string from str, uses _putchar.
 * to print every character on the screen. With a new line after.
 *
 * @str: The string that will be recived from.
 */
void _puts(char *str)
{
int m;
m = 0;
while (str[m] != '\0')
{
_putchar(str[m]);
m++;
}
_putchar('\n');
}
