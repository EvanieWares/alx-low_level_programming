#include "main.h"

/**
 * _strlen - counts number of characters in a string
 * @str: string to count
 * Return: length of string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * reverse_string - reverses a string
 * @str: string to reverse
 * Return: reversed string
 */

char *reverse_string(char *str)
{
	int i;
	int len;
	char temp;

	len = _strlen(str);
	for (i = 0; i < len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
	return (str);
}

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: buffer size
 * Return: sum
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1len = _strlen(n1) - 1;
	int n2len = _strlen(n2) - 1;
	int reg = 0, num1, num2, temp, digits = 0;

	while (n1len >= 0 || n2len >= 0 || reg == 1)
	{
		if (n1len < 0)
			num1 = 0;
		else
			num1 = n1[n1len] - '0';
		if (n2len < 0)
			num2 = 0;
		else
			num2 = n2[n2len] - '0';

		temp = num1 + num2 + reg;
		if (temp > 9)
		{
			reg = temp / 10;
			temp %= 10;
		}
		else
			reg = 0;

		if (digits > size_r)
			return (0);
		r[digits] = temp + '0';
		digits++;
		n1len--;
		n2len--;
	}

	if (digits >= size_r)
		return (0);
	r[digits] = '\0';

	return (reverse_string(r));
}
