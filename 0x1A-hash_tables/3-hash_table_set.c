#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	if (!ht || !key || !*key)
		return (0);

	index = hash_djb2((unsigned char *)key) % ht->size;
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			/* Update the value */
			free(current->value);
			current->value = strdup(value);
			return (current->value ? 1 : 0);
		}
		current = current->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!new_node->key || !new_node->value)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
