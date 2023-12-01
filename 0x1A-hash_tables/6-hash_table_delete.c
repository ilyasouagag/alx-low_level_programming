#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	hash_node_t *del;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				del = temp;
				temp = temp->next;
				free(del->key);
				free(del->value);
				free(del);
			}
		}
	}
	free(ht->array);
	free(ht);
}
