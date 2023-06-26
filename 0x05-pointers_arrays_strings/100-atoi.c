#include "main.h"

int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: int
 */

int _atoi(char *s)
{
	int len = 0;
	int result = 0;
	int sign = 1;

	while (s[len] != '\0')
	{
		if (s[len] == '-')
		{
			sign *= -1;
		}
		else if (s[len] == '+')
		{
			sign *= 1;
		}
		else if (_isdigit(s[len]))
		{
			result = result * 10 + (s[len] - '0');
		}
		else if (result > 0)
		{
			break;
		}
		len++;
	}
	return (result * sign);
}
