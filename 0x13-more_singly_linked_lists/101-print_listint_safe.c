#include "lists.h"

/**
 * isLoop - checks if a list is a loop
 * @addresses: array of node addresses
 * @node: pointer to the head of the list
 *
 * Return: 1 if list is a loop, otherwise 0
 */
int isLoop(listint_t **addresses, listint_t *node)
{
	int i = 0;

	while (addresses[i])
	{
		if (addresses[i] == node)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;
	listint_t *node;
	listint_t *addresses[100];

	if (head == NULL)
	{
		return (0);
	}

	node = (listint_t *)head;
	while (node)
	{
		if (isLoop(addresses, node))
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)node, node->n);
		addresses[size] = node;
		size++;
		node = node->next;
	}
	return (size);
}
