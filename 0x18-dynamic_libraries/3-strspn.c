#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string to be scanned
 * @accept: pointer to a string that contain characters to match
 * Return: the number of bytes in the initial segment of s
 * which consist only bytes from 'accept'
 */

unsigned int _strspn(char *s, char *accept)
{
	char *p = s;

	while (*p != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*p == *a)
				break;
			a++;
		}

		if (*a == '\0')
			return ((unsigned int)(p - s));

		p++;
	}

	return ((unsigned int)(p - s));
}
