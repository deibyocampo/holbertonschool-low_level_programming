#include "holberton.h"
/**
 * _strlen - count every memory space in the arrray.
 *
 * @s: variable where it has the string of characters.
 *
 * Return: prints on screen the length of the variable.
 */
int _strlen(char *s)
{
	int len;
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
