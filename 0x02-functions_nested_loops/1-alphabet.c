#include "main.h"

void print_alphabet(void);

/**
 * main - A program that prints alphabet letters
 *
 * Return: Always 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - a function that prints alphabet letters
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
