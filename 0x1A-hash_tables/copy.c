#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr, *tmp;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			curr = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = curr;
		}
	}
	free(ht->array);
	free(ht);
}

