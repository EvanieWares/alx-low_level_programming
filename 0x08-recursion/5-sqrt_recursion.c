#include "main.h"

/**
 * _sqrt - gets the square root of a number
 * @num: number
 * @i: guessed number
 * Return: square root
 */

int _sqrt(int num, int i)
{
	if (i * i < num)
		return (_sqrt(num, i + 1));
	else if (i * i == num)
		return (i);
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of
 * a number
 * @n: the number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt(n, 0));
}
