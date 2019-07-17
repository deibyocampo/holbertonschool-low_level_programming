#include <stdlib.h>
#include "holberton.h"
/**
 * *argstostr - concatenates all arguments in the program.
 *
 * @ac: concantenates all arguments in the program.
 *
 * @av: a double pointer.
 *
 * Return: concatenates string followed by a line break.
 */
char *argstostr(int ac, char **av)
{
	char *strn;
	int a, v, x, ls;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (x = 0; av[a][x] != '\0'; x++)
			ls++;
	}

	v = 0;
	strn = malloc(sizeof(char) * (ls + a));

	if (strn == NULL)
	{
		free(strn);
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (x = 0; av[a][x] != '\0'; x++)
		{
			strn[v] = av[a][x];
			v++;
		}
		strn[v] = '\n';
		v++;
	}
	return (strn);
}
