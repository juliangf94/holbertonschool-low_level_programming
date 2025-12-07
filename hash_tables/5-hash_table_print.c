#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 *
 * Description: Prints the key/value pairs in the order they appear
 * in the array, traversing the linked lists (chains) in order.
 * Format: {'key': 'value', 'key2': 'value2', ...}
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	char *separator = "";

	if (ht == NULL)
		return;/*Do nothing*/
	printf("{");
	/*Iterate though the array*/
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		/*Traverse the linked list at the current index*/
		while (current != NULL)
		{
			printf("%s'%s': '%s'", separator, current->key, current->value);
			separator = ", ";
			current = current->next;
		}
	}
	printf("}\n");
}
