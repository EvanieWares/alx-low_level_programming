#include "hash_tables.h"

/**
 * insert_sorted - inserts a new element in a sorted list
 * @h: pointer to the pointer to the first element of the list
 * @t: pointer to the pointer to the last element of the list
 * @new_node: the node to add to list
 */
void insert_sorted(shash_node_t **h, shash_node_t **t, shash_node_t *new_node)
{
	shash_node_t *current;

	if (*h == NULL || strcmp(new_node->key, (*h)->key) <= 0)
	{
		new_node->snext = *h;
		new_node->sprev = NULL;
		if (*h != NULL)
		{
			(*h)->sprev = new_node;
		}
		*h = new_node;
		if (*t == NULL)
		{
			*t = new_node;
		}
		return;
	}

	current = *h;
	while (current->snext && strcmp(new_node->key, current->snext->key) > 0)
	{
		current = current->snext;
	}

	new_node->snext = current->snext;
	new_node->sprev = current;
	if (current->snext != NULL)
	{
		current->snext->sprev = new_node;
	}
	current->snext = new_node;

	if (new_node->snext == NULL)
	{
		*t = new_node;
	}
}

/**
 * shash_table_create - creates a hash table
 * @size: size of the hash table
 *
 * Return: pointer to the newly created hash table,
 * otherwise NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table;

	hash_table = malloc(sizeof(shash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->array = malloc(size * sizeof(shash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	hash_table->size = size;
	hash_table->shead = NULL;
	hash_table->stail = NULL;
	return (hash_table);
}

/**
 * shash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, otherwise 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *current;

	if (!ht || !key || !*key)
		return (0);

	index = hash_djb2((unsigned char *)key) % ht->size;
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (current->value ? 1 : 0);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->snext = NULL;
	new_node->sprev = NULL;
	new_node->next = NULL;
	if (!new_node->key || !new_node->value)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	insert_sorted(&(ht->shead), &(ht->stail), new_node);
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key
 *
 * Return: value associated with the element, or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (!ht || !key || !*key)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	int first = 1;
	shash_node_t *current;

	if (!ht)
	{
		return;
	}

	printf("{");
	current = ht->shead;
	while (current)
	{
		if (!first)
		{
			printf(", ");
		}
		printf("'%s': '%s'", current->key, current->value);
		first = 0;
		current = current->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int first = 1;
	shash_node_t *current;

	if (!ht)
	{
		return;
	}

	printf("{");
	current = ht->stail;
	while (current)
	{
		if (!first)
		{
			printf(", ");
		}
		printf("'%s': '%s'", current->key, current->value);
		first = 0;
		current = current->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		shash_node_t *current = ht->array[i];

		while (current)
		{
			shash_node_t *temp = current;

			current = current->next;
			temp->snext = NULL;
			temp->sprev = NULL;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	ht->shead = NULL;
	ht->stail = NULL;
	free(ht->array);
	free(ht);
}
