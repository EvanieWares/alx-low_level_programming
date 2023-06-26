#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to count
 * Return: number of characters
 */

int _strlen(char *s)
{
	int len = 0;
	char *str = s;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}
