#include "hash_tables.h"

/**
 * hash_table_print -  prints a hash table.
 * @ht: the hash table you want to print.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	int flag = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		for (tmp = ht->array[i]; tmp; tmp = tmp->next)
		{
			if (flag)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				flag = 0;
			}
			else
			{
				printf(", '%s': '%s'", tmp->key, tmp->value);
			}
		}
	}
	printf("}\n");
}

