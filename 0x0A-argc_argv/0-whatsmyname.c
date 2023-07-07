#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments passed
 * @argv: array of argumets passed
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
