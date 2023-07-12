#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width
 * @height: the height
 * Return: 2-D array
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **array;

	if (width < 1 || height < 1)
		return (NULL);

	array = malloc(width * sizeof(int *));

	for (i = 0; i < width; i++)
		array[i] = malloc(height * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			array[i][j] = 0;
	return (array);
}
