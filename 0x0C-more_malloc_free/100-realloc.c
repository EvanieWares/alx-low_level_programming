#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes to be copied
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: previously allocated memory
 * @old_size: size of the previously allocated memory
 * @new_size: size of the new memory
 *
 * Return: pointer to the newly resized block of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int copy_size;
	void *new_ptr;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (old_size < new_size)
		copy_size = old_size;
	else
		copy_size = new_size;

	_memcpy(new_ptr, ptr, copy_size);

	free(ptr);

	return (new_ptr);
}
