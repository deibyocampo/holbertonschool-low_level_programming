#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
int ab;
int bc;
for (ab = '0'; ab <= '9'; ab++)
{
for (bc = '0'; bc <= '9'; bc++)
{
putchar(ab);
putchar(bc);
if (ab != '9' || bc != '9')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
