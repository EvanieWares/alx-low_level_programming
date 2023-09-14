#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *node = (dlistint_t *) h;

	if (node == NULL)
	{
		return (0);
	}

	while (node)
	{
		count++;
		node = node->next;
	}

	return (count);
}
