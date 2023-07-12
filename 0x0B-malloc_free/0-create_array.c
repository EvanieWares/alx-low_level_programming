#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: char to initialize to the array
 * Return: pointer to the array, or 'NULL' if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
