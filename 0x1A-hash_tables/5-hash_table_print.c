#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	int i;

	printf("{");
	for (i = 0; i < ht->size;i++)
	{
		printf("'%s': '%s'",ht->array[i])
	}
	printf("}");
}