#include <stdio.h>
#include "holberton.h"
/**
 * strLen - Calculates the number of characters in a string
 * @str: the string to count the amount of characters from
 * Return: return the counted letters in the string
 */
int strLen(char *str)
{
	int len;

	len = 0;
	if (str == NULL)
		return (0);
	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * create_file - create a file with content with content from text_content
 * @filename: the file name to be created
 * @text_content: the content to add to filename
 * Return: return 1 if file creation was a success, else it exits
 */
int create_file(const char *filename, char *text_content)
{
	int len, fd, status;

	status = 0;
	if (filename == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	if (text_content == NULL)
		return (1);
	len = strLen(text_content);
	status = write(fd, text_content, len);
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	status = close(fd);
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (1);
}

/**
 * main - copies content from one file to the other
 * @argc: the number of arguments in the terminal
 * @argv: the string of arguments in the terminal
 * Return: returns 0 if successful
 */
int main(int argc, char **argv)
{
	int fd, status;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buffer = malloc(sizeof(*buffer) * 1024);
	status = read(fd, buffer, 1024);
	if (status == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	status = close(fd);
	if (status == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	status = create_file(argv[2], buffer);
	free(buffer);
	return (0);
}
