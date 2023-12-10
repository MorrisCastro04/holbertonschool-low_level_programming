#include "hash_tables.h"
/**
 * hash_table_get - gets value of the key
 * @ht: the hash table
 * @key: the key
 * Return: Return the value otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
		return (0);

	i = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
