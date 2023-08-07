#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the textfile to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters it could read and print,
 * or 0 if the file can not be opened or read,
 * or 0 if filename is NULL,
 * or 0 if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t len = 0;
	char *buffer;

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	len = read(file, buffer, letters);
	if (len < 0)
		return (0);

	len = write(STDOUT_FILENO, buffer, len);
	if (len < 0)
		return (0);

	close(file);
	free(buffer);
	return (len);
}
