#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */

size_t print_listint(const listint_t *h)
{
	/* Initialize a variable to count the number of nodes*/
	size_t node_count = 0;

	/* Loop through the linked list until the end is reached*/
	while (h)
	{

		/*Increment the node count and print the value of the current node*/
		node_count++;
		printf("%d\n", h->n);

		/* Move on to the next node in the list*/
		h = h->next;
	}

	/* Return the total number of nodes in the linked list*/
	return (node_count);
}
