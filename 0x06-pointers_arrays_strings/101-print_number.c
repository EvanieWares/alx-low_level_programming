#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 * Return: void
 */

void print_number(int n)
{
	int digits;
	unsigned int num;
	unsigned int temp;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	temp = num;
	digits = 1;
	while (temp / 10)
	{
		digits++;
		temp /= 10;
	}

	while (digits > 1)
	{
		int i;
		int x = 1;

		for (i = 1; i < digits; i++)
		{
			x *= 10;
		}
		_putchar(num / x + '0');
		num %= x;
		digits--;
	}
	_putchar(num % 10 + '0');
}
