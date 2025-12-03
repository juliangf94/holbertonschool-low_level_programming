#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
static unsigned int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: double pointer to the list_t list (used to modify the head pointer)
 * @str: the string to put in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;
	char *dup_str;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = dup_str;
	new_node->len = _strlen(dup_str);
	new_node->next = NULL;
	/*Case A: List is empty, the new node becomes the head*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/*Case B: List is not empty, traverse to the end*/
	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new_node;
	return (new_node);
}
