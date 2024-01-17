#include "search_algos.h"

/**
 * print_array - Searches for a value in an array of integers using
 * the Linear search algorithm.
 * @array: Pointer to the first element of the array to print
 * @start: The first index to start printing from
 * @end: The last index to print
 */
void print_array(int *array, int start, int end)
{
	printf("Searching in array: ");
	for (; start <= end; start++)
	{
		printf("%d", array[start]);
		if (start == end)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located, otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t mid, low, high, result = -1;

	if (array == NULL || size < 1)
		return (result);

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;

		print_array(array, low, high);
		if (value < array[mid])
			high = mid - 1;
		else if (value > array[mid])
			low = mid + 1;
		else
		{
			result = mid;
			if (array[mid - 1] != value)
				break;
			high = mid;
		}
	}
	return (result);
}
