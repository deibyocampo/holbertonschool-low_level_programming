#include "sort.h"
/**
 * selection_sort - sorts an array of integers
 * in ascending order
 * @array: array of integers
 * @size: size of array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, a, h, aux;

	for (i = 0; i < (size - 1); i++)
	{
		h = i;
		for (a = i + 1; a < size; a++)
			if (array[a] < array[h])
				h = a;
		if (h != i)
		{
			aux = array[i];
			array[i] = array[h];
			array[h] = aux;
			print_array(array, size);
		}
	}
}

