#include "main.h"

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
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int temp;
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i * 0 + '0');
		comma_space();
		for (j = 1; j <= 9; j++)
		{
			temp = i * j;
			if (temp < 10)
				_putchar(' ');
			else
				_putchar(temp / 10 + '0');
			_putchar(temp % 10 + '0');
			if (j < 9)
				comma_space();
		}
		_putchar('\n');
	}
}
