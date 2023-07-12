#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - returns the length on an array of chars
 * @str: array of chars
 * Return: length of array
 */

int _strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int lens1;
	int lens2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lens1 = _strlen(s1);
	lens2 = _strlen(s2);
	str = (char *) malloc(lens1 + lens2 + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < lens1 + lens2; i++)
	{
		if (i < lens1)
			str[i] = s1[i];
		else
			str[i] = s2[i - lens1];
	}

	str[lens1 + lens2] = '\0';
	return (str);
}
