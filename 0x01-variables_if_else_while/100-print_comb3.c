#include <stdio.h>

/**
 * main - A program that prints all possible different
 * combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	c = 0;
	d = 1;
	for (a = c; a <= 9; a++)
	{
		for (b = d; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(',');
			putchar(' ');
		}
		c++;
		d++;
	}
	putchar('\n');
	return (0);
}
