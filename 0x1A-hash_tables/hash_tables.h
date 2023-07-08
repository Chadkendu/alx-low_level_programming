#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - the node of hash table
 *
 * Description:
 * @key: unique key, string in hash table
 * @value: value corresponding to a key
 * @next: pointer to next node of the List
 */

typedef struct hash_node_s
{
	char *value;
	char *key;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - the hash table data structure
 *
 * Description:
 * @size: size of the array
 * @array: array of size @size
 * Each cell of the array is a pointer to first node of linked list
 */

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
char *hash_table_get(const hash_table_t *ht, const char *key);
hash_table_t *hash_table_create(unsigned long int size);
void hash_table_print(const hash_table_t *ht);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
void hash_table_delete(hash_table_t *ht);

#endif

