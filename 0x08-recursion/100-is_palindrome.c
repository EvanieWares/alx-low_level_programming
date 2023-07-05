#include "main.h"

/**
 * _strlen - counts number of characters in a string
 * @str: string to count
 * @i: characters counted
 * Return: length of a string
 */

int _strlen(char *str, int i)
{
	if (str[i] != '\0')
		return (_strlen(str, i + 1));
	return (i);
}

/**
 * check - checks if a string is a palindrome
 * @str: string to check
 * @i: position of character to compare
 * @j: position of character to compare
 * Return: 1 if the string is palindrome, otherwise 0
 */

int check(char *str, int i, int j)
{
	if (i <= _strlen(str, 0) / 2 && str[i] == str[j])
		return (check(str, i + 1, j - 1));
	if (str[i] != str[j])
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
