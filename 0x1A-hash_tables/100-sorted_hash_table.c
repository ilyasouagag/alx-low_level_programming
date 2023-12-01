#include "hash_tables.h"
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
/**
 * shash_table_create - funtion that creates a table
 * @size: size of the table
 * Return: return table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *table;

	table = malloc(sizeof(shash_table_t));
	if (!table)
		return (NULL);
	table->array = malloc(size * sizeof(shash_node_t *));
	if (!table->array)
		return (NULL);
	table->size = size;

	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}
/**
 * shash_table_set - set a table with elements
 * @ht: pointer to table
 * @key: key of the node
 * @value: value of the node
 * Return: 1 if it's added else 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *other, *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	other = ht->shead;
	while (other)
	{
		if (strcmp(other->key, key) == 0)
		{
			free(other->value);
			other->value = strdup(value);
			if (!other->value)
				return (0);
			return (1);
		}
		other = other->next;
	}

	current = malloc(sizeof(shash_node_t));
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
	current->next = ht->array[index];
	ht->array[index] = current;
	if (ht->shead == NULL)
	{
		current->sprev = NULL;
		current->snext = NULL;
		ht->shead = current;
		ht->stail = current;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		current->sprev = NULL;
		current->snext = ht->shead;
		ht->shead->sprev = current;
		ht->shead = current;
	}
	else
	{
		other = ht->shead;
		while (other->snext != NULL && strcmp(other->snext->key, key) < 0)
			other = other->snext;
		current->sprev = other;
		current->snext = other->snext;
		if (other->snext == NULL)
			ht->stail = current;
		else
			other->snext->sprev = current;
		other->snext = current;
	}

	return (1);
}
/**
 * shash_table_get - get the value with only an index
 * @ht: pointer to table
 * @key: key of the node
 * Return: return the value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	current = ht->shead;

	while (current && strcmp(current->key, key) != 0)
	{
		current = current->snext;
	}
	if (current == NULL)
		return (NULL);
	return (current->value);
}
/**
 * shash_table_print - print table in order
 * @ht: pointer to table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->shead;
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - print table in reversed order
 * @ht: pointer to table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->stail;
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - delete the table
 * @ht: pointer to table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(head->array);
	free(head);
}
