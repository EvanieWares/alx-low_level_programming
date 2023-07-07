#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * containsNonDigit - check if a there are no digits
 * @str: string to check
 * Return: 1 if yes, otherwise 0
 */

int containsNonDigit(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (1);
		str++;
	}
	return (0);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments passed
 * @argv: pointer to arguments passed
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			char *str = argv[i];
			if (containsNonDigit(str))
			{
				printf("Error\n");
				return (0);
			}
			else
				sum += atoi(str);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
