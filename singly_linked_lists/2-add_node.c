#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Returns the length of a string.
 * @s: The string to check.
 *
 * Return: The length of the string.
 */
static unsigned int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A double pointer (pointer to a pointer) to the head of the list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	unsigned int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (str == NULL)
	{
		dup_str = NULL;
		len = 0;
	}
	else
	{
		dup_str = strdup(str);
		if (dup_str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		len = _strlen(dup_str);
	}
	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
