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
	long first = 1;
	long second = 2;
	long third;

	printf("%li, %li", first, second);

	for (i = 3; i <= 50; i++)
	{
		printf(", ");
		third = first + second;
		printf("%li", third);
		first = second;
		second = third;
	}
	printf("\n");
	return (0);
}
