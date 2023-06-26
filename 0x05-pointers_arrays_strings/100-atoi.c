#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: int
 */

int _atoi(char *s)
{
	int len = 0;
	int result = 0;
	int conv = 0;
	int sign = 1;

	while (s[len] != '\0')
	{
		char temp = s[len];

		if (conv == 1 && temp == ' ')
		{
			break;
		}

		if (conv == 0 && temp == '-')
		{
			sign *= -1;
		}

		if (temp >= '0' && temp <= '9')
		{
			result = result * 10 + (temp - '0');
			conv = 1;
		}
		len++;
	}
	return (result * sign);
}
