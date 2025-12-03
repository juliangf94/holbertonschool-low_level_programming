#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the beginning of the list.
 *
 * Description: This function traverses the linked list, freeing first the
 * duplicated string (str field) and then the node structure itself,
 * using a temporary pointer to keep track of the next node before freeing
 * the current one. This is crucial to avoid losing the list's trail.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		/* 1. Save the address of the next node. */
		temp = head->next;
		/* 2. Free the duplicated string (str field). */
		free(head->str);
		/* 3. Free the current node structure (head). */
		free(head);
		/* 4. Move to the next node stored in 'temp'. */
		head = temp;
	}
}
