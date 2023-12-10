#include "hash_tables.h"
/**
 * hash_table_set - adds a element to the hash table
 * @ht: the hash table
 * @key: is the key
 * @value: value associated to the key
 * Return: Return 1 if succeeded 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *node;

	if (key == NULL || ht == NULL)
		return (0);

	i = key_index((unsigned char *) key, ht->size);
	node = ht->array[i];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[i];
	ht->array[i] = node;
	return (1);
}
