#include "holberton.h"
/**
 * print_sing - check the code for Holberton School students.
 *
 * @n: the caracter to print.
 *
 * Return: will return 1 if the variable is greater than 0 will return 0 if the variable equals 0.
 */
int print_sign(int n)
{
  if (n > 0)
    {
      _putchar('+');
      return (1);
      
    }
  else if (n == 0)
    {
     
      _putchar('0');
      return (0);
    }
  else
    {      
      _putchar('-');
      return(-1);
    }
}
