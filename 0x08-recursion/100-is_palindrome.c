#include "main.h"

int _strlen(char *str, int i)
{
	if (str[i] != '\0')
		return (_strlen(str, i + 1));
	return (i);
}

int check(char *str, int i, int len)
{
	if (i <= _strlen(str, 0) / 2 && str[i] == str[len])
		return (check(str, i + 1, len - 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if the string is a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int len = _strlen(s, 0);

	return (check(s, 0, len - 1));
}
