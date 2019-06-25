#include "holberton.h"

/**
 * _isalpha - check the code in a character is alphabetic.
 *
 * @c: the character to print.
 *
 * Return: check if the character is upper case or is lowercase.
 */
int _isalpha(int c)
{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}
else
{
return (0);
}
}
