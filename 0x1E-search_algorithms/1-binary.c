#include "search_algos.h"
/**
 * binary_search - search list for value using binary search
 * @array: array to search
 * @size: size of search
 * @value: value to find
 * Return: index f found, -1 if not
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t m;
	size_t i;
	char *medium;

	if ((l + r) == 0 || array == NULL)
		return (-1);

	while (l <= r)
	{
		m = (l + r) / 2;

		medium = "";
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%s%d", medium, array[i]);
			medium = ", ";
		}
		printf("\n");

		if (value > array[m])
			l = m + 1;
		else if (value < array[m])
			r = m - 1;
		else if (value == array[m])
			return (m);
	}
	return (-1);
}
