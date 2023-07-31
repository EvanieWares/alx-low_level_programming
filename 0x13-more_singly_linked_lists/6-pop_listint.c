#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node's data (n)
 * @head: pointer to the pointer to the head of the list
 *
 * Return: the head node's data, or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int n = 0;

	if (*head != NULL)
	{
		listint_t *temp = *head;

		n = temp->n;
		*head = (*head)->next;
		free(temp);
	}
	return (n);
}
