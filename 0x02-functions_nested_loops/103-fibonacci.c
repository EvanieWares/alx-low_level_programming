#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms
 * in a fibonacci
 *
 * Return: 0
 */
int main(void)
{
	int max = 4000000;
	long sum = 0;
	int num1 = 1;
	int num2 = 2;
	int num3 = 0;

	sum += num2;
	while (num3 <= max)
	{
		num3 = num1 + num2;
		if (num3 % 2 == 0)
		{
			sum += num3;
		}
		num1 = num2;
		num2 = num3;
	}
	printf("%li\n", sum);
	return (0);
}
