#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head node
*/
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		dlistint_t *temp = head;

		head = head->next;
		free(temp);
	}
}
