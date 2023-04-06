#include "lists.h"

/**
 * free_listint - frees a singly linked list listint_t
 * @head: a pointer to the head of the listint_t list
 */

void free_listint(listint_t *head)
{
	listint_t *current = head, *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}

	head = NULL;
}
