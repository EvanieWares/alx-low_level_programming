#include "main.h"

/**
 * isavailable - search for a character in a string
 * @c: character to search
 * @str: string to search from
 * Return: 1 if the character is found, otherwise 0
 */

int isavailable(char c, char *str)
{
	while (*str != '\0')
	{
		if (*str == c)
		{
			return (1);
		}
		str++;
	}
	return (0);
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string to be scanned
 * @accept: pointer to a string that contain characters to match
 * Return: the number of bytes in the initial segment of s
 * which consist only bytes from 'accept'
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int counting = 0;

	count = 0;
	while (*s != '\0')
	{
		if (counting && !isavailable(*s, accept))
		{
			break;
		}
		if (isavailable(*s, accept))
		{
			counting = 1;
			count++;
		}
		s++;
	}
	return (count);
}
