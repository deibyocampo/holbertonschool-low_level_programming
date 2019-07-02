#include "holberton.h"
/**
 * rev_string - function printing ascending and descending character string.
 *
 * @s: variable that you use as a pointer to assign a value.
 *
 * Return: ascending and descending character string.
 */
void rev_string(char *s)
{
int f;
int g;
char h;
f = 0;
g = 0;
h = 0;
while (s[f] != '\0')
f++;
f -= 1;
g = 0;
while (g <= f)
{
h = s[g];
s[g] = s[f];
s[f] = h;
f--;
g++;
}
}
