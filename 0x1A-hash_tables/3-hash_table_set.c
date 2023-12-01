#include "hash_tables.h"
/**
 * hash_table_set - function that adds ana elemtn to the hash table
 * @ht: pointer to table
 * @key: key of the node
 * @value: value of the node
 * Return: return if the element has been added or no
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current;
	unsigned long int index;

	current = malloc(sizeof(hash_node_t));
	if (!current)
		return (0);

	current->key = malloc(strlen(key) + 1);
	if (!current->key)
		return (0);
	current->value = malloc(strlen(value) + 1);
	if (!current->value)
		return (0);
	strcpy(current->key, key);
	strcpy(current->value, value);
	current->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		current->next = ht->array[index];
		ht->array[index] = current;
	}
	else
	{
		ht->array[index] = current;
	}
	return (1);
}
