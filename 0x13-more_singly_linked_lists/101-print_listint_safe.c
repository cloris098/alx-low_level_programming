#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a list of integers safely.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *current_node = head, *temp_node = NULL;

	while (current_node != NULL)
	{
		printf("[%p] %i\n", (void *)current_node, current_node->n);
		node_count++;

		if (current_node < current_node->next && temp_node < current_node->next)
			temp_node = current_node->next;
		else
			break;

		current_node = current_node->next;
	}

	if (current_node != NULL && temp_node != NULL)
	{
		printf("-> [%p] %i\n", (void *)current_node->next, current_node->next->n);
		node_count++;
	}

	return (node_count);
}
