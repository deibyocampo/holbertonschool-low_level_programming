#include "holberton.h"
/**
 * read_textfile - functions that reads a text file and prints.
 *
 * @filename: pointer of text.
 * @letters: sizes the text.
 * Return: print the text
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wrt;
	int fd;
	char *space;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	space = malloc(sizeof(char) * letters);

	if (space == NULL)
		return (0);

	rd = read(fd, space, letters);
	if (rd == -1)
		return (0);

	wrt = write(STDOUT_FILENO, space, rd);
	if (wrt == -1)
		return (0);

	free(space);
	close(fd);

	return (rd);
}
