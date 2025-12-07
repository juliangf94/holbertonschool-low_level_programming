#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key being looked for.
 *
 * Return: The value associated with the element, or NULL if the key
 * couldn't be found or on invalid input.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;
	/*Validate inputs*/
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	/*Calculate the index for the key*/
	index = key_index((const unsigned char *)key, ht->size);
	/*Get the head of the linked list at that index*/
	current_node = ht->array[index];
	/*Traverse the linked list (handling collisions)*/
	while (current_node != NULL)
	{
		/*Check if the current node's key matches the search key*/
		if (strcmp(current_node->key, key) == 0)
		{
			/*Key found: Return the associated value*/
			return (current_node->value);
		}
		/*Move to the next node in the chain*/
		current_node = current_node->next;
	}
	/*Key not found in the list*/
	return (NULL);
}
