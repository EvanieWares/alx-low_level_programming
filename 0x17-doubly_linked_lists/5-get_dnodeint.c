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
	dlistint_t *current = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (current && i < index)
	{
		current = current->next;
		i++;
	}
	if (i == index)
	{
		return (current);
	}
	return (NULL);
}
