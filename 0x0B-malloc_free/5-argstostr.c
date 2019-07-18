#include <stdlib.h>
#include "holberton.h"
/**
 * *argstostr - Funtion that return a pointer.
 *
 * @ac: The number of arguments.
 *
 * @av: The string of arguments.
 *
 * Return: ar.
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j = 0;
	int z;
	int k = 0;
	int tot;
	char *m;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (z = 0; av[i][z] != '\0'; z++)
		{
			j++;
		}
		j++;
	}
	tot = j + 1;
	m = malloc(sizeof(char) * (tot));
	if (m == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			m[k] = av[i][j];
			k++;
		}
		m[k] = '\n';
		k++;
	}
	m[k] = '\0';
	return (m);
}
