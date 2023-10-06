#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count = 0;
	hash_node_t *node;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
		{
			continue;
		}
		node = ht->array[i];
		while (node)
		{
			if (count >= 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			count++;
			node = node->next;
		}
	}

	printf("}\n");
}
