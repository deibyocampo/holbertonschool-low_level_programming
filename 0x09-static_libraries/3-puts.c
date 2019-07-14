#include "holberton.h"
/**
 * _puts - Recived a string from str, uses _putchar.
 * to print every character on the screen. With a new line after.
 *
 * @s: The string that will be recived from.
 */
void _puts(char *s)
{
	int m;

	m = 0;

	while (s[m] != '\0')
	{
		_putchar(s[m]);
		m++;
	}
	_putchar('\n');
}
