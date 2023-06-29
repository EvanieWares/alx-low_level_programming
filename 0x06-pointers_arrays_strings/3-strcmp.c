#include "main.h"

/**
 * _strlen - counts number of characters in a string
 * @str: string to count
 * Return: number of characters
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if true
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int len;
	int result = 0;

	if (_strlen(s1) >= _strlen(s2))
	{
		len = _strlen(s1);
	}
	else
	{
		len = _strlen(s2);
	}

	for (i = 0; i < len; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			result = s1[i] - s2[i];
			break;
		}
	}

	return (result);
}
