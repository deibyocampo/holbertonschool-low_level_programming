#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - that prints a name.
 *
 * @name: pointer the string.
 *
 * @f: pointer.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f != NULL)
		f(name);
}
