#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 * @ht: a pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j;
	const hash_table_t *table_tmp = ht;
	hash_node_t *node_tmp;

	if (ht == NULL)
		return;

	for (i = 0, j = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			table_tmp->array[j] = ht->array[i];
			j++;
		}
	}
	for (i = 0; i < j; i++)
	{
		node_tmp = table_tmp->array[i];
		if (i == 0)
			printf("{");
		if (table_tmp->array[i]->next == NULL)
		{
			printf("'%s: '%s", node_tmp->key, node_tmp->value);
			if (i < j - 1)
				printf(", ");
			else
				printf("}\n");
		}
		if (table_tmp->array[i]->next != NULL)
		{
			while (node_tmp)
			{
				printf("'%s: '%s", node_tmp->key, node_tmp->value);
				printf(", ");
				node_tmp = node_tmp->next;
			}
		}
	}
}
