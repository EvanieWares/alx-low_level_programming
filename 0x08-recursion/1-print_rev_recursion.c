#include "main.h"

/**
 * print - prints last character in a string
 * @str: string to print from
 * @len: length of string
 * Return: void
 */

void print(char *str, int len)
{
	if (len >= 0)
	{
		_putchar(str[len]);
		print(str, len - 1);
	}
}

/**
 * _strlen - counts number of characters in a string
 * @str: string to count from
 * @len: number of characters counted
 * Return: number of characters
 */

int _strlen(char *str, int len)
{
	if (str[len] == '\0')
	{
		return (len);
	}

	return (_strlen(str, ++len));
}

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int len;

	len = _strlen(s, 0);

	if (len == 0)
	{
		return;
	}

	print(s, len - 1);
}
