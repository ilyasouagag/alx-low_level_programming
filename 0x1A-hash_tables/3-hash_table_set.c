#include "hash_tables.h"
/**
 * 
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t* current;
	hash_node_t* another;
	unsigned long int index;

	current = malloc(sizeof(hash_node_t));
	if (!current)
		return (0);

	current->key = malloc(strlen(key) + 1);
    current->value = malloc(strlen(value) + 1);
    strcpy(current->key, key);
    strcpy(current->value, value);
	current->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		another = ht->array[index];
		current->next = another;
		another = current;
	}
	else
	{
		ht->array[index] = current;
	}
	return (1);
}
