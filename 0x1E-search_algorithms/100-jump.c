#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers using
 * the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	int i;
	int prev = 0;
	int n = (int) size;
	int step = sqrt(n);

	do {
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		i = prev;
		prev = step;
		step += sqrt(n);
		if (prev >= n)
		{
			printf("Value found between indexes [%d] and [%d]\n", i, prev);
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (-1);
		}
	} while (array[min(step, n) - 1] < value);

	printf("Value found between indexes [%d] and [%d]\n", i, prev);
	for (; i <= prev; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}

/**
 * min - Returns the minimum of 2 values
 * @a: First value
 * @b: Second value
 *
 * Return: The minimum of 2 values
*/
int min(int a, int b)
{
	return ((a < b) ? a : b);
}
