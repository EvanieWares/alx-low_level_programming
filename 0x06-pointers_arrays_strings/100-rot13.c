#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i;
	int j;
	char s1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 52)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
