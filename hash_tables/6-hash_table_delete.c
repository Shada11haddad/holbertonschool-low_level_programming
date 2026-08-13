#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table and frees all its memory
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	hash_node_t *next;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < (*ht).size; i++)
	{
		node = (*ht).array[i];
		while (node != NULL)
		{
			next = (*node).next;
			free((*node).key);
			free((*node).value);
			free(node);
			node = next;
		}
	}
	free((*ht).array);
	free(ht);
}
