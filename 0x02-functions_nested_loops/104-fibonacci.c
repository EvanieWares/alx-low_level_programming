#include <stdio.h>
#define MAX_VALUE 10000000000

/**
 * print_fibonacci - prints the fibonacci numbers
 *
 * Return: void
 */
void print_fibonacci(void)
{
	int i;
	unsigned long int previous = 1;
	unsigned long int current = 2;

	printf("%lu, %lu, ", previous, current);

	for (i = 3; i <= 98; i++)
	{
		if (current > MAX_VALUE - previous)
		{
			unsigned long int least_significant = (previous + current) % MAX_VALUE;
			unsigned long int remaining = (previous + current) / MAX_VALUE;
			unsigned long int temp = current;

			current = least_significant;
			previous = temp / MAX_VALUE + remaining;

			printf("%lu%010lu", previous, current);
		}
		else
		{
			unsigned long int temp = current;

			current = previous + current;
			previous = temp;

			printf("%lu", current);
		}

		if (i != 98)
		{
			printf(", ");
		}
	}
}

/**
 * main - a program thet prints the first 98
 * fibonacci numbers
 *
 * Return: void
 */
int main(void)
{
	print_fibonacci();

	printf("\n");

	return (0);
}
