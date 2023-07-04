#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to search for
 * Return: pointer to the beginning of the located substring,
 * or 'NULL' if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			char *str = haystack;
			char *sub = needle;

			while (*sub != '\0' && *sub == *str)
			{
				sub++;
				str++;
			}

			if (*sub == '\0')
			{
				return ((char *) haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}
