#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int first = 1;
	int second = 2;
	int third;

	printf("%d, %d", fisrt, second);

	for (i = 3; i <= 50; i++)
	{
		printf(", ");
		third = first + second;
		printf("%d", third);
		first = second;
		second = third;
	}
	return (0);
}
