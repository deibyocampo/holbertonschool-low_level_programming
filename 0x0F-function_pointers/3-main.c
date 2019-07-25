#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Receive two whole numbers and print the results.
 *
 * @argc: number of arguments.
 * @argv: pointer pointing to the arguments.
 *
 * Return: 0 the program exit.
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int c;
	char *ptn;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!(argv[2][0] == '+' || argv[2][0] == '*' || argv[2][0] == '/' || argv[2][0] == '-' || argv[2][0] == '%') || argv[2][1] == '\0')
	{
		printf("Error\n");
		exit(99);
	}
	ptn = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (b == 0 && (ptn[0] == '/' || ptn[0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	c = (*get_op_func(ptn))(a, b);
	printf("%d\n", c);
	return (0);
}
