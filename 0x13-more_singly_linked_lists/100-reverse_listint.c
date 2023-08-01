#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer to the head of the list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new, *temp;

	if (*head == NULL)
	{
		return NULL;
	}
	new = NULL;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		temp->next = new;
		new = temp;
	}
	*head = new;
	return (*head);
}
