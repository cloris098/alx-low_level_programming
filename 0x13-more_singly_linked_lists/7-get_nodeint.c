#include "lists.h"

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
		return (NULL);

	listint_t *node = head;

	for (unsigned int i = 0; i < index; i++)
	{
		node = node->next;

		if (node == NULL)
			return (NULL);
	}

	return (node);
}
