#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head: a pointer to a pointer to the head of listint_t
 * @n: an integer value
 *
 * Return: Success, address of new element, Failure, NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Declare new node */
	listint_t *new_node;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)  /* Check if malloc was successful */
		return (NULL);

	/* Initialize new node */
	new_node->n = n;
	new_node->next = *head;

	/* Update head to point to new node */
	*head = new_node;

	return (new_node);
}
