#include "main.h"
#include <stddef.h>

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
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
