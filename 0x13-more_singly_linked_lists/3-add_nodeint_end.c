#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of a listint_t list.
 * @head: a double pointer to the head of the listint_t list.
 * @n: an integer value to be added to the of the new node
 *
 * Return: Failure: NULL, Success: address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *end_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node with the given data */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
		*head = new_node;
	else
	{
		/* Traverse the list to the last node */
		end_node = *head;
		while (end_node->next != NULL)
			end_node = end_node->next;

		/* Attach the new node to the end of the singly linked list */
		end_node->next = new_node;
	}

	return (*head);
}
