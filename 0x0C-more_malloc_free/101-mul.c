#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_error - prints "error" and exit
 *
 * Return: void
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * is_number - checks if a string is a number
 * @str: string to check
 *
 * Return: 1 if the string is a number, otherwise 0
 */
int is_number(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}

/**
 * multiply - multiplies two numbers
 * @num1: first number
 * @num2: second number
 *
 * Return: void
 */
void multiply(char *num1, char *num2)
{
	int i, j;
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int *result = calloc(len1 + len2, sizeof(int));

	if (result == NULL)
		print_error();

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int digit1 = num1[i] - '0';
			int digit2 = num2[j] - '0';
			int product = digit1 * digit2;
			int pos1 = i + j;
			int pos2 = i + j + 1;
			int sum = product + result[pos2];

			result[pos1] += sum / 10;
			result[pos2] = sum % 10;
		}
	}

	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;

	if (i == len1 + len2)
		printf("0\n");
	else
	{
		for (; i < len1 + len2; i++)
			printf("%d", result[i]);
		printf("\n");
	}

	free(result);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		print_error();
	}

	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		print_error();
	}

	multiply(argv[1], argv[2]);

	return (0);
}
