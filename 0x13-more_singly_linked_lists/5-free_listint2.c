#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL.
 * @head: A pointer to the head of the listint_t list to be freed.
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}

	*head = NULL;
}
