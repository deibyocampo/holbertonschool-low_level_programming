#include <stdio.h>
/**
 * main - is a function returning an integer.
 *
 * @argc: argument count.
 *
 * @argv: argument vector.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void) argv[0];

	printf("%d\n", argc - 1);

	return (0);
}
