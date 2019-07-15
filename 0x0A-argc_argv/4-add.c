#include <stdio.h>
#include <stdlib.h>
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
	int a;
	int b;
	int sum;

	sum = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (1);
	}

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (0);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
