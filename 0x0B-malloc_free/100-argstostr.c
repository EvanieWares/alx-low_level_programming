#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments in the program
 * @ac: number of arguments
 * @av: pointer
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	int i;
	int total_len;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total_len = 1;
	for (int i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]) + 1;
	}

	str = malloc(total_len);
	if (str == NULL)
	{
		return (NULL);
	}

	*str = '\0';

	for (int i = 0; i < ac; i++)
	{
		strcat(str, av[i]);
		strcat(str, "\n");
	}
	return (str);
}
