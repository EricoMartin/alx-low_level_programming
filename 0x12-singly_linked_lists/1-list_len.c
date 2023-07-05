#include "lists.h"

/**
 * list_len - function that returns the number of items in a linked list
 * @h: a linked list
 * Return: Number of items in list
 */

size_t list_len(const list_t *h)
{
	size_t nodes;

	nodes = 1;

	if (h->next == NULL)
		return (0);
	while (h->next != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
