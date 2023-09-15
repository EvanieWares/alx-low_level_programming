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
	unsigned int i = 1;
	dlistint_t *new, *current;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	current = *h;
	while (current)
	{
		if (i == idx)
		{
			if (current->next)
			{
				new = malloc(sizeof(dlistint_t));
				if (new != NULL)
				{
					new->n = n;
					new->next = current->next;
					new->prev = current;
					current->next->prev = new;
					current->next = new;
					return (new);
				}
			}
			else
			{
				return (add_dnodeint_end(h, n));
			}
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
