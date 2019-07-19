#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - array of integers.
 *
 * @min: size a bytes.
 *
 * @max: size a array in memory.
 *
 * Return: the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int n;
	int *cont;

	if (min > max)
		return (NULL);

	cont = malloc(sizeof(int) * (max - min + 1));

	if (cont == NULL)
		return (NULL);

	for (n = 0; min + n <= max; n++)
		cont[n] = min + n;

	return (cont);
}

