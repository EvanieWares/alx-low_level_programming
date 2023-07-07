#include <stdio.h>
#include <stdlib.h>

int numOfCoins(char *str);

/**
 * main - prints the minumum number of coins to make change
 * for an amount of money
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: 0 if success, otherwise 1
 */

int main(int argc, char *argv[])
{
	int coins;

	if (argc == 2)
	{
		coins = numOfCoins(argv[1]);
		printf("%d\n", coins);
	}
	else
		printf("Error\n");

	return (0);
}

/**
 * countCoins - counts number of coins to make change
 * @num: number to count from
 * Return: number of coins to make change
 */

int countCoins(int num)
{
	if (num == 0)
		return (0);
	if (num / 25)
		return (num / 25 + countCoins(num % 25));
	if (num / 10)
		return (num / 10 + countCoins(num % 10));
	if (num / 5)
		return (num / 5 + countCoins(num % 5));
	if (num / 2)
		return (num / 2 + countCoins(num % 2));

	return (num);
}

/**
 * numOfCoins - converts string to number then return number of coins
 * @str: string to convert
 * Return: number of coins
 */

int numOfCoins(char *str)
{
	int num = atoi(str);

	if (num < 0)
		return (0);

	return (countCoins(num));
}
