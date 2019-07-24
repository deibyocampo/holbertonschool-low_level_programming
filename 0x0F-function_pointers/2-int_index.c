#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - the number of elements in the array.
 *
 * @array: vector the interger.
 * @size: number of element in the array.
 * @cmp: pointer of the funtions.
 *
 * Return: index of the first element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
				return (a);
		}
	}

	return (-1);
}
