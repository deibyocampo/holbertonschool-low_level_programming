#include "sort.h"
/**
 * quick_sort - quick sort algorithm
 * @array: array to sort
 * @size: size of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	int high = size - 1;
	int low = 0;

	super_quick_sort(array, low, high, size);
}

/**
 * swap - swap the elements of the array
 * @a: first value that will be swapped
 * @b: second value that will be swapped
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * super_quick_sort - calling sorting function recursively
 * @array: array to sort
 * @size: size of the array
 * @low: first index
 * @high: pivot index
 * Return: void
 */
void super_quick_sort(int *array, int low, int high, size_t size)
{
	int partition_index;

	if (low < high)
	{
		partition_index = partition(array, low, high, size);
		super_quick_sort(array, low, partition_index - 1, size);
		super_quick_sort(array, partition_index + 1, high, size);
	}
}

/**
 * partition - sets pivot point and sort the list accordingly
 * @array: array to sort
 * @size: size of the array
 * @low: first position
 * @high: pivot point
 * Return: pivot point position
 */

int partition(int *array, int low, int high, size_t size)
{
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= array[high])
		{
			if (low != j)
			{
				swap(&array[low], &array[j]);
				print_array(array, size);
			}
			low++;
		}
	}
	if (low != high)
	{
		swap(&array[low], &array[high]);
		print_array(array, size);
	}
	return (low);
}
