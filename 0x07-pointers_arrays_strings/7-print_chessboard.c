#include "holberton.h"
/**
 * print_chessboard - print to chessboard.
 *
 * @a: pointer printer adddres of array.
 *
 * Return: chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int ranks;
	int columns;

	for (ranks = 0; ranks < 8; ranks++)
	{
		for (columns = 0; columns < 8; columns++)
		{
			_putchar(a[ranks][columns]);
		}
		_putchar('\n');
	}
}
