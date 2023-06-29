#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		char c = str[i];
		if ((c >= 'a' && c <= 'm') || (c >='A' && c <= 'M'))
		{
			c += 13;
		}
		else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		{
			c -= 13;
		}
		str[i] = c;
		i++;
	}
	return (str);
}
