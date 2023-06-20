#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * comma_space - adds comma and space
 *
 * Return: void
 */
void comma_space(void)
{
	_putchar(',');
	_putchar(' ');
}

/**
 * print_number - prints numbers
 * @n: number to print
 *
 * Return: void
 */
void print_number(int n)
{
	int i;
	char str[3];
	int digits;

	if (n < 100)
	{
		_putchar(' ');
	}
	if (n < 10)
	{
		_putchar(' ');
		_putchar(n + '0');
		return;
	}

	sprintf(str, "%d", n);
	digits = strlen(str);

	for (i = 0; i < digits; i++)
	{
		_putchar(str[i]);
	}
}

/**
 * print_times_table - prints the 9 times table, starting with 0.
 * @n: table to print
 *
 * Return: void
 */
void print_times_table(int n)
{
	int temp;
	int i;
	int j;

	if (n == 0)
	{
		_putchar('0');
		_putchar(' ');
		return;
	}

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		_putchar(i * 0 + '0');
		comma_space();
		for (j = 1; j <= n; j++)
		{
			temp = i * j;
			print_number(temp);
			if (j < n)
				comma_space();
		}
		_putchar('\n');
	}
}
