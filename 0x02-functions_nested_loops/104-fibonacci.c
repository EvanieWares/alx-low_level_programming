#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	int max = 98;
	int i;
	double first = 1;
	double second = 2;
	double third;

	printf("%.0f, %.0f", first, second);

	for (i = 3; i <= max; i++)
	{
		printf(", ");
		third = first + second;
		printf("%.0f", third);
		first = second;
		second = third;
	}
	printf("\n");
	return (0);
}
