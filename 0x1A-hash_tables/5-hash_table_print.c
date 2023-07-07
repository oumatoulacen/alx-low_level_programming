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

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		if (tmp)
		{
			if (flag == 1)
				printf(", ");
			while (tmp)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				flag = 1;
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
}

