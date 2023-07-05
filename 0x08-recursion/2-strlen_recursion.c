#include "main.h"

/**
 * count - counts number of characters in a string
 * @str: string to count from
 * @len: length of string
 * Return: number of characters
 */

int count(char *str, int len)
{
	if (str[len] != '\0')
	{
		return (count(str, len + 1));
	}
	return (len);
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string of characters
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	return (count(s, 0));
}
