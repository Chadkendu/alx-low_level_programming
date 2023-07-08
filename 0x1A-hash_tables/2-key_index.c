#include "hash_tables.h"

/**
 * key_index - function that calculates index of key in hash table array
 *
 * Description:
 * @key: key
 * @size: size for the array
 *
 * Return: index which the key should store
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}
