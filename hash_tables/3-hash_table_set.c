#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_new_node - Creates a new hash table node.
 * @key: The key string.
 * @value: The value string to associate with the key.
 *
 * Return: Pointer to the new node, or NULL on failure.
 */
static hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new_node;
	/* Allocate memory for the new node structure */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	/* Duplicate the key */
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* Duplicate the value (must be duplicated, even if empty string) */
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - Adds an element (key/value pair) to the hash table.
 * @ht: The hash table to add or update the element in.
 * @key: The key string (cannot be empty).
 * @value: The value associated with the key (must be duplicated).
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current_node, *new_node;
	/*Validate inputs*/
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	/*Calculate the index using the key_index function*/
	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];
	/*Check for existing key (collision list traversal)*/
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			/*Key found: Update the value and return 1*/
			free(current_node->value);/*Free the old value*/
			current_node->value = strdup(value);/*Duplicate the new value*/
			if (current_node->value == NULL)
				return (0); /* Allocation failure */
			return (1);
		}
		current_node = current_node->next;
	}
	/*Key not found: Create a new node*/
	new_node = create_new_node(key, value);
	if (new_node == NULL)
		return (0); /*Node creation failed*/
	/*Insert new node at the beginning of the list (collision/new entry)*/
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
