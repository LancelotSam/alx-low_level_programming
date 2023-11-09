#include "hash_tables.h"
/**
 * hash_table_print-this si the main function
 * it prints the items in a hash table
 * @ht: the table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}
	}
	printf("}\n");
}
