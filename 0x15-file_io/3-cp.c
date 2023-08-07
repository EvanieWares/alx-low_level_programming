#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * close_file - closes a file
 * @file: pointer to the file to close
 */
void close_file(int *file);

/**
 * print_error - prints errors on POSIX standard error
 * @error: error message
 * @code: exit code
 */
void print_error(int *file, char filename[], int code);

/**
 * main - copies the contents of a file to another file
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: Always (0), Success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, times = 1, buffer_size = 1024;
	ssize_t read_bytes = 0, write_bytes = 0;
	char buffer[1024];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		print_error(NULL, "", 97);
		/*dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");*/
		/*exit(97);*/
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		print_error(&file_from, argv[1], 98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (file_to < 0)
	{
		print_error(&file_to, argv[2], 99);
	}
	while (1)
	{
		read_bytes = read(file_from, buffer, buffer_size);
		if (read_bytes < 0)
		{
			print_error(&file_from, argv[1], 98);
		}
		write_bytes = write(file_to, buffer, read_bytes);
		if (write_bytes < 0)
		{
			print_error(&file_to, argv[2], 99);
		}
		if (read_bytes < buffer_size)
			break;
		lseek(file_to, 0, SEEK_END);
		lseek(file_from, buffer_size * times, SEEK_SET);
	}
	close_file(&file_from);
	close_file(&file_to);
	return (0);
}

/**
 * close_file - closes a file
 * @file: pointer to the file to close
 */
void close_file(int *file)
{
	int result = close(*file);

	if (result < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *file);
		exit(100);
	}
}

/**
 * print_error - prints errors on POSIX standard error
 * @error: error message
 * @code: exit code
 */
void print_error(int *file, char filename[], int code)
{
	switch (code)
	{
		case 98:
			{
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
				if (file != NULL)
				{
					close_file(file);
				}
				else
				{
					(void) file;
				}
				exit(code);
			}
		case 99:
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
				if (file != NULL)
				{
					close_file(file);
				}
				else
				{
					(void) file;
				}
				exit(code);
			}
		default:
			{
				dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
				(void) file;
				(void) filename;
				exit(code);
			}
	}
}
