#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * make_node - creates a hash node with duplicated key and value
 * @key: the key
 * @value: the value
 *
 * Return: pointer to the new node, or NULL on failure
 */
hash_node_t *make_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	(*node).key = strdup(key);
	if ((*node).key == NULL)
	{
		free(node);
		return (NULL);
	}
	(*node).value = strdup(value);
	if ((*node).value == NULL)
	{
		free((*node).key);
		free(node);
		return (NULL);
	}
	return (node);
}

/**
 * hash_table_set - adds or updates an element in the hash table
 * @ht: hash table to add or update the key/value in
 * @key: the key, cannot be an empty string
 * @value: value associated with the key, duplicated, can be empty
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;
	char *dup;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, (*ht).size);
	node = (*ht).array[index];
	while (node != NULL)
	{
		if (strcmp((*node).key, key) == 0)
		{
			dup = strdup(value);
			if (dup == NULL)
				return (0);
			free((*node).value);
			(*node).value = dup;
			return (1);
		}
		node = (*node).next;
	}

	node = make_node(key, value);
	if (node == NULL)
		return (0);
	(*node).next = (*ht).array[index];
	(*ht).array[index] = node;
	return (1);
}
