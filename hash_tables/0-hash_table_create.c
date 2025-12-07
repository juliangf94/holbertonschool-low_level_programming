#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array (number of buckets).
 *
 * Return: A pointer to the newly created hash table, or NULL if it fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	/*Allocate memory for the hash table*/
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	/*Set the size*/
	ht->size = size;
	/*Allocate memory for the array of node pointers*/
	/*Use calloc to allocate and intialize all elements to NULL*/
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}
