#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_number - prints a number
 * @n: number to print
 * Return: void
 */

void print_number(int n)
{
	int i;
	int len;
	char str[5];

	sprintf(str, "%d", n);
	len = strlen(str);
	
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
}
