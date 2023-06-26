#include "main.h"
#include <stdio.h>

/**
 * _strlen - counts number of characters in a string
 * @str: string to count
 * Return: number of characters
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	
	return (len);
}

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
