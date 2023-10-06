#include "hash_tables.h"

/**
 * hash_table_create - Function creates a new hash table
 *
 * @size: Size of the array
 *
 * Return: If an error occurs - NULL.
 *	otherwise - a pointer to the new hash table.
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned long int i;

	h_table = malloc(sizeof(hash_table_t));

	if (h_table == NULL)
		return (NULL);

	h_table->size = size;
	h_table->array = calloc(h_table->size, sizeof(hash_node_t *));

	if (h_table->array == NULL)
		return (NULL);

	for (i = 0; i < h_table->size; i++)
	{
		h_table->array[i] = NULL;
	}

	return (h_table);
}
