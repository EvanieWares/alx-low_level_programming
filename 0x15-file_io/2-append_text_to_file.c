#include "main.h"

/**
 * _strlen - counts number of characters in a string
 * @str: string to count
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append
 * @text_content: a NULL terminated string to add to the end of the file
 * Return: 1 on success, or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		lseek(fd, 0, SEEK_END);
		bytes_written = write(fd, text_content, _strlen(text_content));
		if (bytes_written < 0)
			return (-1);
	}

	return (1);
}
