#include "main.h"
#include <stddef.h>

/**
 * isavailable - searches for a character in a string
 * @c: character to search
 * @str: string to search from
 * Return: 1 if the character is found, otherwise 0
 */

int isavailable(char c, char *str)
{
	while (*str != '\0')
	{
		if (*str == c)
		{
			return (1);
		}
		str++;
	}
	return (0);
}

/**
 * _strpbrk - searches a string for the first occurence of any
 * character from specified set of characters
 * @s: pointer to the string to be searched
 * @accept: pointer to the string that contains the characters to search for
 * Return: pointer to bytes in 's' that matches one of the bytes in 'accept',
 * or 'NULL' if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (isavailable(*s, accept))
		{
			return ((char *) s);
		}
		s++;
	}
	return (NULL);
}
