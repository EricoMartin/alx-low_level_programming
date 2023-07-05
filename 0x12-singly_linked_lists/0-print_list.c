#include "lists.h"
#include <stdlib.h>

/**
 * print_list - print the list of elements contained 
 * in the list.
 * @h: a linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = (int) nodes;

	if (h == NULL)
		return (0);

	while (h -> next != NULL)
	{
		nodes++;
	}
	printf("[%d] %s/n", h -> len, h -> str);

	return (nodes);
}
