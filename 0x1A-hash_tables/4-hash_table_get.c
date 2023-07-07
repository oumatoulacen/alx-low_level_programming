
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element, /
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
		tmp = tmp->next;
	}
	return (0);
}
