#include "holberton.h"
/**
 * *_strcpy - function to print a string of characters.
 *
 * @dest: variable where the character string is stored.
 *
 * @src: variable leading the way.
 *
 * Return: character string.
 */
char *_strcpy(char *dest, char *src)
{
int a;
int b;
a = 0;
b = 0;
if (src)
{
while (src[a] != '\0')
a++;
while (b <= a)
{
dest[b] = src[b];
b++;
}
}
return (dest);
}
