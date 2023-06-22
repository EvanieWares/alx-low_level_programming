#include "main.h"

/**
 * print_number - prints a number
 * @n: number to print
 * Return: void
 */

void print_number(int n)
{
	int digits;
	int temp;
	int div;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if (n < 10)
	{
		_putchar(n + '0');
		return;
	}

	div = 1;
	digits = 1;
	temp = n;
	while (temp > 9)
	{
		div *= 10;
		digits++;
		temp /= 10;
	}

	while (div > 0)
	{
		_putchar(n / div + '0');
		n %= div;
		div /= 10;
	}
}
