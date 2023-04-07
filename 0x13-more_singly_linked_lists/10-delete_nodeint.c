#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at the specified index
 * @head: pointer to pointer of the first node
 * @index: index of the node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *curr = *head;
	unsigned int i;

	if (*head == NULL) /* Check if list is empty */
		return (-1);

	if (index == 0) /* Special case for deleting first node */
	{
		*head = curr->next;
		free(curr);
		return (1);
	}

	/* Traverse the list to find the node to be deleted */
	for (i = 0; i < index && curr != NULL; i++)
	{
		prev = curr;
		curr = curr->next;
	}

	if (curr == NULL) /* Check if index is out of range */
		return (-1);

	prev->next = curr->next; /* Remove the node from the list */
	free(curr);
	return (1);
}
