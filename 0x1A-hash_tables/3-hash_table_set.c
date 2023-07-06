#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key. key can not be an empty string
 * @value: the value associated with the key. value must be duplicated./
 * value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *tmp;

	index = key_index(key, ht->size);
	if (strlen(key) == 0)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = key;
	node->value = value;
	node->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	tmp = ht->array[index];
	node->next = tmp;
	ht->array[index] = node;
	return (1);
}
