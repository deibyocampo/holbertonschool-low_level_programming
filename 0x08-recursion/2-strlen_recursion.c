#include "holberton.h"
/**
 * _strlen_recursion - print length character
 *
 *@s: pointer.
 *
 * Return: lengt character.
 */
int _strlen_recursion(char *s)
{
	int cont;

	cont = 0;

	if (*s != '\0')
	{
		cont =  1 + _strlen_recursion(s + 1);
		return (cont);
	}
	return (cont);
}
