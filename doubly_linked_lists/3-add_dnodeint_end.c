#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Double pointer to the head of the dlistint_t list.
 * @n: The integer value to store in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	/*Puntero temporal, recorre la lista desde la cabeza hasta el ultimo nodo*/
	dlistint_t *current;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	/*Case 1: List is empty*/
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	/*Case 2: List is not empty*/
	current = *head;/*Inicia el puntero current al inicio de la lista*/
	while (current->next != NULL)
		current = current->next;/*Mueve el puntero al siguiente nodo*/
	/*Hace que el antiguo ultimo nodo apunte hacia adelante al new_node*/
	current->next = new_node;
	/*Hace que el new_node apunte hacia atras al antiguo ultimo nodo (current)*/
	new_node->prev = current;
	return (new_node);
}
