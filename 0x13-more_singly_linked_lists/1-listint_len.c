#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	/* Initialize a variable to count the number of nodes */
	size_t num_nodes = 0;

	/* Loop through the linked list until the end is reached*/
	while (h)
	{
		/* Increment the node count */
		num_nodes++;

		/* Move on to the next node in the list */
		h = h->next;
	}

	/* Return the total number of nodes in the linked list */
	return (num_nodes);
}
