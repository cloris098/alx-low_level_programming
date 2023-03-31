#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list
 * @h: the list_t list
 * Return: the number of nodes in h
 */

size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			nodes++;
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			nodes++;
			h = h->next;
		}
	}

	return (nodes);
}
