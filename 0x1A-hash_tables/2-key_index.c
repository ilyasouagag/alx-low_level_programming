#include "hash_tables.h"
/**
 * key_index - function that gives the index of a key
 * @key: key of the node
 * @size: size of table
 * Return: return the index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;

	value = hash_djb2(key);
	return (value % size);
}
