#include "holberton.h"
/**
 * print_line - 
 *
 * Return: 
 */
void print_line(int n)
{
  int m;
  if (n > 0)
    {
  for (m = 0; m < n; m++)
    {
      _putchar('_');
    }
  
    }
_putchar('\n');
}
