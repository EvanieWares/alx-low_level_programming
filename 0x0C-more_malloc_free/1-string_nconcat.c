#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - returns the length of a string
 * @str: string to count
 * Return: number of characters in the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first bytes of second string
 * Return: concetenated string, otherwise NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, s1len, s2len, strlen;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1len = _strlen(s1);
	s2len = _strlen(s2);

	if ((int) n >= s2len)
		strlen = s1len + s2len;
	else
		strlen = s1len + (int) n;

	str = malloc(strlen + 1);
	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < strlen)
	{
		if (i < s1len)
			str[i] = s1[i];
		else
			str[i] = s2[i - s1len];
		i++;
	}

	str[strlen] = '\0';
	return (str);
}
