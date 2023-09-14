#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *node = (dlistint_t *)h;

	if (node == NULL)
	{
		return (0);
	}

	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		count++;
	}

	return (count);
}
