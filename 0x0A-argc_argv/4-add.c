#include <stdio.h>
#include <stdlib.h>

/**
 *main - calculates the sum of the given integers from,
 *the command line
 *
 *@argc: The amount of arguments in the command line
 *
 *@argv: A double pointer pointing to the strings in the
 *command line
 *
 *Return: returns 0 if program is successful, else it returns 1
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
