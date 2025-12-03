#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: A pointer to the head of the list to be freed.
 *
 * Description: Iterates through the list, freeing each node safely
 * by preserving the pointer to the next node before freeing the current one.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	dlistint_t *next_node;

	/*temp apunta a la cabeza, se libera en cada iteracion*/
	temp = head;
	while (temp != NULL)
	{
		/*Guardamos la direccion del siguiente nodo*/
		next_node = temp->next;
		/*Desasignamos la memoria del noodo que apunta temp*/
		free(temp);
		/*Actualizamos el puntero temp con la siguiente direccion*/
		temp = next_node;
	}
}
