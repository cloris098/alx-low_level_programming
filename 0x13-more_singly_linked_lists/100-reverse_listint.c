#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to pointer of the first node
 *
 * Return: pointer to the new first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *curr = *head, *next;

	if (head == NULL || *head == NULL) /* Check if list is empty */
		return (NULL);

	while (curr != NULL) /* Traverse the list and reverse pointers */
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	*head = prev; /* Update the head pointer to the new first node */
	return (*head);
}
