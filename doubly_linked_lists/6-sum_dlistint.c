#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list.
 * @head: A pointer to the head (start) of the dlistint_t list.
 *
 * Return: The total sum of all 'n' values, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
