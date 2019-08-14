#include "holberton.h"
/**
 * strLen - calculates the number of characters in a string
 * @str: the string to count the amount of characters
 * Return: the counted letters in the string
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
 * append_text_to_file - create a file with content from text_content
 * @filename: the path of the file
 * @text_content: the content to add to filename
 * Return: return 1 if file creation was a success, else it returns -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, status;
	size_t len;

	status = 0;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	len = strLen(text_content);
	status = write(fd, text_content, len);
	if (status == -1)
		return (-1);
	status = close(fd);
	if (status == -1)
		return (-1);
	return (1);
}
