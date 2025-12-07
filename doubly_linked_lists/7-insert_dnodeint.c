#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position (idx).
 * @h: A pointer to a pointer to the head of the dlistint_t list.
 * @idx: The index where the new node should be added (starting at 0).
 * @n: The integer data for the new node.
 *
 * Return: The address of the new node, or NULL if it failed or if the
 * index is out of range.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node;
	unsigned int i;
	/*Case 1: Insert First node*/
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	/*Case 2: Index out of bounds*/
	if (current == NULL)
		return (NULL);
	/*Case 3: Insertion at the end*/
	if (current->next == NULL && i + 1 == idx)
		return (add_dnodeint_end(h, n));
	/*Case 4: Standard insertion in the middle*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	/*[current] <-> [new_node] <-> [current->next]*/
	new_node->next = current->next;
	new_node->prev = current;

	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
