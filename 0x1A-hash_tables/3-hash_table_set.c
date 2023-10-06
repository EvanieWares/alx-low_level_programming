#include "hash_tables.h"

/**
 * key_exist - checks if the key already exit, if yes, update the value
 * @key: the key
 * @value: value associated with the key
 *
 * Return: 1 if key exist, otherwise 0
 */
int key_exist(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *node = head;

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
	}
	return (0);
}

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
	hash_node_t *node;

	if (key == NULL || strcmp(key, "") == 0)
	{
		return (0);
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	index = key_index((const unsigned char *) key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		if (key_exist(ht->array[index], key, value))
		{
			return (1);
		}
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}
