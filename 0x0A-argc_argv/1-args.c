#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguements passed
 * to the program
 * @argc: number of arguments passed
 * @argv: pointer to array of arguments passed
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
