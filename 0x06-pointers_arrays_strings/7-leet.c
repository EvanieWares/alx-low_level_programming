#include "main.h"

/**
 * encode - encodes characters
 * @c: character to encode
 * Return: encoded character
 */

char encode(char c)
{
	int i;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; i < 10; i++)
	{
		if (c == a[i])
		{
			c = b[i];
		}
	}

	return (c);
}

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 * Return: encorded string
 */

char *leet(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = encode(str[i]);
		i++;
	}
	return (str);
}
