#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list.
 * @h: A constant pointer to the head of the doubly linked list.
 *
 * Return: The total number of nodes (elements) in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
