#include "hash_tables.h"
/**
 *
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
 *
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
 * 
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
 * 
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
 * 
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
 * 
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
int main(void)
{
    shash_table_t *ht;

    ht = shash_table_create(1024);
    shash_table_set(ht, "y", "0");
    shash_table_print(ht);
    shash_table_set(ht, "j", "1");
    shash_table_print(ht);
    shash_table_set(ht, "c", "2");
    shash_table_print(ht);
    shash_table_set(ht, "b", "3");
    shash_table_print(ht);
    shash_table_set(ht, "z", "4");
    shash_table_print(ht);
    shash_table_set(ht, "n", "5");
    shash_table_print(ht);
    shash_table_set(ht, "a", "6");
    shash_table_print(ht);
    shash_table_set(ht, "m", "7");
    shash_table_print(ht);
    shash_table_print_rev(ht);
        shash_table_delete(ht);
    return (EXIT_SUCCESS);
}
