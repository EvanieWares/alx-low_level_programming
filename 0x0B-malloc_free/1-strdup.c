#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of an array of chars
 * @str: array of chars
 * Return: length of the array
 */

int _strlen(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: pointer to the duplicated string, or NULL if str is NULL
 * or if insuficient memory was available
 */

char *_strdup(char *str)
{
	int i;
	int len;
	char *dup;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	dup = (char *) malloc(len + 1);

	if (dup == NULL)
		return (NULL);

	i = 0;
	while (i != len)
	{
		dup[i] = str[i];
		i++;
	}

	dup[len] = '\0';
	return (dup);
}
