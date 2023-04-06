#include "lists.h"

/**
 * sum_listint - Computes the sum of all the data of a listint_t linked list.
 * @head: A pointer to the head node of the list.
 *
 * Return: The sum of all the data (n) of the list.
 */

int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);

	int sum = head->n;

	head = head->next;

	return (sum + sum_listint(head));
}
