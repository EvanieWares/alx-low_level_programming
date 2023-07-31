#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;
	const listint_t *currentHead = h;

	if (currentHead == NULL)
	{
		return (0);
	}
	while (currentHead)
	{
		len++;
		currentHead = currentHead->next;
	}
	return (len);
}
