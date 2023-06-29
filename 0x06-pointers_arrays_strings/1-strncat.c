#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of characters to copy
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (j < n)
	{
		if (src[j] == '\0')
		{
			break;
		}
		dest[i + j] = src[j];
		j++;
	}

	return (dest);
}
