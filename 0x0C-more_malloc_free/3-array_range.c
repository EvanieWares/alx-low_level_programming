#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: smallest value in the array
 * @max: largest value in the array
 *
 * Return: pointer to the created array, otherwise NULL
 */
int *array_range(int min, int max)
{
	int i, num;
	int *arr;

	if (min > max)
		return (NULL);

	num = max - min + 1;
	arr = malloc(num * sizeof(int));

	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i < num)
	{
		arr[i] = min + i;
		i++;
	}

	return (arr);
}
