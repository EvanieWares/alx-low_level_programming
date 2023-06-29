#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: number of characters to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int srclen;

	srclen = 0;
	while (src[srclen] != '\0')
	{
		srclen++;
	}

	for (i = 0; i < n; i++)
	{
		if (i <= srclen)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
	}

	return (dest);
}
