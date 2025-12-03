#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Double pointer to the head of the dlistint_t list.
 * @n: The integer value to store in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
		new_node->next = *head;
	}
	else
	{
		new_node->next = NULL;
	}
	*head = new_node;
	return (new_node);
}
