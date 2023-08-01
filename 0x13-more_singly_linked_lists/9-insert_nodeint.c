#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the pointer to the head of the list
 * @idx: the index of the list where the new node should be added
 * @n: number to be set in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prev, *current;
	unsigned int index = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	current = *head;
	while (index != idx)
	{
		if (current == NULL)
		{
			return (NULL);
		}
		prev = current;
		current = current->next;
		index++;
	}
	new->next = current;
	prev->next = new;
	return (new);
}
