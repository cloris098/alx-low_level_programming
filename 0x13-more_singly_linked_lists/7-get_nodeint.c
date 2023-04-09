#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_nodeint_at_index - returns the node of a listint_t list at a given index
 * @head: A pointer to the head of the listint_t list
 * @index: The index of the node to be returned
 *
 * Return: if the node at the given index does not exist, NULL
 * else a pointer to the node at the given index.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
	{
		return (NULL);
	}

	listint_t *current = head;
	unsigned int i;

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	return (current == NULL ? NULL : current);
}
