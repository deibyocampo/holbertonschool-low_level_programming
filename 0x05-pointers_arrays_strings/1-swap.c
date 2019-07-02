#include "holberton.h"
/**
 * swap_int - exchanges the values within the character.
 *
 * @a: has the value of a character.
 *
 * @b: has the value of a character.
 *
 * Return: returns the value of the exchanged characters.
 */
void swap_int(int *a, int *b)
{
int t = *a;
*a = *b;
*b = t;
}
