#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a specific index
 * of a dlistint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	/*Empty list or NULL head pointer*/
	if (!head || !*head)
		return (-1);
	/*Delete the head node (index 0)*/
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	/*Traverse to the node to be deleted*/
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	/*Node not found*/
	if (current == NULL)
		return (-1);
	/*[current->prev] <-> [current] <-> [current->next]*/
	/*Link the prev to the next: current->prev->next = current->next */
	current->prev->next = current->next;
	/*Link the next to the prev*/
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
