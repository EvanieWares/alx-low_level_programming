#include "main.h"

void comma_space(void);
void print_backwards(int n);
void print_forward(int n);
void print_num(int num);

/**
 * print_to_98 - prints all natural numbers
 * from n to 98.
 * @n: number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		print_backwards(n);
	}
	else
	{
		print_forward(n);
	}
}

/**
 * print_num - prints a number
 * @num: number to print
 *
 * Return: void
 */
void print_num(int num)
{
	int digit_num;
	char str[20];
	int i;

	sprintf(str, "%d", num);
	digit_num = strlen(str);

	for (i = 0; i < digit_num; i++)
	{
		_putchar(str[i]);
	}
}

/**
 * print_backwards - print numbers in descending order
 * @n: number to print
 *
 * Return: void
 */
void print_backwards(int n)
{
	int i;

	for (i = n; i >= 98; i--)
	{
		print_num(i);
		if (i != 98)
		{
			comma_space();
		}
	}
}

/**
 * print_forward - print numbers in ascending order
 * @n: number to print
 *
 * Return: void
 */
void print_forward(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		print_num(i);
		if (i != 98)
		{
			comma_space();
		}
	}
}

/**
 * comma_space - prints a comma and space
 *
 * Return: void
 */
void comma_space(void)
{
	_putchar(',');
	_putchar(' ');
}
