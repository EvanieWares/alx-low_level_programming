#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int sum = 0;

	while (b[i] != '\0')
	{
		char c = b[i];

		if (c == '1' || c == '0')
		{
			sum = sum * 2 + (c - '0');
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (sum);
}
