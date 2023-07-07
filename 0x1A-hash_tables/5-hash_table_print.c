#include "hash_tables.h"

/**
 * hash_table_print -  prints a hash table.
 * @ht: the hash table you want to print.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (flag == 1)
				printf(", ");
			tmp = ht->array[i];
			while (tmp)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
			}
			flag = 1;
		}
	}
	printf("}\n");
}

