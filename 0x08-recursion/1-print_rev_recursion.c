#include "main.h"

/**
 * print - prints last character in a string
 * @str: string to print from
 * @len: length of string
 * Return: void
 */

void print(char *str, int len)
{
	if (len < 0)
	{
		return;
	}
	else
	{
		_putchar(str[len]);
		print(str, len - 1);
	}
}

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	if (len == 0)
	{
		_putchar('\n');
	}
	else
	{
		print(s, len);
	}
}
