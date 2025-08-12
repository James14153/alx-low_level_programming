#ifndef _HASH_TABLES_H
#define _HASH_TABLES_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* data structures */

/**
 * struct hash_node_s - node of the hash tables
 *
 * @key: the key, string
 * the key is unique in the hash table
 * @value: the value corresponding to a key
 * @next: a pointer to the next node of the list
 */

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - structure of hash table
 *
 * @size: the size of array
 * @array: an array of @size
 * each cell of this array is a pointer to the first node of a linked list
 * because we want our hashtable to use  a chaining collision method
 */

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: the key, string
 * the key is unique in the hash table
 * @value: the value corresponding to a key
 * @next: a pointer to the next node of the list
 * @sprev: a pointer to the previous element of the sorted linked list
 * @snext: a pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - sorted hash table data structure
 *
 * @size: The size of the array
 * @array: an array of @size
 * Each cell of this array is a pointer to the first node of a linked list
 * because we want our Hash table to use a chain collision handling
 * @shead: A pointer to the first element of the linked list
 * @stail: A pointer to the last element of the linked list
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;



/* function prototypes  */
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/* function prototypes for sorted hash table */
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif
