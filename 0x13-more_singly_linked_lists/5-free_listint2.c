#include "lists.h"

/**
 * free_listint2 - frees listint_t list
 * @head: pointer to the pointer to the head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	while (*head)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
