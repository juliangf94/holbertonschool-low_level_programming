0x17. C - Doubly Linked Lists

This project focuses on the implementation and manipulation of doubly linked lists in the C programming language.

Data Structure

The standard structure used throughout this project is the doubly linked list node:

/**
 * struct dlistint_s - doubly linked list
 * @n: integer data stored in the node
 * @prev: pointer to the previous node in the list
 * @next: pointer to the next node in the list
 *
 * Description: doubly linked list node structure for Holberton project
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;


Tasks Implemented

File

Description

Prototype

0-print_dlistint.c

Prints all the integer elements of a dlistint_t list.

size_t print_dlistint(const dlistint_t *h);

1-dlistint_len.c

Returns the number of elements in a dlistint_t list.

size_t dlistint_len(const dlistint_t *h);

2-add_dnodeint.c

Adds a new node at the beginning of a dlistint_t list.

dlistint_t *add_dnodeint(dlistint_t **head, const int n);

3-add_dnodeint_end.c

Adds a new node at the end of a dlistint_t list.

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

4-free_dlistint.c

Frees a dlistint_t list.

void free_dlistint(dlistint_t *head);

5-get_dnodeint.c

Returns the nth node of a dlistint_t linked list.

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

6-sum_dlistint.c

Returns the sum of all the data (n) of a dlistint_t linked list.

int sum_dlistint(dlistint_t *head);

7-insert_dnodeint.c

Inserts a new node at a given position (idx).

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

8-delete_dnodeint.c

Deletes the node at index index of a dlistint_t linked list.

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
