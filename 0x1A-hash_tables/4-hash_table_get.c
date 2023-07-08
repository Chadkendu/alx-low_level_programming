#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves the value associated with key
 *
 * Description:
 * @ht: hash table to look into
 * @key: key to look for
 *
 * Return: value associated with the key, or NULL if key can't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	head = ht->array[index];
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);

		head = head->next;
	}

	return (NULL);
}
