#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the results of multiplication
 * @argc: number of arguments passed
 * @argv: pointer to arguments passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
