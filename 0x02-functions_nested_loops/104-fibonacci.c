#include <stdio.h>
#define MAX_VALUE 10000000000

/**
 * main - print first 98 fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	int c;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_1, fib1_2, fib2_1, fib2_2;
	unsigned long h1, h2;

	for (c = 0; c < 92; c++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	fib1_1 = fib1 / MAX_VALUE;
	fib2_1 = fib2 / MAX_VALUE;
	fib1_2 = fib1 % MAX_VALUE;
	fib2_2 = fib2 % MAX_VALUE;

	for (c = 93; c < 99; c++)
	{
		h1 = fib1_1 + fib2_1;
		h2 = fib1_2 + fib2_2;
		if (fib1_2 + fib2_2 >= MAX_VALUE)
		{
			h1 += 1;
			h2 %= MAX_VALUE;
		}

		printf("%lu%lu", h1, h2);
		if (c != 98)
			printf(", ");

		fib1_1 = fib2_1;
		fib1_2 = fib2_2;
		fib2_1 = h1;
		fib2_2 = h2;
	}
	printf("\n");
	return (0);
}
