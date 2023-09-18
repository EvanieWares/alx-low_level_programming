#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @c: character to be located
 * @s: a string in which to search for a character 'c'
 * Return: pointer to the first occurence of character 'c',
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}

	if (*s == c)
	{
		return ((char *) s);
	}
	return (NULL);
}
