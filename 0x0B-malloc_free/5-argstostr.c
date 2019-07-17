#include <stdlib.h>

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
	int a, v, x = 0, ls;

	for (a = 0; a < ac; a++)
	{
		for (v = 0; av[a][v]; v++)
		{
			x++;
		}
		x++;
	}
	strn = malloc((x + 1) * (sizeof(char)));
	ls = 0;
	for (a = 0; a < ac; a++)
	{
		for (v = 0; av[a][v]; v++)
		{
			strn[ls] = av[a][v];
			ls++;
		}
		if (av[a][v] == '\0')
		{
			strn[ls] = '\n';
			ls++;
		}
	}
	strn[ls + 1] = '\0';
	return (strn);
}
