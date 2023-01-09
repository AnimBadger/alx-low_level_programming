#include "hash_tables.h"

/**
 * hash_table_create - create a hash table with a given size
 * @size: size of hash table
 * Return: the created hash table, NULL if fail
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int i;

	table = malloc(sizeof(hash_node_t));
	if (table == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = NULL;
	}

	table->array = array;
	table->size = size;

	return (table);
}
