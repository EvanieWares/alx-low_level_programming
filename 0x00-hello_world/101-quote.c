#include <stdio.h>

/**
 * main - A program that print a quote without using printf and puts
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char* quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 0;

	while(quote[i] != '\0')
	{
		putchar(quote[i]);
		i++;
	}
	return (1);
}
