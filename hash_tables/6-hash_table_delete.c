#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node, *temp_node;

	/*If ht is null, do nothing*/
	if (ht == NULL)
		return;
	/*Iterate though the array*/
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		/*Traverse and free the linked list at the current index*/
		while (current_node != NULL)
		{
			/*Store the next node before free the current one*/
			temp_node = current_node->next;
			/*Free the key and value*/
			free(current_node->key);
			free(current_node->value);
			/*Free the node structure*/
			free(current_node);
			/*Move to the next node*/
			current_node = temp_node;
		}
	}
	/*Free the array of pointers*/
	free(ht->array);
	/*Free the structure*/
	free(ht);
}
