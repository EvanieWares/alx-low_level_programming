#include "main.h"

/**
 * check - checks if a number is a prime number
 * @n: number to check
 * @i: guessed number
 * @j: n / i
 * Return: 1 if a number is a prime number,
 * otherwise 0
 */

int check(int n, int i, int j)
{
	if (n % i == 0)
		return (0);
	if (i > j)
		return (1);

	i++;
	return (check(n, i, n / i));
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to check
 * Return: 1 if the number is a prime number,
 * otherwise 0
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < i)
		return (0);
	else
		return (check(n, i, n / i));
}
