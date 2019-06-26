#include "holberton.h"
/**
 * jack_bauer - print every minute of the day until 23:59.
 *
 * Return: print the values ​​of each variable.
 */
void jack_bauer(void)
{
int ab;
int bc;
int cd;
int de;
for (ab = '0'; ab <= '2'; ab++)
{
for (bc = '0'; bc <= '9'; bc++)
{
for (cd = '0'; cd <= '5'; cd++)
{
for (de = '0'; de <= '9'; de++)
{
if (ab >= '2' && bc >= '4')
{
continue;
}
_putchar(ab);
_putchar(bc);
_putchar(':');
_putchar(cd);
_putchar(de);
_putchar('\n');
}
}
}
}
_putchar('\n');
}
