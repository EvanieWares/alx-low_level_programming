#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head node
 * @index: index of the node to return
 *
 * Return: pointer to the nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node;

	if (head == NULL)
	{
		return (NULL);
	}

	node = head;
	while (node->next && i <= index)
	{
		if (i == index)
		{
			return (node);
		}
		node = node->next;
		i++;
	}

	return (NULL);
}
