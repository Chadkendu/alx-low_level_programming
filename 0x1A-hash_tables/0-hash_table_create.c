#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 *
 * Description:
 * @size: size of the array
 *
 * Return: pointer to the new created hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	hash_table->size = size;

	return (hash_table);
}
