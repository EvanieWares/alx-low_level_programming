#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the pointer to the head node
 * @idx: index to insert the new node
 * @n: data (n) to add in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *node = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;


	while (node != NULL && i < idx - 1)
	{
		node = node->next;
		i++;
	}
	if (node == NULL || node->next == NULL)
	{
		return (NULL);
	}
	new->next = node->next;
	new->prev = node;
	node->next->prev = new;
	node->next = new;
	return (new);
}