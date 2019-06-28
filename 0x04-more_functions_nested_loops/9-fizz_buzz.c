#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 * 
 * Return: Always 0.
 */
int main(void)
{
  int a;
  
  for (a = 1; a <= 100; a++)
    {
      if (a > 9)
	{
	  putchar(48 + (a / 10));
	}
      putchar(48 + (a % 10));
      if ((a % 3) = 0 &&  0 = (a % 5))
	{
	  putchar(a + '0');
	  putchar(' ');
          putchar('FizzBuzz');
          putchar(' ');
	}
    }
  putchar('\n');
return (0);
}
