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
	hash_node_t **array;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (0);
	array = malloc(size * sizeof(hash_node_t *));
	if (!array)
		return (0);
	for (i = 0; i < size; i++)
		array[i] = NULL;
	table->size = size;
	table->array = array;

	return (table);
}
