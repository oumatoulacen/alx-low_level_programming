#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array.
 * Return: a pointer to the newly created hash table or /
 * null if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **arr;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (0);
	arr = malloc(sizeof(hash_node_t) * size);
	if (!arr)
	{
		free(table);
		return (0);
	}
	table->size = size;
	table->array = arr;
	return (table);
}
