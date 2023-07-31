#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *currentHead = h;

	if (currentHead == NULL)
	{
		return (0);
	}
	while (currentHead)
	{
		printf("%d\n", currentHead->n);
		count++;
		currentHead = currentHead->next;
	}
	return (count);
}
