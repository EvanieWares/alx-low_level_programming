#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the pointer of the head of the list
 * @n: item to add
 *
 * Return: address of the new element, ot NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *lastNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	lastNode = *head;
	while (lastNode->next)
	{
		lastNode = lastNode->next;
	}

	lastNode->next = newNode;

	return (lastNode);
}
