#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 * Return: void
 */

void print_rev(char *s)
{
	int len = _strlen(s);

	while (len > 0)
	{
		len--;
		_putchar(s[len]);
	}
	_putchar('\n');
}
