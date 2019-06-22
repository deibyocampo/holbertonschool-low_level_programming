#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ab;
int bc;
int cd;
for (ab = 48 ; ab <= 55 ; ab++)
{
for (bc = 49 ; bc <= 56 ; bc++)
{
for (cd = bc + 1; cd <= 57; cd++)
{
putchar(ab);
putchar(bc);
putchar(cd);
if (ab == 55 && bc == 56 && cd == 57)
{
continue;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
