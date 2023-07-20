#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array
 * @size: size of the array
 * @action: pointer to a function to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int num_of_elements = (unsigned int) size;
	unsigned int i = 0;

	while (i < num_of_elements)
	{
		action(array[i]);
		i++;
	}
}
