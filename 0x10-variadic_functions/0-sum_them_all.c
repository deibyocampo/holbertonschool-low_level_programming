#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - the sum of all its parameters.
 *
 * @n: variable that obtains the parameters to be added.
 *
 * Return: sum the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argum;
	unsigned int sum;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(argum, n);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(argum, unsigned int);

	va_end(argum);
	return (sum);
}
