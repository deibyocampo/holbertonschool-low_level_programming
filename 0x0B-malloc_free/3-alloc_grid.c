#include "holberton.h"
#include <stdlib.h>
/**
 * **alloc_grid - pointer to a 2 dimensional array of integers.
 *
 * @width: width of array
 *
 * @height: height of array
 *
 * Return: Each element of the grid should be initialized to 0.
 */
int **alloc_grid(int width, int height)
{
	int a;
	int b;
	int **p;

	if (width < 1 || height < 1)
	{
		return ('\0');
	}

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		return (NULL);
	}

	for (b = 0; b < height; b++)
	{
		p[b] = malloc(sizeof(int) * width);

		if (p[b] == NULL)
		{
			for (a = 0; a < b; a++)
			{
				free(p[a]);
			}

			free(p);

			return (NULL);
		}

		for (a = 0; a < width; a++)
		{
			p[b][a] = 0;
		}

	}

	return (p);
}
