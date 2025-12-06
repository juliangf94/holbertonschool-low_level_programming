#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: A pointer to the head (start) of the dlistint_t list.
 * @index: The index of the node to retrieve, starting from 0.
 *
 * Return: A pointer to the node at the specified index, or NULL if the
 * node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	current = head;
	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
