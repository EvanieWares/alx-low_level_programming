#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements to be allocated
 * @size: size of each element in bytes
 *
 * Return: pointer to the allocated memory, otherwise NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, total_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		((char *) ptr)[i] = 0;

	return (ptr);
}
