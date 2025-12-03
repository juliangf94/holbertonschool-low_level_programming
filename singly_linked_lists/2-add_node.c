#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * _strlen - Calculates the length of a string, necessary because
 * the standard strlen is often forbidden.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	if (s == NULL)
		return (0);

	while (s[len] != '\0')
		len++;

	return (len);
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
	char *dup_str = NULL;
	unsigned int len = 0;
	unsigned int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (str != NULL)
	{
		len = _strlen(str);
		dup_str = malloc(sizeof(char) * (len + 1));

		if (dup_str == NULL)
		{
			free(new_node);
			return (NULL);
		}

		for (i = 0; i <= len; i++)
			dup_str[i]  = str[i];
	}

	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
