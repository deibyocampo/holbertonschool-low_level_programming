#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - given as a parameter on each element of an array.
 *
 * @array: pointer the vector.
 *
 * @size: the size of the array.
 *
 * @action: pointer.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array && action != NULL)
	{
		for (a = 0U; a < size; ++a)
			action(array[a]);
	}

}
