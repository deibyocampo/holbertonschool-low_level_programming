#include "holberton.h"
/**
 * *_strncat - function to print a string of characters.
 *
 * @dest: variable where the character string is stored.
 *
 * @src: variable leading the way.
 *
 * @n: variable that obtains the limit of a string.
 * Return: character string.
 */
char *_strncat(char *dest, char *src, int n)
{
int agg;
int comp;
agg = 0;
comp = 0;
while (dest[agg] != '\0')
agg++;
while (comp < n && src[comp] != '\0')
{
dest[agg] = src[comp];
comp++;
agg++;
}
dest[agg] = '\0';
return (dest);
}
