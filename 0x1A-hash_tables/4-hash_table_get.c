#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to table
 * @key: key of the node
 * Return: return the value of a key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *current;

    index = key_index((const unsigned char *)key, ht->size);

    current = ht->array[index];

    while (current && strcmp(current->key, key) != 0)
    {
        current = current->next;
    }
    if (current == NULL)
        return (NULL);
    return (current->value);
}
