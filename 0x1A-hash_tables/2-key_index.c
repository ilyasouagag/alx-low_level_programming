#include "hash_tables.h"
/**
 * 
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;

	value = hash_djb2(key);
	return (value % size);
}
