#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: character to be located
 * @s: a string in which to search for a character 'c'
 * Return: pointer to the first occurence of character 'c',
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
