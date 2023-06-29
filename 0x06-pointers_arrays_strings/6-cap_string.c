#include "main.h"

/**
 * is_separator - checks if a character is a separator
 * @c: character to check
 * Return: 1 if yes, 0 otherwise
 */

int is_separator(char c)
{
	int i;
	int res = 0;
	char str[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	i = 0;
	while (i < 13)
	{
		if (c == str[i])
		{
			res = 1;
			break;
		}
		i++;
	}
	return (res);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || is_separator(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}

	}

	return (str);
}
