#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - fress the double array grid from assignment 3.
 *
 * @grid: pointer and pointer.
 *
 * @height: integer.
 *
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
