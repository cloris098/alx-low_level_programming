#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list.
 * @head: a pointer to a pointer to the head of the listint_t list
 *
 * Return: If the linked list is empty - 0, else, the data in the head node
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *next_node;

	if (*head == NULL)
		return (0);

	value = (*head)->n;
	next_node = (*head)->next;

	free(*head);
	*head = next_node;

	return (value);
}
