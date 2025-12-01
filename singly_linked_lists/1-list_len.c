#include "lists.h"
#include <stdio.h>

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: A pointer to the head of the list (constant).
 *
 * Return: The number of nodes (elements) in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
